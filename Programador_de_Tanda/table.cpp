#include "table.h"
#include "ui_table.h"

Table::Table(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Table)
{
    ui->setupUi(this);
}

Table::~Table()
{
    delete ui;
}

void Table::on_volver_button_clicked()
{
    hide();
}

