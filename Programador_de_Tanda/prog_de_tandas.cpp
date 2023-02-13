#include "prog_de_tandas.h"
#include "ui_prog_de_tandas.h"
#include "table.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QFile file("PATH.txt");
    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        QString FileData;
        while(!stream.atEnd())
        {
            FileData += stream.readLine();
        }
        PathFolder = FileData;
        ui->txtFolderPath->setText(PathFolder);
    }
    file.close();

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_browseFolderButton_clicked()
{
    PathFolder = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                             ".", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    QFile file("./PATH.txt");
    if (file.open(QIODevice::Truncate | QIODevice::ReadWrite))
    {
        QTextStream stream(&file);
        stream << PathFolder;
        ui->txtFolderPath->setText(PathFolder);
    }
    file.close();
}
void Widget::on_browseFileButton_clicked()
{
    PathFile = QFileDialog::getOpenFileName(this, tr("Open File"),
                                            ".");
    ui->txtFilePath->setText(PathFile);
}

void Widget::on_subir_boton_clicked()
{
    if (despla_v > 0)
    {
        save_checkbox();
        despla_v--;
        int horas[21] = {0};
        int minutos[21] = {0};
        for(int i=0; i < 21; i++)
        {
            horas[i] = 8 + despla_v * 6;
            minutos[i] = i * 30 + despla_v * 30;
            while (minutos[i] >= 60)
            {
                horas[i]++;
                minutos[i] -= 60;
            }
            if (horas[i] > 23)
            {
                horas[i] = horas[i]-24;
            }
        }
        ui->primer_horario->setText( QString::number(horas[0]/10) + QString::number(horas[0] % 10) + ":" + QString::number(minutos[0]/10) +  QString::number(minutos[0] % 10));
        ui->segundo_horario->setText( QString::number(horas[1]/10) + QString::number(horas[1] % 10) + ":" + QString::number(minutos[1]/10) +  QString::number(minutos[1] % 10));
        ui->tercer_horario->setText( QString::number(horas[2]/10) + QString::number(horas[2] % 10) + ":" + QString::number(minutos[2]/10) +  QString::number(minutos[2] % 10));
        ui->cuarto_horario->setText( QString::number(horas[3]/10) + QString::number(horas[3] % 10) + ":" + QString::number(minutos[3]/10) +  QString::number(minutos[3] % 10));
        ui->quinto_horario->setText( QString::number(horas[4]/10) + QString::number(horas[4] % 10) + ":" + QString::number(minutos[4]/10) +  QString::number(minutos[4] % 10));
        ui->sexto_horario->setText( QString::number(horas[5]/10) + QString::number(horas[5] % 10) + ":" + QString::number(minutos[5]/10) +  QString::number(minutos[5] % 10));
        ui->septimo_horario->setText( QString::number(horas[6]/10) + QString::number(horas[6] % 10) + ":" + QString::number(minutos[6]/10) +  QString::number(minutos[6] % 10));
        ui->octavo_horario->setText( QString::number(horas[7]/10) + QString::number(horas[7] % 10) + ":" + QString::number(minutos[7]/10) +  QString::number(minutos[7] % 10));
        ui->noveno_horario->setText( QString::number(horas[8]/10) + QString::number(horas[8] % 10) + ":" + QString::number(minutos[8]/10) +  QString::number(minutos[8] % 10));

        refrescar_checkbox();
    }
}

