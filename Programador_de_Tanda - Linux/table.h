#ifndef TABLE_H
#define TABLE_H

#include <QDialog>
#include <QMap>

namespace Ui
{
    class Table;
}

class Table : public QDialog
{
    Q_OBJECT

public:
    explicit Table(QWidget *parent = nullptr);
    ~Table();

private slots:
    void on_volver_button_clicked();
    void on_browseOriginFolderButton_clicked();
    void on_browseDestinyFolderButton_clicked();
    void on_generateButton_clicked();

private:
    Ui::Table *ui;
    QString originPathFolder;
    QString PathFile = "";
    QString selectDirectory();
    QMultiMap<QString, QMultiMap<QString, QString>> contentMap; // map day of week to time to content

    void select_day(QString day, QString dir);
    void write2file(QString destinyPath);
    QString getContent(QString day);
};

#endif // TABLE_H
