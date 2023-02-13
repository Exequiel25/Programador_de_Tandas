#ifndef TABLE_H
#define TABLE_H

#include <QDialog>

namespace Ui {
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

private:
    Ui::Table *ui;
};

#endif // TABLE_H