void Widget::on_bajar_boton_clicked()
{
    if (despla_v < 3)
    {
        save_checkbox();
        despla_v++;
        int horas[21] = {0};
        int minutos[21] = {0};
        for(int i=0; i < 21; i++)
        {
            horas[i] = 8 + despla_v * 6;
            minutos[i] = i * 30 + despla_v * 30;
            while (minutos[i] >= 60)
            {
                horas[i]++;
                minutos[i] -= 60;
            }
            if (horas[i] > 23)
            {
                horas[i] = horas[i]-24;
            }
        }
        ui->primer_horario->setText( QString::number(horas[0]/10) + QString::number(horas[0] % 10) + ":" + QString::number(minutos[0]/10) +  QString::number(minutos[0] % 10));
        ui->segundo_horario->setText( QString::number(horas[1]/10) + QString::number(horas[1] % 10) + ":" + QString::number(minutos[1]/10) +  QString::number(minutos[1] % 10));
        ui->tercer_horario->setText( QString::number(horas[2]/10) + QString::number(horas[2] % 10) + ":" + QString::number(minutos[2]/10) +  QString::number(minutos[2] % 10));
        ui->cuarto_horario->setText( QString::number(horas[3]/10) + QString::number(horas[3] % 10) + ":" + QString::number(minutos[3]/10) +  QString::number(minutos[3] % 10));
        ui->quinto_horario->setText( QString::number(horas[4]/10) + QString::number(horas[4] % 10) + ":" + QString::number(minutos[4]/10) +  QString::number(minutos[4] % 10));
        ui->sexto_horario->setText( QString::number(horas[5]/10) + QString::number(horas[5] % 10) + ":" + QString::number(minutos[5]/10) +  QString::number(minutos[5] % 10));
        ui->septimo_horario->setText( QString::number(horas[6]/10) + QString::number(horas[6] % 10) + ":" + QString::number(minutos[6]/10) +  QString::number(minutos[6] % 10));
        ui->octavo_horario->setText( QString::number(horas[7]/10) + QString::number(horas[7] % 10) + ":" + QString::number(minutos[7]/10) +  QString::number(minutos[7] % 10));
        ui->noveno_horario->setText( QString::number(horas[8]/10) + QString::number(horas[8] % 10) + ":" + QString::number(minutos[8]/10) +  QString::number(minutos[8] % 10));

        refrescar_checkbox();
    }
}

void Widget::on_cancelButton_clicked()
{
    dialog = new QDialog();
    dialog->setMinimumWidth(420);
    dialog->setMinimumHeight(100);
    dialog->setMaximumWidth(420);
    dialog->setMaximumHeight(100);
    dialog->setWindowTitle("Advertencia: Programador de Tandas");

    QLabel *label = new QLabel();
    label->setText("Esta acción no es reversible. ¿Está seguro que desea continuar?");
    label->setParent(dialog);
    label->setGeometry(20,20,350,25);
    label->show();

    QPushButton *confirm = new QPushButton();
    connect(confirm, SIGNAL(clicked()), this, SLOT(on_deleteall_clicked()));
    confirm->setParent(dialog);
    confirm->setText("Confirmar");
    confirm->setGeometry(210,60,100,25);
    confirm->show();

    QPushButton *cancel = new QPushButton();
    connect(cancel, SIGNAL(clicked()), this, SLOT(on_donothing_clicked()));
    cancel->setParent(dialog);
    cancel->setText("Cancelar");
    cancel->setGeometry(310,60,100,25);
    cancel->show();

    dialog->show();
}

void Widget::on_deleteall_clicked()
{
    for (int i=0; i < 28; i++)
    {
        primer_horario[i] = {0};
        segundo_horario[i] = {0};
        tercer_horario[i] = {0};
        cuarto_horario[i] = {0};
        quinto_horario[i] = {0};
        sexto_horario[i] = {0};
        septimo_horario[i] = {0};
        octavo_horario[i] = {0};
        noveno_horario[i] = {0};
    }
    refrescar_checkbox();
    QMessageBox::information(this,"Mensaje: Programador de tandas","Se ha limpiado la grilla");
    dialog->close();
}
void Widget::on_donothing_clicked()
{
    QMessageBox::information(this,"Mensaje: Programador de tandas","No se realizaron cambios");
    dialog->close();
}

