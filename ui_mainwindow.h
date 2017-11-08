/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "paintlabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *ordinateInfo;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QFrame *line_2;
    QLabel *label_7;
    QComboBox *chooseAddress;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *getStart;
    QPushButton *getEnd;
    QPushButton *searchWay;
    QLabel *currentpoint;
    QLabel *point;
    QLabel *endpoint;
    PaintLabel *mapdraw;
    QLabel *mapview;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *info;
    QFrame *line_6;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout;
    QFrame *line_3;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addActivity;
    QPushButton *deleteActivity;
    QFrame *line_5;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QFrame *line;
    QLabel *label_2;
    QTableWidget *tableWidget_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1005, 941);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(true);
        MainWindow->setDockOptions(QMainWindow::AnimatedDocks);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(864, 786));
        ordinateInfo = new QLabel(centralWidget);
        ordinateInfo->setObjectName(QStringLiteral("ordinateInfo"));
        ordinateInfo->setGeometry(QRect(680, 880, 311, 31));
        ordinateInfo->setMaximumSize(QSize(16777215, 16777215));
        ordinateInfo->setCursor(QCursor(Qt::ArrowCursor));
        ordinateInfo->setMouseTracking(true);
        ordinateInfo->setContextMenuPolicy(Qt::NoContextMenu);
        ordinateInfo->setLayoutDirection(Qt::LeftToRight);
        ordinateInfo->setAutoFillBackground(false);
        ordinateInfo->setFrameShape(QFrame::Box);
        ordinateInfo->setFrameShadow(QFrame::Sunken);
        ordinateInfo->setLineWidth(1);
        ordinateInfo->setMidLineWidth(0);
        ordinateInfo->setTextFormat(Qt::AutoText);
        ordinateInfo->setScaledContents(false);
        ordinateInfo->setWordWrap(false);
        ordinateInfo->setOpenExternalLinks(false);
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(680, 10, 311, 158));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lineEdit = new QLineEdit(verticalLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_5->addWidget(lineEdit);

        pushButton_3 = new QPushButton(verticalLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_5->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout_5);

        line_2 = new QFrame(verticalLayoutWidget_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        chooseAddress = new QComboBox(verticalLayoutWidget_2);
        chooseAddress->setObjectName(QStringLiteral("chooseAddress"));
        chooseAddress->setToolTipDuration(-1);
        chooseAddress->setEditable(false);
        chooseAddress->setFrame(true);

        verticalLayout_2->addWidget(chooseAddress);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        getStart = new QPushButton(verticalLayoutWidget_2);
        getStart->setObjectName(QStringLiteral("getStart"));

        horizontalLayout_2->addWidget(getStart);

        getEnd = new QPushButton(verticalLayoutWidget_2);
        getEnd->setObjectName(QStringLiteral("getEnd"));

        horizontalLayout_2->addWidget(getEnd);


        verticalLayout_2->addLayout(horizontalLayout_2);

        searchWay = new QPushButton(verticalLayoutWidget_2);
        searchWay->setObjectName(QStringLiteral("searchWay"));

        verticalLayout_2->addWidget(searchWay);

        currentpoint = new QLabel(centralWidget);
        currentpoint->setObjectName(QStringLiteral("currentpoint"));
        currentpoint->setGeometry(QRect(980, 830, 21, 31));
        currentpoint->setScaledContents(false);
        currentpoint->setIndent(0);
        currentpoint->setTextInteractionFlags(Qt::NoTextInteraction);
        point = new QLabel(centralWidget);
        point->setObjectName(QStringLiteral("point"));
        point->setGeometry(QRect(1030, 850, 20, 20));
        endpoint = new QLabel(centralWidget);
        endpoint->setObjectName(QStringLiteral("endpoint"));
        endpoint->setGeometry(QRect(1010, 860, 20, 20));
        mapdraw = new PaintLabel(centralWidget);
        mapdraw->setObjectName(QStringLiteral("mapdraw"));
        mapdraw->setGeometry(QRect(0, 0, 661, 921));
        mapdraw->setAutoFillBackground(false);
        mapview = new QLabel(centralWidget);
        mapview->setObjectName(QStringLiteral("mapview"));
        mapview->setGeometry(QRect(10, 10, 651, 901));
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(680, 180, 311, 681));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        verticalLayoutWidget_4 = new QWidget(splitter);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        info = new QLabel(verticalLayoutWidget_4);
        info->setObjectName(QStringLiteral("info"));
        info->setFrameShape(QFrame::Panel);
        info->setFrameShadow(QFrame::Sunken);
        info->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        info->setWordWrap(true);

        verticalLayout_4->addWidget(info);

        line_6 = new QFrame(verticalLayoutWidget_4);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_6);

        splitter->addWidget(verticalLayoutWidget_4);
        verticalLayoutWidget_3 = new QWidget(splitter);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        line_3 = new QFrame(verticalLayoutWidget_3);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        tableWidget = new QTableWidget(verticalLayoutWidget_3);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        __qtablewidgetitem->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setBaseSize(QSize(0, 1223));
        tableWidget->setAutoScroll(false);
        tableWidget->setAutoScrollMargin(12);
        tableWidget->setDragEnabled(true);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setGridStyle(Qt::CustomDashLine);
        tableWidget->setSortingEnabled(true);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->setRowCount(0);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(85);
        tableWidget->horizontalHeader()->setMinimumSectionSize(20);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setHighlightSections(true);
        tableWidget->verticalHeader()->setMinimumSectionSize(1);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        addActivity = new QPushButton(verticalLayoutWidget_3);
        addActivity->setObjectName(QStringLiteral("addActivity"));

        horizontalLayout_3->addWidget(addActivity);

        deleteActivity = new QPushButton(verticalLayoutWidget_3);
        deleteActivity->setObjectName(QStringLiteral("deleteActivity"));

        horizontalLayout_3->addWidget(deleteActivity);


        verticalLayout->addLayout(horizontalLayout_3);

        line_5 = new QFrame(verticalLayoutWidget_3);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        splitter->addWidget(verticalLayoutWidget_3);
        splitter_2->addWidget(splitter);
        verticalLayoutWidget = new QWidget(splitter_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        tableWidget_2 = new QTableWidget(verticalLayoutWidget);
        if (tableWidget_2->columnCount() < 5)
            tableWidget_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        __qtablewidgetitem5->setForeground(brush);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setBaseSize(QSize(0, 1223));
        tableWidget_2->setAutoScroll(false);
        tableWidget_2->setAutoScrollMargin(12);
        tableWidget_2->setDragEnabled(true);
        tableWidget_2->setAlternatingRowColors(true);
        tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_2->setGridStyle(Qt::CustomDashLine);
        tableWidget_2->setSortingEnabled(true);
        tableWidget_2->setWordWrap(true);
        tableWidget_2->setCornerButtonEnabled(true);
        tableWidget_2->setRowCount(0);
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(85);
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(20);
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        tableWidget_2->verticalHeader()->setVisible(false);
        tableWidget_2->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_2->verticalHeader()->setHighlightSections(true);
        tableWidget_2->verticalHeader()->setMinimumSectionSize(1);
        tableWidget_2->verticalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout_3->addWidget(tableWidget_2);

        splitter_2->addWidget(verticalLayoutWidget);
        MainWindow->setCentralWidget(centralWidget);
        splitter_2->raise();
        mapview->raise();
        ordinateInfo->raise();
        verticalLayoutWidget_2->raise();
        mapdraw->raise();
        point->raise();
        endpoint->raise();
        currentpoint->raise();
        verticalLayoutWidget_4->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setAutoFillBackground(true);
        statusBar->setStyleSheet(QStringLiteral("QStatusBar{rgb(22, 26, 59)}"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        chooseAddress->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SchoolMap  ver0.0", 0));
#ifndef QT_NO_ACCESSIBILITY
        MainWindow->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        ordinateInfo->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242\346\203\263\350\246\201\345\211\215\345\276\200\347\232\204\345\234\260\346\226\271\357\274\232", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", 0));
#ifndef QT_NO_ACCESSIBILITY
        line_2->setAccessibleName(QApplication::translate("MainWindow", "2", 0));
#endif // QT_NO_ACCESSIBILITY
        label_7->setText(QApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251\344\270\200\344\270\252\345\234\260\347\202\271\357\274\232", 0));
        chooseAddress->clear();
        chooseAddress->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\215\227\345\244\247\351\227\250", 0)
         << QApplication::translate("MainWindow", "\345\256\213\345\201\245\346\245\274", 0)
         << QApplication::translate("MainWindow", "\344\270\273\346\245\274", 0)
         << QApplication::translate("MainWindow", "\345\233\276\344\271\246\351\246\206", 0)
         << QApplication::translate("MainWindow", "M\346\245\274", 0)
         << QApplication::translate("MainWindow", "G\346\245\274", 0)
         << QApplication::translate("MainWindow", "N\346\245\274", 0)
         << QApplication::translate("MainWindow", "\345\244\247\345\255\246\347\224\237\346\234\215\345\212\241\345\214\272", 0)
         << QApplication::translate("MainWindow", "\344\275\223\350\202\262\345\234\272", 0)
         << QApplication::translate("MainWindow", "\345\223\210\345\267\245\345\244\247\351\227\250\350\257\212", 0)
         << QApplication::translate("MainWindow", "\346\240\241\345\217\262\351\246\206", 0)
         << QApplication::translate("MainWindow", "\346\226\260\345\233\276\344\271\246\351\246\206", 0)
         << QApplication::translate("MainWindow", "\345\244\247\345\255\246\347\224\237\346\264\273\345\212\250\344\270\255\345\277\203/\350\256\255\347\273\203\345\234\272\351\246\206", 0)
         << QApplication::translate("MainWindow", "\345\255\246\345\255\220\351\244\220\345\216\205", 0)
         << QApplication::translate("MainWindow", "\346\227\247\347\257\256\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\346\226\260\347\257\256\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\345\256\236\351\252\214\346\245\274C/E", 0)
         << QApplication::translate("MainWindow", "\347\225\231\345\255\246\347\224\237\345\205\254\345\257\223/\347\225\231\345\255\246\347\224\237\351\244\220\345\216\205", 0)
         << QApplication::translate("MainWindow", "\346\225\231\345\267\245\344\275\217\345\256\205\345\214\272", 0)
         << QApplication::translate("MainWindow", "\350\245\277\345\215\227\351\227\250", 0)
         << QApplication::translate("MainWindow", "\346\225\231\345\267\245\344\275\217\345\256\205\351\253\230\345\261\202", 0)
         << QApplication::translate("MainWindow", "B\346\245\274", 0)
         << QApplication::translate("MainWindow", "\345\255\246\350\213\221\351\244\220\345\216\205", 0)
         << QApplication::translate("MainWindow", "\344\270\200\345\205\254\345\257\223/\344\272\214\345\205\254\345\257\223/\344\270\211\345\205\254\345\257\223/\345\233\233\345\205\254\345\257\223/\344\272\224\345\205\254\345\257\223", 0)
         << QApplication::translate("MainWindow", "\345\205\255\345\205\254\345\257\223", 0)
         << QApplication::translate("MainWindow", "\344\270\203\345\205\254\345\257\223", 0)
         << QApplication::translate("MainWindow", "\345\205\253\345\205\254\345\257\223/\344\271\235\345\205\254\345\257\223/\345\215\201\345\205\254\345\257\223/\345\215\201\344\270\200\345\205\254\345\257\223", 0)
         << QApplication::translate("MainWindow", "\345\214\227\351\227\250", 0)
         << QApplication::translate("MainWindow", "\344\270\234\351\227\250", 0)
        );
        getStart->setText(QApplication::translate("MainWindow", "\350\256\276\344\270\272\350\265\267\347\202\271", 0));
        getEnd->setText(QApplication::translate("MainWindow", "\350\256\276\344\270\272\347\273\210\347\202\271", 0));
        searchWay->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\257\273\350\267\257", 0));
        currentpoint->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/new/map/icon/currentpoint.ico\"/></p></body></html>", 0));
        point->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/new/map/icon/point_24.ico\"/></p></body></html>", 0));
        endpoint->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/new/map/icon/point_24.ico\"/></p></body></html>", 0));
        mapdraw->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
        mapview->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/new/map/map.jpg\"/></p></body></html>", 0));
        info->setText(QApplication::translate("MainWindow", "\345\234\260\347\202\271\347\256\200\344\273\213\357\274\232", 0));
        label_3->setText(QApplication::translate("MainWindow", "\346\264\273\345\212\250\344\270\200\350\247\210\350\241\250\357\274\232", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\264\273\345\212\250\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\346\227\245\346\234\237", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\345\234\260\347\202\271", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\347\233\256\345\275\225", 0));
        addActivity->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\264\273\345\212\250", 0));
        deleteActivity->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\346\264\273\345\212\250", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\210\221\345\205\263\346\263\250\347\232\204\346\264\273\345\212\250\357\274\232", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\346\264\273\345\212\250\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\346\227\245\346\234\237", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\345\234\260\347\202\271", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\347\233\256\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
