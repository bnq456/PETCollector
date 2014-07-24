/********************************************************************************
** Form generated from reading UI file 'petmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PETMAINWINDOW_H
#define UI_PETMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PETMainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_12;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *labelSd2;
    QCheckBox *checkBoxD2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *labelSd1;
    QCheckBox *checkBoxD1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *labelSd3;
    QCheckBox *checkBoxD3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLabel *labelSd6;
    QCheckBox *checkBoxD6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labelSd0;
    QCheckBox *checkBoxD0;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLabel *labelSd5;
    QCheckBox *checkBoxD5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QLabel *labelSd7;
    QCheckBox *checkBoxD7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *labelSd4;
    QCheckBox *checkBoxD4;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_4;
    QTextEdit *textEditRe;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_7;
    QCheckBox *checkBoxRehex;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButtonInitClock;
    QPushButton *pushButtonPoweron;
    QPushButton *pushButtonPoweroff;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *lineEditTcpIP;
    QLineEdit *lineEditTcpPort;
    QPushButton *pushButtonConnect;
    QWidget *tab_2;
    QGridLayout *gridLayout_11;
    QGroupBox *groupBoxData;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QLineEdit *lineEditCFname;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_6;
    QLineEdit *lineEditCAddr;
    QPushButton *pushButtonCAddr;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QLineEdit *lineEditCTime;
    QComboBox *comboBoxCTime;
    QPushButton *pushButtonCollect;
    QPushButton *pushButtonCancel;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_3;
    QLabel *label_10;
    QLineEdit *lineEditStarttime;
    QLabel *label_12;
    QLineEdit *lineEditEndtime;
    QProgressBar *progressBarC;
    QLabel *label_8;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PETMainWindow)
    {
        if (PETMainWindow->objectName().isEmpty())
            PETMainWindow->setObjectName(QStringLiteral("PETMainWindow"));
        PETMainWindow->resize(727, 449);
        centralWidget = new QWidget(PETMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_12 = new QGridLayout(centralWidget);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        labelSd2 = new QLabel(groupBox_3);
        labelSd2->setObjectName(QStringLiteral("labelSd2"));
        labelSd2->setFrameShape(QFrame::StyledPanel);
        labelSd2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(labelSd2);

        checkBoxD2 = new QCheckBox(groupBox_3);
        checkBoxD2->setObjectName(QStringLiteral("checkBoxD2"));
        checkBoxD2->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_3->addWidget(checkBoxD2);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        labelSd1 = new QLabel(groupBox_3);
        labelSd1->setObjectName(QStringLiteral("labelSd1"));
        labelSd1->setFrameShape(QFrame::StyledPanel);
        labelSd1->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(labelSd1);

        checkBoxD1 = new QCheckBox(groupBox_3);
        checkBoxD1->setObjectName(QStringLiteral("checkBoxD1"));
        checkBoxD1->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(checkBoxD1);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        labelSd3 = new QLabel(groupBox_3);
        labelSd3->setObjectName(QStringLiteral("labelSd3"));
        labelSd3->setFrameShape(QFrame::StyledPanel);
        labelSd3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(labelSd3);

        checkBoxD3 = new QCheckBox(groupBox_3);
        checkBoxD3->setObjectName(QStringLiteral("checkBoxD3"));
        checkBoxD3->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_4->addWidget(checkBoxD3);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_7->addWidget(label_13);

        labelSd6 = new QLabel(groupBox_3);
        labelSd6->setObjectName(QStringLiteral("labelSd6"));
        labelSd6->setFrameShape(QFrame::StyledPanel);
        labelSd6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(labelSd6);

        checkBoxD6 = new QCheckBox(groupBox_3);
        checkBoxD6->setObjectName(QStringLiteral("checkBoxD6"));
        checkBoxD6->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_7->addWidget(checkBoxD6);


        gridLayout->addLayout(horizontalLayout_7, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        labelSd0 = new QLabel(groupBox_3);
        labelSd0->setObjectName(QStringLiteral("labelSd0"));
        labelSd0->setFrameShape(QFrame::StyledPanel);
        labelSd0->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(labelSd0);

        checkBoxD0 = new QCheckBox(groupBox_3);
        checkBoxD0->setObjectName(QStringLiteral("checkBoxD0"));
        checkBoxD0->setMinimumSize(QSize(0, 0));
        checkBoxD0->setMaximumSize(QSize(20, 16777215));

        horizontalLayout->addWidget(checkBoxD0);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_6->addWidget(label_11);

        labelSd5 = new QLabel(groupBox_3);
        labelSd5->setObjectName(QStringLiteral("labelSd5"));
        labelSd5->setFrameShape(QFrame::StyledPanel);
        labelSd5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(labelSd5);

        checkBoxD5 = new QCheckBox(groupBox_3);
        checkBoxD5->setObjectName(QStringLiteral("checkBoxD5"));
        checkBoxD5->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_6->addWidget(checkBoxD5);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_8->addWidget(label_15);

        labelSd7 = new QLabel(groupBox_3);
        labelSd7->setObjectName(QStringLiteral("labelSd7"));
        labelSd7->setFrameShape(QFrame::StyledPanel);
        labelSd7->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(labelSd7);

        checkBoxD7 = new QCheckBox(groupBox_3);
        checkBoxD7->setObjectName(QStringLiteral("checkBoxD7"));
        checkBoxD7->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_8->addWidget(checkBoxD7);


        gridLayout->addLayout(horizontalLayout_8, 7, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);

        labelSd4 = new QLabel(groupBox_3);
        labelSd4->setObjectName(QStringLiteral("labelSd4"));
        labelSd4->setFrameShape(QFrame::StyledPanel);
        labelSd4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(labelSd4);

        checkBoxD4 = new QCheckBox(groupBox_3);
        checkBoxD4->setObjectName(QStringLiteral("checkBoxD4"));
        checkBoxD4->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_5->addWidget(checkBoxD4);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        textEditRe = new QTextEdit(groupBox_5);
        textEditRe->setObjectName(QStringLiteral("textEditRe"));
        textEditRe->setFrameShape(QFrame::StyledPanel);
        textEditRe->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(textEditRe, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_5, 1, 0, 1, 1);


        gridLayout_12->addWidget(groupBox, 0, 0, 3, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        tabWidget = new QTabWidget(groupBox_4);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(400, 0));
        gridLayout_7 = new QGridLayout(groupBox_2);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        checkBoxRehex = new QCheckBox(groupBox_2);
        checkBoxRehex->setObjectName(QStringLiteral("checkBoxRehex"));

        gridLayout_7->addWidget(checkBoxRehex, 2, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        pushButtonInitClock = new QPushButton(groupBox_2);
        pushButtonInitClock->setObjectName(QStringLiteral("pushButtonInitClock"));

        horizontalLayout_12->addWidget(pushButtonInitClock);

        pushButtonPoweron = new QPushButton(groupBox_2);
        pushButtonPoweron->setObjectName(QStringLiteral("pushButtonPoweron"));

        horizontalLayout_12->addWidget(pushButtonPoweron);

        pushButtonPoweroff = new QPushButton(groupBox_2);
        pushButtonPoweroff->setObjectName(QStringLiteral("pushButtonPoweroff"));

        horizontalLayout_12->addWidget(pushButtonPoweroff);


        gridLayout_7->addLayout(horizontalLayout_12, 1, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        lineEditTcpIP = new QLineEdit(groupBox_2);
        lineEditTcpIP->setObjectName(QStringLiteral("lineEditTcpIP"));

        horizontalLayout_13->addWidget(lineEditTcpIP);

        lineEditTcpPort = new QLineEdit(groupBox_2);
        lineEditTcpPort->setObjectName(QStringLiteral("lineEditTcpPort"));

        horizontalLayout_13->addWidget(lineEditTcpPort);

        pushButtonConnect = new QPushButton(groupBox_2);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));

        horizontalLayout_13->addWidget(pushButtonConnect);


        gridLayout_7->addLayout(horizontalLayout_13, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_11 = new QGridLayout(tab_2);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        groupBoxData = new QGroupBox(tab_2);
        groupBoxData->setObjectName(QStringLiteral("groupBoxData"));
        gridLayout_10 = new QGridLayout(groupBoxData);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        groupBox_6 = new QGroupBox(groupBoxData);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_8 = new QGridLayout(groupBox_6);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_9->addWidget(label_2);

        lineEditCFname = new QLineEdit(groupBox_6);
        lineEditCFname->setObjectName(QStringLiteral("lineEditCFname"));

        horizontalLayout_9->addWidget(lineEditCFname);


        gridLayout_8->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_10->addWidget(label_6);

        lineEditCAddr = new QLineEdit(groupBox_6);
        lineEditCAddr->setObjectName(QStringLiteral("lineEditCAddr"));
        lineEditCAddr->setReadOnly(true);

        horizontalLayout_10->addWidget(lineEditCAddr);

        pushButtonCAddr = new QPushButton(groupBox_6);
        pushButtonCAddr->setObjectName(QStringLiteral("pushButtonCAddr"));
        pushButtonCAddr->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_10->addWidget(pushButtonCAddr);


        gridLayout_8->addLayout(horizontalLayout_10, 1, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_6, 0, 0, 1, 2);

        groupBox_7 = new QGroupBox(groupBoxData);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_9 = new QGridLayout(groupBox_7);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_4 = new QLabel(groupBox_7);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_11->addWidget(label_4);

        lineEditCTime = new QLineEdit(groupBox_7);
        lineEditCTime->setObjectName(QStringLiteral("lineEditCTime"));

        horizontalLayout_11->addWidget(lineEditCTime);

        comboBoxCTime = new QComboBox(groupBox_7);
        comboBoxCTime->setObjectName(QStringLiteral("comboBoxCTime"));

        horizontalLayout_11->addWidget(comboBoxCTime);


        gridLayout_9->addLayout(horizontalLayout_11, 0, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_7, 1, 0, 1, 2);

        pushButtonCollect = new QPushButton(groupBoxData);
        pushButtonCollect->setObjectName(QStringLiteral("pushButtonCollect"));

        gridLayout_10->addWidget(pushButtonCollect, 2, 0, 1, 2);


        gridLayout_11->addWidget(groupBoxData, 0, 0, 1, 1);

        pushButtonCancel = new QPushButton(tab_2);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));

        gridLayout_11->addWidget(pushButtonCancel, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_5->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_12->addWidget(groupBox_4, 0, 1, 1, 1);

        groupBox_8 = new QGroupBox(centralWidget);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        gridLayout_3 = new QGridLayout(groupBox_8);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_10 = new QLabel(groupBox_8);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        lineEditStarttime = new QLineEdit(groupBox_8);
        lineEditStarttime->setObjectName(QStringLiteral("lineEditStarttime"));
        lineEditStarttime->setReadOnly(true);

        gridLayout_3->addWidget(lineEditStarttime, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_8);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 0, 2, 1, 1);

        lineEditEndtime = new QLineEdit(groupBox_8);
        lineEditEndtime->setObjectName(QStringLiteral("lineEditEndtime"));
        lineEditEndtime->setReadOnly(true);

        gridLayout_3->addWidget(lineEditEndtime, 0, 3, 1, 1);

        progressBarC = new QProgressBar(groupBox_8);
        progressBarC->setObjectName(QStringLiteral("progressBarC"));
        progressBarC->setValue(24);

        gridLayout_3->addWidget(progressBarC, 1, 0, 1, 4);


        gridLayout_12->addWidget(groupBox_8, 1, 1, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(0, 25));
        label_8->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_8->setFont(font);
        label_8->setFrameShape(QFrame::Box);
        label_8->setFrameShadow(QFrame::Sunken);

        gridLayout_12->addWidget(label_8, 2, 1, 1, 1);

        PETMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PETMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 727, 23));
        PETMainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(PETMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PETMainWindow->setStatusBar(statusBar);

        retranslateUi(PETMainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PETMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PETMainWindow)
    {
        PETMainWindow->setWindowTitle(QApplication::translate("PETMainWindow", "PETMainWindow", 0));
        groupBox->setTitle(QString());
        groupBox_3->setTitle(QApplication::translate("PETMainWindow", "Detector Statue", 0));
        label_5->setText(QApplication::translate("PETMainWindow", "Detector 2", 0));
        labelSd2->setText(QString());
        checkBoxD2->setText(QString());
        label_3->setText(QApplication::translate("PETMainWindow", "Detector 1", 0));
        labelSd1->setText(QString());
        checkBoxD1->setText(QString());
        label_7->setText(QApplication::translate("PETMainWindow", "Detector 3", 0));
        labelSd3->setText(QString());
        checkBoxD3->setText(QString());
        label_13->setText(QApplication::translate("PETMainWindow", "Detector 6", 0));
        labelSd6->setText(QString());
        checkBoxD6->setText(QString());
        label->setText(QApplication::translate("PETMainWindow", "Detector 0", 0));
        labelSd0->setText(QString());
        checkBoxD0->setText(QString());
        label_11->setText(QApplication::translate("PETMainWindow", "Detector 5", 0));
        labelSd5->setText(QString());
        checkBoxD5->setText(QString());
        label_15->setText(QApplication::translate("PETMainWindow", "Detector 7", 0));
        labelSd7->setText(QString());
        checkBoxD7->setText(QString());
        label_9->setText(QApplication::translate("PETMainWindow", "Detector 4", 0));
        labelSd4->setText(QString());
        checkBoxD4->setText(QString());
        groupBox_5->setTitle(QApplication::translate("PETMainWindow", "Communication status", 0));
        groupBox_4->setTitle(QString());
        groupBox_2->setTitle(QString());
        checkBoxRehex->setText(QApplication::translate("PETMainWindow", "Hexadecimal display", 0));
        pushButtonInitClock->setText(QApplication::translate("PETMainWindow", "InitClock", 0));
        pushButtonPoweron->setText(QApplication::translate("PETMainWindow", "Power On", 0));
        pushButtonPoweroff->setText(QApplication::translate("PETMainWindow", "Power Off", 0));
        lineEditTcpIP->setText(QApplication::translate("PETMainWindow", "192.168.1.250", 0));
        lineEditTcpPort->setText(QApplication::translate("PETMainWindow", "15000", 0));
        pushButtonConnect->setText(QApplication::translate("PETMainWindow", "Connect", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PETMainWindow", "Master module", 0));
        groupBoxData->setTitle(QString());
        groupBox_6->setTitle(QString());
        label_2->setText(QApplication::translate("PETMainWindow", "File Prefix:", 0));
        label_6->setText(QApplication::translate("PETMainWindow", "File Path:", 0));
        pushButtonCAddr->setText(QApplication::translate("PETMainWindow", "Save", 0));
        groupBox_7->setTitle(QString());
        label_4->setText(QApplication::translate("PETMainWindow", "Collect Time", 0));
        lineEditCTime->setText(QApplication::translate("PETMainWindow", "1", 0));
        comboBoxCTime->clear();
        comboBoxCTime->insertItems(0, QStringList()
         << QApplication::translate("PETMainWindow", "Minute", 0)
         << QApplication::translate("PETMainWindow", "Second", 0)
         << QApplication::translate("PETMainWindow", "Hour", 0)
        );
        pushButtonCollect->setText(QApplication::translate("PETMainWindow", "Collect", 0));
        pushButtonCancel->setText(QApplication::translate("PETMainWindow", "Cancel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PETMainWindow", "Data module", 0));
        groupBox_8->setTitle(QString());
        label_10->setText(QApplication::translate("PETMainWindow", "Start time:", 0));
        label_12->setText(QApplication::translate("PETMainWindow", "End time:", 0));
        label_8->setText(QApplication::translate("PETMainWindow", "       PET Data Acquisition Program", 0));
    } // retranslateUi

};

namespace Ui {
    class PETMainWindow: public Ui_PETMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PETMAINWINDOW_H