void Widget::refrescar_checkbox()
{
    // Refresca los checkbox correspondiente a los nuevos horarios

    // recordar que despla_v aumenta o disminuye en multiplos de 7
    // Lunes
    ui->Lu_1->setChecked(primer_horario[despla_v*7]);
    ui->Lu_2->setChecked(segundo_horario[despla_v*7]);
    ui->Lu_3->setChecked(tercer_horario[despla_v*7]);
    ui->Lu_4->setChecked(cuarto_horario[despla_v*7]);
    ui->Lu_5->setChecked(quinto_horario[despla_v*7]);
    ui->Lu_6->setChecked(sexto_horario[despla_v*7]);
    ui->Lu_7->setChecked(septimo_horario[despla_v*7]);
    ui->Lu_8->setChecked(octavo_horario[despla_v*7]);
    ui->Lu_9->setChecked(noveno_horario[despla_v*7]);
    // Martes
    ui->Ma_1->setChecked(primer_horario[despla_v*7 +1]);
    ui->Ma_2->setChecked(segundo_horario[despla_v*7 +1]);
    ui->Ma_3->setChecked(tercer_horario[despla_v*7 +1]);
    ui->Ma_4->setChecked(cuarto_horario[despla_v*7 +1]);
    ui->Ma_5->setChecked(quinto_horario[despla_v*7 +1]);
    ui->Ma_6->setChecked(sexto_horario[despla_v*7 +1]);
    ui->Ma_7->setChecked(septimo_horario[despla_v*7 +1]);
    ui->Ma_8->setChecked(octavo_horario[despla_v*7 +1]);
    ui->Ma_9->setChecked(noveno_horario[despla_v*7 +1]);
    // Miercoles
    ui->Mi_1->setChecked(primer_horario[despla_v*7 +2]);
    ui->Mi_2->setChecked(segundo_horario[despla_v*7 +2]);
    ui->Mi_3->setChecked(tercer_horario[despla_v*7 +2]);
    ui->Mi_4->setChecked(cuarto_horario[despla_v*7 +2]);
    ui->Mi_5->setChecked(quinto_horario[despla_v*7 +2]);
    ui->Mi_6->setChecked(sexto_horario[despla_v*7 +2]);
    ui->Mi_7->setChecked(septimo_horario[despla_v*7 +2]);
    ui->Mi_8->setChecked(octavo_horario[despla_v*7 +2]);
    ui->Mi_9->setChecked(noveno_horario[despla_v*7 +2]);
    // Jueves
    ui->Ju_1->setChecked(primer_horario[despla_v*7 +3]);
    ui->Ju_2->setChecked(segundo_horario[despla_v*7 +3]);
    ui->Ju_3->setChecked(tercer_horario[despla_v*7 +3]);
    ui->Ju_4->setChecked(cuarto_horario[despla_v*7 +3]);
    ui->Ju_5->setChecked(quinto_horario[despla_v*7 +3]);
    ui->Ju_6->setChecked(sexto_horario[despla_v*7 +3]);
    ui->Ju_7->setChecked(septimo_horario[despla_v*7 +3]);
    ui->Ju_8->setChecked(octavo_horario[despla_v*7 +3]);
    ui->Ju_9->setChecked(noveno_horario[despla_v*7 +3]);
    // Viernes
    ui->Vi_1->setChecked(primer_horario[despla_v*7 +4]);
    ui->Vi_2->setChecked(segundo_horario[despla_v*7 +4]);
    ui->Vi_3->setChecked(tercer_horario[despla_v*7 +4]);
    ui->Vi_4->setChecked(cuarto_horario[despla_v*7 +4]);
    ui->Vi_5->setChecked(quinto_horario[despla_v*7 +4]);
    ui->Vi_6->setChecked(sexto_horario[despla_v*7 +4]);
    ui->Vi_7->setChecked(septimo_horario[despla_v*7 +4]);
    ui->Vi_8->setChecked(octavo_horario[despla_v*7 +4]);
    ui->Vi_9->setChecked(noveno_horario[despla_v*7 +4]);
    // Sabado
    ui->Sa_1->setChecked(primer_horario[despla_v*7 +5]);
    ui->Sa_2->setChecked(segundo_horario[despla_v*7 +5]);
    ui->Sa_3->setChecked(tercer_horario[despla_v*7 +5]);
    ui->Sa_4->setChecked(cuarto_horario[despla_v*7 +5]);
    ui->Sa_5->setChecked(quinto_horario[despla_v*7 +5]);
    ui->Sa_6->setChecked(sexto_horario[despla_v*7 +5]);
    ui->Sa_7->setChecked(septimo_horario[despla_v*7 +5]);
    ui->Sa_8->setChecked(octavo_horario[despla_v*7 +5]);
    ui->Sa_9->setChecked(noveno_horario[despla_v*7 +5]);
    // Domingo
    ui->Do_1->setChecked(primer_horario[despla_v*7 +6]);
    ui->Do_2->setChecked(segundo_horario[despla_v*7 +6]);
    ui->Do_3->setChecked(tercer_horario[despla_v*7 +6]);
    ui->Do_4->setChecked(cuarto_horario[despla_v*7 +6]);
    ui->Do_5->setChecked(quinto_horario[despla_v*7 +6]);
    ui->Do_6->setChecked(sexto_horario[despla_v*7 +6]);
    ui->Do_7->setChecked(septimo_horario[despla_v*7 +6]);
    ui->Do_8->setChecked(octavo_horario[despla_v*7 +6]);
    ui->Do_9->setChecked(noveno_horario[despla_v*7 +6]);

}

