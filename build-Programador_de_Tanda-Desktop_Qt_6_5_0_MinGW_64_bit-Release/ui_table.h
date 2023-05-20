/********************************************************************************
** Form generated from reading UI file 'table.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_H
#define UI_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Table
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *txtOriginPath;
    QPushButton *browseOriginFolderButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *txtDestinyPath;
    QPushButton *browseDestinyFolderButton;
    QPushButton *generateButton;

    void setupUi(QDialog *Table)
    {
        if (Table->objectName().isEmpty())
            Table->setObjectName("Table");
        Table->resize(678, 242);
        verticalLayout = new QVBoxLayout(Table);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_7 = new QLabel(Table);
        label_7->setObjectName("label_7");

        horizontalLayout_6->addWidget(label_7);

        txtOriginPath = new QLineEdit(Table);
        txtOriginPath->setObjectName("txtOriginPath");

        horizontalLayout_6->addWidget(txtOriginPath);

        browseOriginFolderButton = new QPushButton(Table);
        browseOriginFolderButton->setObjectName("browseOriginFolderButton");

        horizontalLayout_6->addWidget(browseOriginFolderButton);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_6 = new QLabel(Table);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);

        txtDestinyPath = new QLineEdit(Table);
        txtDestinyPath->setObjectName("txtDestinyPath");

        horizontalLayout_5->addWidget(txtDestinyPath);

        browseDestinyFolderButton = new QPushButton(Table);
        browseDestinyFolderButton->setObjectName("browseDestinyFolderButton");

        horizontalLayout_5->addWidget(browseDestinyFolderButton);


        verticalLayout->addLayout(horizontalLayout_5);

        generateButton = new QPushButton(Table);
        generateButton->setObjectName("generateButton");

        verticalLayout->addWidget(generateButton);


        retranslateUi(Table);

        QMetaObject::connectSlotsByName(Table);
    } // setupUi

    void retranslateUi(QDialog *Table)
    {
        Table->setWindowTitle(QCoreApplication::translate("Table", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("Table", "Direcci\303\263n carpeta origen:", nullptr));
        browseOriginFolderButton->setText(QCoreApplication::translate("Table", "Cambiar", nullptr));
        label_6->setText(QCoreApplication::translate("Table", "Direcci\303\263n carpeta destino:", nullptr));
        browseDestinyFolderButton->setText(QCoreApplication::translate("Table", "Explorar", nullptr));
        generateButton->setText(QCoreApplication::translate("Table", "Generar archivos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Table: public Ui_Table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_H
