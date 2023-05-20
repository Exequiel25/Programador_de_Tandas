/********************************************************************************
** Form generated from reading UI file 'prog_de_tandas.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROG_DE_TANDAS_H
#define UI_PROG_DE_TANDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QLineEdit *txtFilePath;
    QPushButton *browseFileButton;
    QPushButton *subir_boton;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *blankspace;
    QLabel *Lunes;
    QLabel *Martes;
    QLabel *Miercoles;
    QLabel *Jueves;
    QLabel *Viernes;
    QLabel *Sabado;
    QLabel *Domingo;
    QHBoxLayout *horizontalLayout_6;
    QLabel *primer_horario;
    QCheckBox *Lu_1;
    QCheckBox *Ma_1;
    QCheckBox *Mi_1;
    QCheckBox *Ju_1;
    QCheckBox *Vi_1;
    QCheckBox *Sa_1;
    QCheckBox *Do_1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *segundo_horario;
    QCheckBox *Lu_2;
    QCheckBox *Ma_2;
    QCheckBox *Mi_2;
    QCheckBox *Ju_2;
    QCheckBox *Vi_2;
    QCheckBox *Sa_2;
    QCheckBox *Do_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *tercer_horario;
    QCheckBox *Lu_3;
    QCheckBox *Ma_3;
    QCheckBox *Mi_3;
    QCheckBox *Ju_3;
    QCheckBox *Vi_3;
    QCheckBox *Sa_3;
    QCheckBox *Do_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *cuarto_horario;
    QCheckBox *Lu_4;
    QCheckBox *Ma_4;
    QCheckBox *Mi_4;
    QCheckBox *Ju_4;
    QCheckBox *Vi_4;
    QCheckBox *Sa_4;
    QCheckBox *Do_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *quinto_horario;
    QCheckBox *Lu_5;
    QCheckBox *Ma_5;
    QCheckBox *Mi_5;
    QCheckBox *Ju_5;
    QCheckBox *Vi_5;
    QCheckBox *Sa_5;
    QCheckBox *Do_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *sexto_horario;
    QCheckBox *Lu_6;
    QCheckBox *Ma_6;
    QCheckBox *Mi_6;
    QCheckBox *Ju_6;
    QCheckBox *Vi_6;
    QCheckBox *Sa_6;
    QCheckBox *Do_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *septimo_horario;
    QCheckBox *Lu_7;
    QCheckBox *Ma_7;
    QCheckBox *Mi_7;
    QCheckBox *Ju_7;
    QCheckBox *Vi_7;
    QCheckBox *Sa_7;
    QCheckBox *Do_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *octavo_horario;
    QCheckBox *Lu_8;
    QCheckBox *Ma_8;
    QCheckBox *Mi_8;
    QCheckBox *Ju_8;
    QCheckBox *Vi_8;
    QCheckBox *Sa_8;
    QCheckBox *Do_8;
    QPushButton *bajar_boton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *txtFolderPath;
    QPushButton *browseFolderButton;
    QPushButton *ver_tabla_button;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *cancelButton;
    QPushButton *generarButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(745, 465);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_14 = new QLabel(Widget);
        label_14->setObjectName("label_14");

        horizontalLayout_4->addWidget(label_14);

        txtFilePath = new QLineEdit(Widget);
        txtFilePath->setObjectName("txtFilePath");

        horizontalLayout_4->addWidget(txtFilePath);

        browseFileButton = new QPushButton(Widget);
        browseFileButton->setObjectName("browseFileButton");

        horizontalLayout_4->addWidget(browseFileButton);


        verticalLayout->addLayout(horizontalLayout_4);

        subir_boton = new QPushButton(Widget);
        subir_boton->setObjectName("subir_boton");

        verticalLayout->addWidget(subir_boton);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        blankspace = new QLabel(Widget);
        blankspace->setObjectName("blankspace");
        blankspace->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(blankspace);

        Lunes = new QLabel(Widget);
        Lunes->setObjectName("Lunes");
        Lunes->setFrameShape(QFrame::Box);
        Lunes->setFrameShadow(QFrame::Raised);
        Lunes->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Lunes);

        Martes = new QLabel(Widget);
        Martes->setObjectName("Martes");
        Martes->setFrameShape(QFrame::Box);
        Martes->setFrameShadow(QFrame::Raised);
        Martes->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Martes);

        Miercoles = new QLabel(Widget);
        Miercoles->setObjectName("Miercoles");
        Miercoles->setFrameShape(QFrame::Box);
        Miercoles->setFrameShadow(QFrame::Raised);
        Miercoles->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Miercoles);

        Jueves = new QLabel(Widget);
        Jueves->setObjectName("Jueves");
        Jueves->setFrameShape(QFrame::Box);
        Jueves->setFrameShadow(QFrame::Raised);
        Jueves->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Jueves);

        Viernes = new QLabel(Widget);
        Viernes->setObjectName("Viernes");
        Viernes->setFrameShape(QFrame::Box);
        Viernes->setFrameShadow(QFrame::Raised);
        Viernes->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Viernes);

        Sabado = new QLabel(Widget);
        Sabado->setObjectName("Sabado");
        Sabado->setFrameShape(QFrame::Box);
        Sabado->setFrameShadow(QFrame::Raised);
        Sabado->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Sabado);

        Domingo = new QLabel(Widget);
        Domingo->setObjectName("Domingo");
        Domingo->setFrameShape(QFrame::Box);
        Domingo->setFrameShadow(QFrame::Raised);
        Domingo->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Domingo);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        primer_horario = new QLabel(Widget);
        primer_horario->setObjectName("primer_horario");
        primer_horario->setLayoutDirection(Qt::LeftToRight);
        primer_horario->setFrameShape(QFrame::Box);
        primer_horario->setFrameShadow(QFrame::Raised);
        primer_horario->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(primer_horario);

        Lu_1 = new QCheckBox(Widget);
        Lu_1->setObjectName("Lu_1");
        Lu_1->setToolTipDuration(0);
        Lu_1->setText(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(Lu_1, 0, Qt::AlignHCenter);

        Ma_1 = new QCheckBox(Widget);
        Ma_1->setObjectName("Ma_1");

        horizontalLayout_6->addWidget(Ma_1, 0, Qt::AlignHCenter);

        Mi_1 = new QCheckBox(Widget);
        Mi_1->setObjectName("Mi_1");

        horizontalLayout_6->addWidget(Mi_1, 0, Qt::AlignHCenter);

        Ju_1 = new QCheckBox(Widget);
        Ju_1->setObjectName("Ju_1");

        horizontalLayout_6->addWidget(Ju_1, 0, Qt::AlignHCenter);

        Vi_1 = new QCheckBox(Widget);
        Vi_1->setObjectName("Vi_1");

        horizontalLayout_6->addWidget(Vi_1, 0, Qt::AlignHCenter);

        Sa_1 = new QCheckBox(Widget);
        Sa_1->setObjectName("Sa_1");

        horizontalLayout_6->addWidget(Sa_1, 0, Qt::AlignHCenter);

        Do_1 = new QCheckBox(Widget);
        Do_1->setObjectName("Do_1");

        horizontalLayout_6->addWidget(Do_1, 0, Qt::AlignHCenter);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        segundo_horario = new QLabel(Widget);
        segundo_horario->setObjectName("segundo_horario");
        segundo_horario->setFrameShape(QFrame::Box);
        segundo_horario->setFrameShadow(QFrame::Raised);
        segundo_horario->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(segundo_horario);

        Lu_2 = new QCheckBox(Widget);
        Lu_2->setObjectName("Lu_2");

        horizontalLayout_7->addWidget(Lu_2, 0, Qt::AlignHCenter);

        Ma_2 = new QCheckBox(Widget);
        Ma_2->setObjectName("Ma_2");

        horizontalLayout_7->addWidget(Ma_2, 0, Qt::AlignHCenter);

        Mi_2 = new QCheckBox(Widget);
        Mi_2->setObjectName("Mi_2");

        horizontalLayout_7->addWidget(Mi_2, 0, Qt::AlignHCenter);

        Ju_2 = new QCheckBox(Widget);
        Ju_2->setObjectName("Ju_2");

        horizontalLayout_7->addWidget(Ju_2, 0, Qt::AlignHCenter);

        Vi_2 = new QCheckBox(Widget);
        Vi_2->setObjectName("Vi_2");

        horizontalLayout_7->addWidget(Vi_2, 0, Qt::AlignHCenter);

        Sa_2 = new QCheckBox(Widget);
        Sa_2->setObjectName("Sa_2");

        horizontalLayout_7->addWidget(Sa_2, 0, Qt::AlignHCenter);

        Do_2 = new QCheckBox(Widget);
        Do_2->setObjectName("Do_2");

        horizontalLayout_7->addWidget(Do_2, 0, Qt::AlignHCenter);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        tercer_horario = new QLabel(Widget);
        tercer_horario->setObjectName("tercer_horario");
        tercer_horario->setFrameShape(QFrame::Box);
        tercer_horario->setFrameShadow(QFrame::Raised);
        tercer_horario->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(tercer_horario);

        Lu_3 = new QCheckBox(Widget);
        Lu_3->setObjectName("Lu_3");

        horizontalLayout_8->addWidget(Lu_3, 0, Qt::AlignHCenter);

        Ma_3 = new QCheckBox(Widget);
        Ma_3->setObjectName("Ma_3");

        horizontalLayout_8->addWidget(Ma_3, 0, Qt::AlignHCenter);

        Mi_3 = new QCheckBox(Widget);
        Mi_3->setObjectName("Mi_3");

        horizontalLayout_8->addWidget(Mi_3, 0, Qt::AlignHCenter);

        Ju_3 = new QCheckBox(Widget);
        Ju_3->setObjectName("Ju_3");

        horizontalLayout_8->addWidget(Ju_3, 0, Qt::AlignHCenter);

        Vi_3 = new QCheckBox(Widget);
        Vi_3->setObjectName("Vi_3");

        horizontalLayout_8->addWidget(Vi_3, 0, Qt::AlignHCenter);

        Sa_3 = new QCheckBox(Widget);
        Sa_3->setObjectName("Sa_3");

        horizontalLayout_8->addWidget(Sa_3, 0, Qt::AlignHCenter);

        Do_3 = new QCheckBox(Widget);
        Do_3->setObjectName("Do_3");

        horizontalLayout_8->addWidget(Do_3, 0, Qt::AlignHCenter);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        cuarto_horario = new QLabel(Widget);
        cuarto_horario->setObjectName("cuarto_horario");
        cuarto_horario->setFrameShape(QFrame::Box);
        cuarto_horario->setFrameShadow(QFrame::Raised);
        cuarto_horario->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(cuarto_horario);

        Lu_4 = new QCheckBox(Widget);
        Lu_4->setObjectName("Lu_4");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Lu_4->sizePolicy().hasHeightForWidth());
        Lu_4->setSizePolicy(sizePolicy);
        Lu_4->setMinimumSize(QSize(0, 0));
        Lu_4->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_9->addWidget(Lu_4, 0, Qt::AlignHCenter);

        Ma_4 = new QCheckBox(Widget);
        Ma_4->setObjectName("Ma_4");

        horizontalLayout_9->addWidget(Ma_4, 0, Qt::AlignHCenter);

        Mi_4 = new QCheckBox(Widget);
        Mi_4->setObjectName("Mi_4");

        horizontalLayout_9->addWidget(Mi_4, 0, Qt::AlignHCenter);

        Ju_4 = new QCheckBox(Widget);
        Ju_4->setObjectName("Ju_4");

        horizontalLayout_9->addWidget(Ju_4, 0, Qt::AlignHCenter);

        Vi_4 = new QCheckBox(Widget);
        Vi_4->setObjectName("Vi_4");

        horizontalLayout_9->addWidget(Vi_4, 0, Qt::AlignHCenter);

        Sa_4 = new QCheckBox(Widget);
        Sa_4->setObjectName("Sa_4");

        horizontalLayout_9->addWidget(Sa_4, 0, Qt::AlignHCenter);

        Do_4 = new QCheckBox(Widget);
        Do_4->setObjectName("Do_4");

        horizontalLayout_9->addWidget(Do_4, 0, Qt::AlignHCenter);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        quinto_horario = new QLabel(Widget);
        quinto_horario->setObjectName("quinto_horario");
        quinto_horario->setFrameShape(QFrame::Box);
        quinto_horario->setFrameShadow(QFrame::Raised);
        quinto_horario->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(quinto_horario);

        Lu_5 = new QCheckBox(Widget);
        Lu_5->setObjectName("Lu_5");

        horizontalLayout_11->addWidget(Lu_5, 0, Qt::AlignHCenter);

        Ma_5 = new QCheckBox(Widget);
        Ma_5->setObjectName("Ma_5");

        horizontalLayout_11->addWidget(Ma_5, 0, Qt::AlignHCenter);

        Mi_5 = new QCheckBox(Widget);
        Mi_5->setObjectName("Mi_5");

        horizontalLayout_11->addWidget(Mi_5, 0, Qt::AlignHCenter);

        Ju_5 = new QCheckBox(Widget);
        Ju_5->setObjectName("Ju_5");

        horizontalLayout_11->addWidget(Ju_5, 0, Qt::AlignHCenter);

        Vi_5 = new QCheckBox(Widget);
        Vi_5->setObjectName("Vi_5");
        sizePolicy.setHeightForWidth(Vi_5->sizePolicy().hasHeightForWidth());
        Vi_5->setSizePolicy(sizePolicy);
        Vi_5->setMinimumSize(QSize(0, 0));
        Vi_5->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_11->addWidget(Vi_5, 0, Qt::AlignHCenter);

        Sa_5 = new QCheckBox(Widget);
        Sa_5->setObjectName("Sa_5");

        horizontalLayout_11->addWidget(Sa_5, 0, Qt::AlignHCenter);

        Do_5 = new QCheckBox(Widget);
        Do_5->setObjectName("Do_5");

        horizontalLayout_11->addWidget(Do_5, 0, Qt::AlignHCenter);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        sexto_horario = new QLabel(Widget);
        sexto_horario->setObjectName("sexto_horario");
        sexto_horario->setFrameShape(QFrame::Box);
        sexto_horario->setFrameShadow(QFrame::Raised);
        sexto_horario->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(sexto_horario);

        Lu_6 = new QCheckBox(Widget);
        Lu_6->setObjectName("Lu_6");

        horizontalLayout_12->addWidget(Lu_6, 0, Qt::AlignHCenter);

        Ma_6 = new QCheckBox(Widget);
        Ma_6->setObjectName("Ma_6");

        horizontalLayout_12->addWidget(Ma_6, 0, Qt::AlignHCenter);

        Mi_6 = new QCheckBox(Widget);
        Mi_6->setObjectName("Mi_6");

        horizontalLayout_12->addWidget(Mi_6, 0, Qt::AlignHCenter);

        Ju_6 = new QCheckBox(Widget);
        Ju_6->setObjectName("Ju_6");

        horizontalLayout_12->addWidget(Ju_6, 0, Qt::AlignHCenter);

        Vi_6 = new QCheckBox(Widget);
        Vi_6->setObjectName("Vi_6");

        horizontalLayout_12->addWidget(Vi_6, 0, Qt::AlignHCenter);

        Sa_6 = new QCheckBox(Widget);
        Sa_6->setObjectName("Sa_6");

        horizontalLayout_12->addWidget(Sa_6, 0, Qt::AlignHCenter);

        Do_6 = new QCheckBox(Widget);
        Do_6->setObjectName("Do_6");

        horizontalLayout_12->addWidget(Do_6, 0, Qt::AlignHCenter);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        septimo_horario = new QLabel(Widget);
        septimo_horario->setObjectName("septimo_horario");
        septimo_horario->setFrameShape(QFrame::Box);
        septimo_horario->setFrameShadow(QFrame::Raised);
        septimo_horario->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(septimo_horario);

        Lu_7 = new QCheckBox(Widget);
        Lu_7->setObjectName("Lu_7");

        horizontalLayout_13->addWidget(Lu_7, 0, Qt::AlignHCenter);

        Ma_7 = new QCheckBox(Widget);
        Ma_7->setObjectName("Ma_7");

        horizontalLayout_13->addWidget(Ma_7, 0, Qt::AlignHCenter);

        Mi_7 = new QCheckBox(Widget);
        Mi_7->setObjectName("Mi_7");

        horizontalLayout_13->addWidget(Mi_7, 0, Qt::AlignHCenter);

        Ju_7 = new QCheckBox(Widget);
        Ju_7->setObjectName("Ju_7");

        horizontalLayout_13->addWidget(Ju_7, 0, Qt::AlignHCenter);

        Vi_7 = new QCheckBox(Widget);
        Vi_7->setObjectName("Vi_7");

        horizontalLayout_13->addWidget(Vi_7, 0, Qt::AlignHCenter);

        Sa_7 = new QCheckBox(Widget);
        Sa_7->setObjectName("Sa_7");

        horizontalLayout_13->addWidget(Sa_7, 0, Qt::AlignHCenter);

        Do_7 = new QCheckBox(Widget);
        Do_7->setObjectName("Do_7");

        horizontalLayout_13->addWidget(Do_7, 0, Qt::AlignHCenter);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        octavo_horario = new QLabel(Widget);
        octavo_horario->setObjectName("octavo_horario");
        octavo_horario->setFrameShape(QFrame::Box);
        octavo_horario->setFrameShadow(QFrame::Raised);
        octavo_horario->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(octavo_horario);

        Lu_8 = new QCheckBox(Widget);
        Lu_8->setObjectName("Lu_8");

        horizontalLayout_14->addWidget(Lu_8, 0, Qt::AlignHCenter);

        Ma_8 = new QCheckBox(Widget);
        Ma_8->setObjectName("Ma_8");

        horizontalLayout_14->addWidget(Ma_8, 0, Qt::AlignHCenter);

        Mi_8 = new QCheckBox(Widget);
        Mi_8->setObjectName("Mi_8");

        horizontalLayout_14->addWidget(Mi_8, 0, Qt::AlignHCenter);

        Ju_8 = new QCheckBox(Widget);
        Ju_8->setObjectName("Ju_8");

        horizontalLayout_14->addWidget(Ju_8, 0, Qt::AlignHCenter);

        Vi_8 = new QCheckBox(Widget);
        Vi_8->setObjectName("Vi_8");

        horizontalLayout_14->addWidget(Vi_8, 0, Qt::AlignHCenter);

        Sa_8 = new QCheckBox(Widget);
        Sa_8->setObjectName("Sa_8");

        horizontalLayout_14->addWidget(Sa_8, 0, Qt::AlignHCenter);

        Do_8 = new QCheckBox(Widget);
        Do_8->setObjectName("Do_8");

        horizontalLayout_14->addWidget(Do_8, 0, Qt::AlignHCenter);


        verticalLayout_3->addLayout(horizontalLayout_14);


        verticalLayout->addLayout(verticalLayout_3);

        bajar_boton = new QPushButton(Widget);
        bajar_boton->setObjectName("bajar_boton");

        verticalLayout->addWidget(bajar_boton);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_6 = new QLabel(Widget);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);

        txtFolderPath = new QLineEdit(Widget);
        txtFolderPath->setObjectName("txtFolderPath");

        horizontalLayout_5->addWidget(txtFolderPath);

        browseFolderButton = new QPushButton(Widget);
        browseFolderButton->setObjectName("browseFolderButton");

        horizontalLayout_5->addWidget(browseFolderButton);

        ver_tabla_button = new QPushButton(Widget);
        ver_tabla_button->setObjectName("ver_tabla_button");

        horizontalLayout_5->addWidget(ver_tabla_button);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        cancelButton = new QPushButton(Widget);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout_3->addWidget(cancelButton);

        generarButton = new QPushButton(Widget);
        generarButton->setObjectName("generarButton");

        horizontalLayout_3->addWidget(generarButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Programador de Tandas", nullptr));
        label_14->setText(QCoreApplication::translate("Widget", "Direcci\303\263n de la Tanda:", nullptr));
        browseFileButton->setText(QCoreApplication::translate("Widget", "Explorar", nullptr));
        subir_boton->setText(QCoreApplication::translate("Widget", "Subir", nullptr));
        blankspace->setText(QString());
        Lunes->setText(QCoreApplication::translate("Widget", "Lunes", nullptr));
        Martes->setText(QCoreApplication::translate("Widget", "Martes", nullptr));
        Miercoles->setText(QCoreApplication::translate("Widget", "Mi\303\251rcoles", nullptr));
        Jueves->setText(QCoreApplication::translate("Widget", "Jueves", nullptr));
        Viernes->setText(QCoreApplication::translate("Widget", "Viernes", nullptr));
        Sabado->setText(QCoreApplication::translate("Widget", "S\303\241bado", nullptr));
        Domingo->setText(QCoreApplication::translate("Widget", "Domingo", nullptr));
        primer_horario->setText(QCoreApplication::translate("Widget", "8:00", nullptr));
        Ma_1->setText(QString());
        Mi_1->setText(QString());
        Ju_1->setText(QString());
        Vi_1->setText(QString());
        Sa_1->setText(QString());
        Do_1->setText(QString());
        segundo_horario->setText(QCoreApplication::translate("Widget", "8:30", nullptr));
        Lu_2->setText(QString());
        Ma_2->setText(QString());
        Mi_2->setText(QString());
        Ju_2->setText(QString());
        Vi_2->setText(QString());
        Sa_2->setText(QString());
        Do_2->setText(QString());
        tercer_horario->setText(QCoreApplication::translate("Widget", "9:00", nullptr));
        Lu_3->setText(QString());
        Ma_3->setText(QString());
        Mi_3->setText(QString());
        Ju_3->setText(QString());
        Vi_3->setText(QString());
        Sa_3->setText(QString());
        Do_3->setText(QString());
        cuarto_horario->setText(QCoreApplication::translate("Widget", "9:30", nullptr));
        Lu_4->setText(QString());
        Ma_4->setText(QString());
        Mi_4->setText(QString());
        Ju_4->setText(QString());
        Vi_4->setText(QString());
        Sa_4->setText(QString());
        Do_4->setText(QString());
        quinto_horario->setText(QCoreApplication::translate("Widget", "10:00", nullptr));
        Lu_5->setText(QString());
        Ma_5->setText(QString());
        Mi_5->setText(QString());
        Ju_5->setText(QString());
        Vi_5->setText(QString());
        Sa_5->setText(QString());
        Do_5->setText(QString());
        sexto_horario->setText(QCoreApplication::translate("Widget", "10:30", nullptr));
        Lu_6->setText(QString());
        Ma_6->setText(QString());
        Mi_6->setText(QString());
        Ju_6->setText(QString());
        Vi_6->setText(QString());
        Sa_6->setText(QString());
        Do_6->setText(QString());
        septimo_horario->setText(QCoreApplication::translate("Widget", "11:00", nullptr));
        Lu_7->setText(QString());
        Ma_7->setText(QString());
        Mi_7->setText(QString());
        Ju_7->setText(QString());
        Vi_7->setText(QString());
        Sa_7->setText(QString());
        Do_7->setText(QString());
        octavo_horario->setText(QCoreApplication::translate("Widget", "11:30", nullptr));
        Lu_8->setText(QString());
        Ma_8->setText(QString());
        Mi_8->setText(QString());
        Ju_8->setText(QString());
        Vi_8->setText(QString());
        Sa_8->setText(QString());
        Do_8->setText(QString());
        bajar_boton->setText(QCoreApplication::translate("Widget", "Bajar", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "Direcci\303\263n de archivos M3U alojados:", nullptr));
        browseFolderButton->setText(QCoreApplication::translate("Widget", "Cambiar", nullptr));
        ver_tabla_button->setText(QCoreApplication::translate("Widget", "Ver tabla.csv", nullptr));
        cancelButton->setText(QCoreApplication::translate("Widget", "Cancelar", nullptr));
        generarButton->setText(QCoreApplication::translate("Widget", "Generar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROG_DE_TANDAS_H