void Widget::save_checkbox()
{
    // Guardamos antes de refrescar los valores de checkbox

    // recordar que despla_v aumenta o disminuye en multiplos de 7
    // Lunes
    primer_horario[despla_v*7] = ui->Lu_1->checkState();
    segundo_horario[despla_v*7] = ui->Lu_2->checkState();
    tercer_horario[despla_v*7] = ui->Lu_3->checkState();
    cuarto_horario[despla_v*7] = ui->Lu_4->checkState();
    quinto_horario[despla_v*7] = ui->Lu_5->checkState();
    sexto_horario[despla_v*7] = ui->Lu_6->checkState();
    septimo_horario[despla_v*7] = ui->Lu_7->checkState();
    octavo_horario[despla_v*7] = ui->Lu_8->checkState();
    noveno_horario[despla_v*7] = ui->Lu_9->checkState();
    // Martes
    primer_horario[despla_v*7 +1] = ui->Ma_1->checkState();
    segundo_horario[despla_v*7 +1] = ui->Ma_2->checkState();
    tercer_horario[despla_v*7 +1] = ui->Ma_3->checkState();
    cuarto_horario[despla_v*7 +1] = ui->Ma_4->checkState();
    quinto_horario[despla_v*7 +1] = ui->Ma_5->checkState();
    sexto_horario[despla_v*7 +1] = ui->Ma_6->checkState();
    septimo_horario[despla_v*7 +1] = ui->Ma_7->checkState();
    octavo_horario[despla_v*7 +1] = ui->Ma_8->checkState();
    noveno_horario[despla_v*7 +1] = ui->Ma_9->checkState();
    // Miercoles
    primer_horario[despla_v*7 +2] = ui->Mi_1->checkState();
    segundo_horario[despla_v*7 +2] = ui->Mi_2->checkState();
    tercer_horario[despla_v*7 +2] = ui->Mi_3->checkState();
    cuarto_horario[despla_v*7 +2] = ui->Mi_4->checkState();
    quinto_horario[despla_v*7 +2] = ui->Mi_5->checkState();
    sexto_horario[despla_v*7 +2] = ui->Mi_6->checkState();
    septimo_horario[despla_v*7 +2] = ui->Mi_7->checkState();
    octavo_horario[despla_v*7 +2] = ui->Mi_8->checkState();
    noveno_horario[despla_v*7 +2] = ui->Mi_9->checkState();
    // Jueves
    primer_horario[despla_v*7 +3] = ui->Ju_1->checkState();
    segundo_horario[despla_v*7 +3] = ui->Ju_2->checkState();
    tercer_horario[despla_v*7 +3] = ui->Ju_3->checkState();
    cuarto_horario[despla_v*7 +3] = ui->Ju_4->checkState();
    quinto_horario[despla_v*7 +3] = ui->Ju_5->checkState();
    sexto_horario[despla_v*7 +3] = ui->Ju_6->checkState();
    septimo_horario[despla_v*7 +3] = ui->Ju_7->checkState();
    octavo_horario[despla_v*7 +3] = ui->Ju_8->checkState();
    noveno_horario[despla_v*7 +3] = ui->Ju_9->checkState();
    // Viernes
    primer_horario[despla_v*7 +4] = ui->Vi_1->checkState();
    segundo_horario[despla_v*7 +4] = ui->Vi_2->checkState();
    tercer_horario[despla_v*7 +4] = ui->Vi_3->checkState();
    cuarto_horario[despla_v*7 +4] = ui->Vi_4->checkState();
    quinto_horario[despla_v*7 +4] = ui->Vi_5->checkState();
    sexto_horario[despla_v*7 +4] = ui->Vi_6->checkState();
    septimo_horario[despla_v*7 +4] = ui->Vi_7->checkState();
    octavo_horario[despla_v*7 +4] = ui->Vi_8->checkState();
    noveno_horario[despla_v*7 +4] = ui->Vi_9->checkState();
    // Sabado
    primer_horario[despla_v*7 +5] = ui->Sa_1->checkState();
    segundo_horario[despla_v*7 +5] = ui->Sa_2->checkState();
    tercer_horario[despla_v*7 +5] = ui->Sa_3->checkState();
    cuarto_horario[despla_v*7 +5] = ui->Sa_4->checkState();
    quinto_horario[despla_v*7 +5] = ui->Sa_5->checkState();
    sexto_horario[despla_v*7 +5] = ui->Sa_6->checkState();
    septimo_horario[despla_v*7 +5] = ui->Sa_7->checkState();
    octavo_horario[despla_v*7 +5] = ui->Sa_8->checkState();
    noveno_horario[despla_v*7 +5] = ui->Sa_9->checkState();
    // Domingo
    primer_horario[despla_v*7 +6] = ui->Do_1->checkState();
    segundo_horario[despla_v*7 +6] = ui->Do_2->checkState();
    tercer_horario[despla_v*7 +6] = ui->Do_3->checkState();
    cuarto_horario[despla_v*7 +6] = ui->Do_4->checkState();
    quinto_horario[despla_v*7 +6] = ui->Do_5->checkState();
    sexto_horario[despla_v*7 +6] = ui->Do_6->checkState();
    septimo_horario[despla_v*7 +6] = ui->Do_7->checkState();
    octavo_horario[despla_v*7 +6] = ui->Do_8->checkState();
    noveno_horario[despla_v*7 +6] = ui->Do_9->checkState();
}

