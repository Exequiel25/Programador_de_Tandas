#include "table.h"
#include "prog_de_tandas.h"
#include "ui_table.h"

QString initialPath = ".";

Table::Table(QWidget *parent) : QDialog(parent),
                                ui(new Ui::Table)
{
    ui->setupUi(this);
    QFile file("PATH.txt");
    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        QString FileData;
        while (!stream.atEnd())
        {
            FileData += stream.readLine();
        }
        originPathFolder = FileData;
        initialPath = FileData;
        ui->txtOriginPath->setText(originPathFolder);
    }
    file.close();
}

Table::~Table()
{
    delete ui;
}

void Table::on_volver_button_clicked()
{
    hide();
}

QString Table::selectDirectory()
{
    return QFileDialog::getExistingDirectory(this, tr("Open Directory"), initialPath, QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
}

void Table::on_browseOriginFolderButton_clicked()
{
    ui->txtOriginPath->setText(selectDirectory());
}

void Table::on_browseDestinyFolderButton_clicked()
{
    ui->txtDestinyPath->setText(selectDirectory());
}

void Table::select_day(QString day, QString dir)
{
    // debemos iterar en los archivos
    QDirIterator it(dir, QStringList() << "*.m3u", QDir::Files, QDirIterator::Subdirectories);

    while (it.hasNext())
    {
        QString content; // almacenamos los nombres de los archivos mp3
        // obtenemos direccion del archivo m3u
        QString filePath = it.next();
        int index = filePath.lastIndexOf("\\");
        if (index < 0)
        {
            index = filePath.lastIndexOf("/");
        }
        QString time = filePath.mid(index + 1).left(filePath.mid(index + 1).indexOf(".m3u"));

        // abrimos el archivo en modo solo lectura
        QFile inputFile(filePath);
        if (inputFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream inputStream(&inputFile);
            while (!inputStream.atEnd())
            {
                QString line = inputStream.readLine();
                // filtramos solo las lineas que terminen en .mp3
                if (line.endsWith(".mp3"))
                {
                    int index = line.lastIndexOf("\\");
                    if (index < 0)
                    {
                        index = line.lastIndexOf("/");
                    }
                    QString fileName = line.mid(index + 1);
                    content += fileName + ";\n";
                }
            }
            // cerramos el archivo
            inputFile.close();
            // remove last ";\n"
            content.chop(2);
            content = "\"" + content + "\"";
            // mapeamos nombre del archivo y contenido
            contentMap.insert(time, QMultiMap<QString, QString>{{day, content}});
        }
    }
}

QString Table::getContent(QString key)
{
    QString content = "";
    QStringList daysOfWeek = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    QStringList daysInMap = {};
    QStringList info = {};
    QMultiMap<QString, QMultiMap<QString, QString>>::iterator i;
    for (i = contentMap.find(key); i != contentMap.end() && i.key() == key; ++i)
    {
        QMultiMap<QString, QString> innerMap = i.value();
        QList<QString> days = innerMap.keys();
        daysInMap.prepend(days[0]);
        info.prepend(innerMap.value(days[0]));
    }
    for (int j = 0; j < 7; j++)
    {
        if (daysInMap.contains(daysOfWeek[j]))
        {
            QString mp3Names = info[daysInMap.indexOf(daysOfWeek[j])];
            content += "," + mp3Names;
        }
        else
            content += ",";
    }
    return content;
}

void Table::write2file(QString destinyPath)
{
    // obtenemos direccion del archivo:
    QString outputFilePath = destinyPath + "/output.csv";
    QFile outputFile(outputFilePath);
    if (outputFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream outputStream(&outputFile);

        // comenzamos la estructura del archivo (primera fila)
        outputStream << "Hora\\Dia,Lunes,Martes,Miercoles,Jueves,Viernes,Sabado,Domingo" << Qt::endl;

        // generamos todos los horarios posibles
        QString time, timeKey;
        for (int hour = 0; hour <= 23; hour++)
        {
            for (int minute = 0; minute <= 30; minute += 30)
            {
                time = QString("%1:%2").arg(hour, 2, 10, QChar('0')).arg(minute, 2, 10, QChar('0'));
                timeKey = QString("%1%2").arg(hour, 2, 10, QChar('0')).arg(minute, 2, 10, QChar('0'));

                // primera columna
                outputStream << time;
                outputStream << getContent(timeKey) << Qt::endl;

                if (hour == 23 && minute == 30)
                {
                    break;
                }
            }
        }

        outputFile.close();
    }
}

void Table::on_generateButton_clicked()
{
    QString destinyPath = ui->txtDestinyPath->text();
    QString originPathFolder = ui->txtOriginPath->text();
    if (destinyPath != "" && destinyPath != "")
    {
        QDirIterator it(originPathFolder);
        while (it.hasNext())
        {
            QString dir = it.next();

            if (dir.contains("1-Lunes"))
            {
                select_day("Lunes", dir);
            }
            else if (dir.contains("2-Martes"))
            {
                select_day("Martes", dir);
            }
            else if (dir.contains("3-Miercoles"))
            {
                select_day("Miercoles", dir);
            }
            else if (dir.contains("4-Jueves"))
            {
                select_day("Jueves", dir);
            }
            else if (dir.contains("5-Viernes"))
            {
                select_day("Viernes", dir);
            }
            else if (dir.contains("6-Sabado"))
            {
                select_day("Sabado", dir);
            }
            else if (dir.contains("7-Domingo"))
            {
                select_day("Domingo", dir);
            }
        }
        write2file(destinyPath);
        QMessageBox::information(this, "Resultado exitoso: Programador de tandas", "Archivo csv generado");
        contentMap.clear();
    }
}
