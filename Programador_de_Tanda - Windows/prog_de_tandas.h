#ifndef PROG_DE_TANDAS_H
#define PROG_DE_TANDAS_H

#include <QWidget>
#include <QFile>
#include <QDir>
#include <QString>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QDirIterator>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QString initialFolderPath = ".";
    QString initialFilePath = ".";

private slots:
    void on_browseFolderButton_clicked();
    void on_browseFileButton_clicked();
    void on_subir_boton_clicked();
    void on_bajar_boton_clicked();
    void on_cancelButton_clicked();
    void on_ver_tabla_button_clicked();
    void on_deleteall_clicked();
    void on_donothing_clicked();
    void on_generarButton_clicked();

private:
    Ui::Widget *ui;
    QDialog *dialog;

    QString PathFolder;
    QString PathFile = "";
    QString times[48];

    int despla_v = 2;
    int primer_horario[42] = {0};
    int segundo_horario[42] = {0};
    int tercer_horario[42] = {0};
    int cuarto_horario[42] = {0};
    int quinto_horario[42] = {0};
    int sexto_horario[42] = {0};
    int septimo_horario[42] = {0};
    int octavo_horario[42] = {0};

    bool generado = false;

    void refrescar_checkbox();
    void save_checkbox();
    void write_to_file(QString file_name, QString FileData);
    void read_from_file(QString file_name, QString PathFile);
    void select_day(int day, QString PathFile, QString dir);

    QString get_file_name(int k, int time);
};
#endif // PROG_DE_TANDAS_H