void Widget::on_ver_tabla_button_clicked()
{
    Table table;
    table.setModal(true);
    table.exec();
}


void Widget::on_generarButton_clicked()
{
    // Se debe escribir en los archivos correspondientes a cada horario
    // el nombre de la tanda
    // verificando que el mismo no haya sido ya colocando,
    // es decir, el último elemento escrito del archivo no debe
    // coincidir con el nombre de la tanda nueva a colocar

    // La organización es la siguiente;
    // FolderPath + 1-Lunes + 0800.m3u
    // FolderPath + 1-Lunes + 0830.m3u
    // ...
    // FolderPath + 2-Martes + 0800.m3u
    // FolderPath + 2-Martes + 0830.m3u
    // ...
    // hasta 7-Domingo

    save_checkbox();
    // SOLO SE ESCRIBE SI LA DIRECCION DE LA TANDA EXISTE
    if (PathFile != "")
    {
//        QStringList list = PathFile.split('/');
//        QString PathFile = list[list.length()-1];    //guardar el nombre de la tanda .mp3

        QDirIterator it(PathFolder);
        while (it.hasNext())
        {
            QString dir = it.next();
            int day;

            if (dir.contains("1-Lunes"))
            {
                day = 0;
                select_day(day, PathFile, dir);
            }
            if (dir.contains("2-Martes"))
            {
                day = 1;
                select_day(day, PathFile, dir);
            }
            if (dir.contains("3-Miercoles"))
            {
                day = 2;
                select_day(day, PathFile, dir);
            }
            if (dir.contains("4-Jueves"))
            {
                day = 3;
                select_day(day, PathFile, dir);
            }
            if (dir.contains("5-Viernes"))
            {
                day = 4;
                select_day(day, PathFile, dir);
            }
            if (dir.contains("6-Sabado"))
            {
                day = 5;
                select_day(day, PathFile, dir);
            }
            if (dir.contains("7-Domingo"))
            {
                day = 6;
                select_day(day, PathFile, dir);
            }
        }
        QMessageBox::information(this,"Resultado exitoso: Programador de tandas","Se modificaron correctamente los archivos");
    }
    else
    {
        QMessageBox::information(this,"Error: Programador de tandas","No se encontró el nombre de la tanda");
    }

}

