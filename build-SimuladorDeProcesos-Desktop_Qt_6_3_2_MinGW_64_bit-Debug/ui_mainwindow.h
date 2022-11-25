/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *capturaProcesos;
    QGridLayout *gridLayout_3;
    QLabel *programName;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *processAcountLB;
    QSpinBox *processNumberSP;
    QPushButton *processAcountPB;
    QWidget *mostrarProcesos;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *newProcessesLB;
    QLCDNumber *newProcessesLCD;
    QGroupBox *readyProcessGB;
    QGridLayout *gridLayout_5;
    QTableWidget *readyProcessesTB;
    QGroupBox *processRuningGB;
    QGridLayout *gridLayout_6;
    QTableWidget *processRuningTB;
    QGroupBox *finishedGB;
    QGridLayout *gridLayout_7;
    QTableWidget *finishedTB;
    QGroupBox *blockGB;
    QGridLayout *gridLayout_2;
    QTableWidget *blockTB;
    QHBoxLayout *horizontalLayout_3;
    QLabel *globalCountLB;
    QLCDNumber *globalCountLCD;
    QLabel *titleLB;
    QPushButton *startRunPB;
    QWidget *mostrarTiempos;
    QGridLayout *gridLayout_10;
    QGroupBox *timesProcessesGB;
    QGridLayout *gridLayout_9;
    QTableWidget *timesProcessesTB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 580);
        MainWindow->setMaximumSize(QSize(900, 580));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Light")});
        font.setPointSize(12);
        font.setBold(false);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background: rgb(37, 108, 200);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setEnabled(true);
        capturaProcesos = new QWidget();
        capturaProcesos->setObjectName(QString::fromUtf8("capturaProcesos"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu Light")});
        font1.setPointSize(12);
        capturaProcesos->setFont(font1);
        gridLayout_3 = new QGridLayout(capturaProcesos);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        programName = new QLabel(capturaProcesos);
        programName->setObjectName(QString::fromUtf8("programName"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tw Cen MT")});
        font2.setPointSize(14);
        font2.setBold(true);
        programName->setFont(font2);
        programName->setStyleSheet(QString::fromUtf8("background: rgb(37, 108, 200);"));
        programName->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(programName, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        processAcountLB = new QLabel(capturaProcesos);
        processAcountLB->setObjectName(QString::fromUtf8("processAcountLB"));
        processAcountLB->setMinimumSize(QSize(96, 24));
        processAcountLB->setMaximumSize(QSize(96, 24));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font3.setPointSize(12);
        font3.setBold(true);
        processAcountLB->setFont(font3);

        gridLayout->addWidget(processAcountLB, 0, 0, 1, 1);

        processNumberSP = new QSpinBox(capturaProcesos);
        processNumberSP->setObjectName(QString::fromUtf8("processNumberSP"));
        processNumberSP->setMinimumSize(QSize(40, 24));
        processNumberSP->setMaximumSize(QSize(40, 24));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font4.setBold(true);
        processNumberSP->setFont(font4);
        processNumberSP->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(processNumberSP, 0, 1, 1, 1);

        processAcountPB = new QPushButton(capturaProcesos);
        processAcountPB->setObjectName(QString::fromUtf8("processAcountPB"));
        processAcountPB->setEnabled(false);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font5.setPointSize(10);
        font5.setBold(true);
        processAcountPB->setFont(font5);
        processAcountPB->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(191, 191, 191);"));

        gridLayout->addWidget(processAcountPB, 1, 0, 1, 2);


        horizontalLayout_2->addLayout(gridLayout);


        gridLayout_3->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        stackedWidget->addWidget(capturaProcesos);
        mostrarProcesos = new QWidget();
        mostrarProcesos->setObjectName(QString::fromUtf8("mostrarProcesos"));
        mostrarProcesos->setMaximumSize(QSize(1270, 720));
        gridLayout_8 = new QGridLayout(mostrarProcesos);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        newProcessesLB = new QLabel(mostrarProcesos);
        newProcessesLB->setObjectName(QString::fromUtf8("newProcessesLB"));
        newProcessesLB->setMaximumSize(QSize(169, 23));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Agency FB")});
        font6.setPointSize(20);
        font6.setBold(true);
        newProcessesLB->setFont(font6);

        horizontalLayout_4->addWidget(newProcessesLB);

        newProcessesLCD = new QLCDNumber(mostrarProcesos);
        newProcessesLCD->setObjectName(QString::fromUtf8("newProcessesLCD"));
        newProcessesLCD->setMaximumSize(QSize(64, 23));
        QFont font7;
        font7.setBold(true);
        newProcessesLCD->setFont(font7);

        horizontalLayout_4->addWidget(newProcessesLCD);


        gridLayout_8->addLayout(horizontalLayout_4, 0, 0, 1, 2);

        readyProcessGB = new QGroupBox(mostrarProcesos);
        readyProcessGB->setObjectName(QString::fromUtf8("readyProcessGB"));
        readyProcessGB->setMaximumSize(QSize(255, 430));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Agency FB")});
        font8.setPointSize(17);
        font8.setBold(true);
        readyProcessGB->setFont(font8);
        readyProcessGB->setAlignment(Qt::AlignCenter);
        gridLayout_5 = new QGridLayout(readyProcessGB);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        readyProcessesTB = new QTableWidget(readyProcessGB);
        if (readyProcessesTB->columnCount() < 3)
            readyProcessesTB->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        readyProcessesTB->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        readyProcessesTB->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        readyProcessesTB->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        readyProcessesTB->setObjectName(QString::fromUtf8("readyProcessesTB"));
        readyProcessesTB->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        readyProcessesTB->setEditTriggers(QAbstractItemView::NoEditTriggers);
        readyProcessesTB->horizontalHeader()->setCascadingSectionResizes(false);
        readyProcessesTB->horizontalHeader()->setMinimumSectionSize(32);
        readyProcessesTB->horizontalHeader()->setDefaultSectionSize(70);
        readyProcessesTB->horizontalHeader()->setStretchLastSection(true);
        readyProcessesTB->verticalHeader()->setVisible(false);

        gridLayout_5->addWidget(readyProcessesTB, 0, 0, 1, 1);


        gridLayout_8->addWidget(readyProcessGB, 1, 0, 2, 2);

        processRuningGB = new QGroupBox(mostrarProcesos);
        processRuningGB->setObjectName(QString::fromUtf8("processRuningGB"));
        processRuningGB->setMaximumSize(QSize(255, 221));
        processRuningGB->setFont(font8);
        processRuningGB->setAlignment(Qt::AlignCenter);
        gridLayout_6 = new QGridLayout(processRuningGB);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        processRuningTB = new QTableWidget(processRuningGB);
        if (processRuningTB->columnCount() < 1)
            processRuningTB->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        processRuningTB->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        if (processRuningTB->rowCount() < 5)
            processRuningTB->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        processRuningTB->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        processRuningTB->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        processRuningTB->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        processRuningTB->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        processRuningTB->setVerticalHeaderItem(4, __qtablewidgetitem8);
        processRuningTB->setObjectName(QString::fromUtf8("processRuningTB"));
        processRuningTB->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;\n"
""));
        processRuningTB->setEditTriggers(QAbstractItemView::NoEditTriggers);
        processRuningTB->horizontalHeader()->setVisible(false);
        processRuningTB->horizontalHeader()->setCascadingSectionResizes(false);
        processRuningTB->horizontalHeader()->setStretchLastSection(true);
        processRuningTB->verticalHeader()->setCascadingSectionResizes(false);
        processRuningTB->verticalHeader()->setDefaultSectionSize(36);
        processRuningTB->verticalHeader()->setStretchLastSection(false);

        gridLayout_6->addWidget(processRuningTB, 0, 0, 1, 1);


        gridLayout_8->addWidget(processRuningGB, 1, 2, 1, 1);

        finishedGB = new QGroupBox(mostrarProcesos);
        finishedGB->setObjectName(QString::fromUtf8("finishedGB"));
        finishedGB->setMaximumSize(QSize(430, 16777215));
        finishedGB->setFont(font8);
        finishedGB->setAlignment(Qt::AlignCenter);
        gridLayout_7 = new QGridLayout(finishedGB);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        finishedTB = new QTableWidget(finishedGB);
        if (finishedTB->columnCount() < 3)
            finishedTB->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        finishedTB->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        finishedTB->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        finishedTB->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        finishedTB->setObjectName(QString::fromUtf8("finishedTB"));
        finishedTB->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        finishedTB->setEditTriggers(QAbstractItemView::NoEditTriggers);
        finishedTB->verticalHeader()->setVisible(false);

        gridLayout_7->addWidget(finishedTB, 0, 0, 1, 1);


        gridLayout_8->addWidget(finishedGB, 1, 3, 2, 1);

        blockGB = new QGroupBox(mostrarProcesos);
        blockGB->setObjectName(QString::fromUtf8("blockGB"));
        blockGB->setMinimumSize(QSize(250, 160));
        blockGB->setMaximumSize(QSize(250, 160));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Agency FB")});
        font9.setPointSize(17);
        font9.setBold(true);
        font9.setItalic(false);
        blockGB->setFont(font9);
        blockGB->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(blockGB);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        blockTB = new QTableWidget(blockGB);
        if (blockTB->columnCount() < 2)
            blockTB->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        blockTB->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        blockTB->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        blockTB->setObjectName(QString::fromUtf8("blockTB"));
        blockTB->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        blockTB->setEditTriggers(QAbstractItemView::NoEditTriggers);
        blockTB->horizontalHeader()->setStretchLastSection(true);
        blockTB->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(blockTB, 0, 0, 1, 1);


        gridLayout_8->addWidget(blockGB, 2, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        globalCountLB = new QLabel(mostrarProcesos);
        globalCountLB->setObjectName(QString::fromUtf8("globalCountLB"));
        globalCountLB->setFont(font6);

        horizontalLayout_3->addWidget(globalCountLB);

        globalCountLCD = new QLCDNumber(mostrarProcesos);
        globalCountLCD->setObjectName(QString::fromUtf8("globalCountLCD"));

        horizontalLayout_3->addWidget(globalCountLCD);


        gridLayout_8->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        titleLB = new QLabel(mostrarProcesos);
        titleLB->setObjectName(QString::fromUtf8("titleLB"));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Verdana")});
        font10.setPointSize(15);
        font10.setBold(true);
        titleLB->setFont(font10);
        titleLB->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(titleLB, 0, 2, 1, 2);

        startRunPB = new QPushButton(mostrarProcesos);
        startRunPB->setObjectName(QString::fromUtf8("startRunPB"));
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Agency FB")});
        font11.setPointSize(18);
        font11.setBold(true);
        startRunPB->setFont(font11);
        startRunPB->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));

        gridLayout_8->addWidget(startRunPB, 3, 2, 1, 1);

        stackedWidget->addWidget(mostrarProcesos);
        mostrarTiempos = new QWidget();
        mostrarTiempos->setObjectName(QString::fromUtf8("mostrarTiempos"));
        gridLayout_10 = new QGridLayout(mostrarTiempos);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        timesProcessesGB = new QGroupBox(mostrarTiempos);
        timesProcessesGB->setObjectName(QString::fromUtf8("timesProcessesGB"));
        timesProcessesGB->setFont(font6);
        timesProcessesGB->setAlignment(Qt::AlignCenter);
        gridLayout_9 = new QGridLayout(timesProcessesGB);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        timesProcessesTB = new QTableWidget(timesProcessesGB);
        if (timesProcessesTB->columnCount() < 11)
            timesProcessesTB->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(5, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(6, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(7, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(8, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(9, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(10, __qtablewidgetitem24);
        timesProcessesTB->setObjectName(QString::fromUtf8("timesProcessesTB"));
        QFont font12;
        font12.setFamilies({QString::fromUtf8("Ubuntu")});
        font12.setPointSize(10);
        font12.setBold(true);
        timesProcessesTB->setFont(font12);
        timesProcessesTB->setFocusPolicy(Qt::NoFocus);
        timesProcessesTB->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;\n"
"alternate-background-color: #606060;\n"
"selection-background-color:#282828;\n"
""));
        timesProcessesTB->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_9->addWidget(timesProcessesTB, 0, 0, 1, 1);


        gridLayout_10->addWidget(timesProcessesGB, 0, 0, 1, 1);

        stackedWidget->addWidget(mostrarTiempos);

        gridLayout_4->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        programName->setText(QCoreApplication::translate("MainWindow", "Algoritmo FCFS Continuaci\303\263n", nullptr));
        processAcountLB->setText(QCoreApplication::translate("MainWindow", "No. Procesos:", nullptr));
        processAcountPB->setText(QCoreApplication::translate("MainWindow", "ACEPTAR", nullptr));
        newProcessesLB->setText(QCoreApplication::translate("MainWindow", "NUEVO", nullptr));
        readyProcessGB->setTitle(QCoreApplication::translate("MainWindow", "Listos", nullptr));
        QTableWidgetItem *___qtablewidgetitem = readyProcessesTB->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = readyProcessesTB->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "TME", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = readyProcessesTB->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "TT", nullptr));
        processRuningGB->setTitle(QCoreApplication::translate("MainWindow", "Proceso en ejecuci\303\263n", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = processRuningTB->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = processRuningTB->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = processRuningTB->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "OPE", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = processRuningTB->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "TME", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = processRuningTB->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "TT", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = processRuningTB->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "TR", nullptr));
        finishedGB->setTitle(QCoreApplication::translate("MainWindow", "Terminados", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = finishedTB->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = finishedTB->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "OPERACI\303\223N", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = finishedTB->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "RESULTADO", nullptr));
        blockGB->setTitle(QCoreApplication::translate("MainWindow", "Bloqueados", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = blockTB->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = blockTB->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "TTB", nullptr));
        globalCountLB->setText(QCoreApplication::translate("MainWindow", "RELOJ", nullptr));
        titleLB->setText(QCoreApplication::translate("MainWindow", "DIAGRAMA 5 ESTADOS", nullptr));
        startRunPB->setText(QCoreApplication::translate("MainWindow", "Comenzar", nullptr));
        timesProcessesGB->setTitle(QCoreApplication::translate("MainWindow", "TIEMPOS DE LOS PROCESOS", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = timesProcessesTB->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = timesProcessesTB->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Operacion", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = timesProcessesTB->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Resultado", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = timesProcessesTB->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "T. Estimado", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = timesProcessesTB->horizontalHeaderItem(4);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "T. Llegada", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = timesProcessesTB->horizontalHeaderItem(5);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "T. Finalizacion", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = timesProcessesTB->horizontalHeaderItem(6);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "T. Retorno", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = timesProcessesTB->horizontalHeaderItem(7);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "T. Respuesta", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = timesProcessesTB->horizontalHeaderItem(8);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "T. Espera", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = timesProcessesTB->horizontalHeaderItem(9);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "T. Servicio", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = timesProcessesTB->horizontalHeaderItem(10);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "Estado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