void Widget::select_day(int day, QString PathFile, QString dir)
{
    for (int i=0; i<4; i++)
    {
        if (primer_horario[i*7 + day])
        {
            //read from file
            // and write to file (implicit in read_from_file
            QString file_name = dir + '/' + get_file_name(i, 0);
            // QMessageBox::information(this,"Error: Programador de tandas",file_name);
            // QMessageBox::information(this,"Error: Programador de tandas",PathFile);
            read_from_file(file_name, PathFile);
        }
        if (segundo_horario[i*7 + day])
        {
            //read from file
            // and write to file (implicit in read_from_file
            QString file_name = dir + '/' + get_file_name(i, 1);
            // QMessageBox::information(this,"Error: Programador de tandas",file_name);
            // QMessageBox::information(this,"Error: Programador de tandas",PathFile);
            read_from_file(file_name, PathFile);
        }
        if (tercer_horario[i*7 + day])
        {
            //read from file
            // and write to file (implicit in read_from_file
            QString file_name = dir + '/' + get_file_name(i, 2);
            // QMessageBox::information(this,"Error: Programador de tandas",file_name);
            // QMessageBox::information(this,"Error: Programador de tandas",PathFile);
            read_from_file(file_name, PathFile);
        }
        if (cuarto_horario[i*7 + day])
        {
            //read from file
            // and write to file (implicit in read_from_file
            QString file_name = dir + '/' + get_file_name(i, 3);
            // QMessageBox::information(this,"Error: Programador de tandas",file_name);
            // QMessageBox::information(this,"Error: Programador de tandas",PathFile);
            read_from_file(file_name, PathFile);
        }
        if (quinto_horario[i*7 + day])
        {
            //read from file
            // and write to file (implicit in read_from_file
            QString file_name = dir + '/' + get_file_name(i, 4);
            // QMessageBox::information(this,"Error: Programador de tandas",file_name);
            // QMessageBox::information(this,"Error: Programador de tandas",PathFile);
            read_from_file(file_name, PathFile);
        }
        if (sexto_horario[i*7 + day])
        {
            //read from file
            // and write to file (implicit in read_from_file
            QString file_name = dir + '/' + get_file_name(i, 5);
            // QMessageBox::information(this,"Error: Programador de tandas",file_name);
            // QMessageBox::information(this,"Error: Programador de tandas",PathFile);
            read_from_file(file_name, PathFile);
        }
        if (septimo_horario[i*7 + day])
        {
            //read from file
            // and write to file (implicit in read_from_file
            QString file_name = dir + '/' + get_file_name(i, 6);
            // QMessageBox::information(this,"Error: Programador de tandas",file_name);
            // QMessageBox::information(this,"Error: Programador de tandas",PathFile);
            read_from_file(file_name, PathFile);
        }
        if (octavo_horario[i*7 + day])
        {
            //read from file
            // and write to file (implicit in read_from_file
            QString file_name = dir + '/' + get_file_name(i, 7);
            // QMessageBox::information(this,"Error: Programador de tandas",file_name);
            // QMessageBox::information(this,"Error: Programador de tandas",PathFile);
            read_from_file(file_name, PathFile);
        }
        if (noveno_horario[i*7 + day])
        {
            //read from file
            // and write to file (implicit in read_from_file
            QString file_name = dir + '/' + get_file_name(i, 8);
            // QMessageBox::information(this,"Error: Programador de tandas",file_name);
            // QMessageBox::information(this,"Error: Programador de tandas",PathFile);
            read_from_file(file_name, PathFile);
        }
    }
}

QString Widget::get_file_name(int k, int time)
{
    int hora = 8 + k*6;
    int minutos = k*30 + time*30;
    while (minutos >= 60)
    {
        hora++;
        minutos -= 60;
    }
    if (hora > 23)
    {
        hora -= 24;
    }
    QString name = QString::number(hora/10) + QString::number(hora % 10) + QString::number(minutos/10) +  QString::number(minutos % 10) + ".m3u";
    return name;
}

void Widget::write_to_file(QString file_name, QString FileData)
{
    QFile f(file_name);

    if (f.open(QIODevice::WriteOnly))
    {
        QTextStream stream(&f);
        stream << FileData;
    }
    f.flush();
    f.close();
}
void Widget::read_from_file(QString file_name, QString PathFile)
{
    QFile f(file_name);

    QString FileData;
    if (f.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&f);
        while(!stream.atEnd())
        {
            QString data_line = stream.readLine();
            if ( QString::compare(data_line, PathFile, Qt::CaseSensitive) ) // if strings are equal, should return 0
            {
                FileData += data_line + "\n";
            }

        }
    }
    f.close();

    FileData += PathFile;

    write_to_file(file_name, FileData);
}
