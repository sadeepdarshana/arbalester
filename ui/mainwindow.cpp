/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QFrame *tbox;
    QVBoxLayout *verticalLayout_2;
    QToolButton *arbGroupTool;
    QToolButton *conesGroupTool;
    QToolButton *ellipsoidGroupTool;
    QToolButton *torusGroupTool;
    QToolButton *metaballsTool;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_3;
    QFrame *tframe;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QSpacerItem *verticalSpacer_6;
    QFrame *properties;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1017, 701);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QStringLiteral("background-color:#2D2E38"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tbox = new QFrame(centralwidget);
        tbox->setObjectName(QStringLiteral("tbox"));
        tbox->setMinimumSize(QSize(84, 364));
        tbox->setMaximumSize(QSize(80, 364));
        tbox->setAutoFillBackground(false);
        tbox->setStyleSheet(QStringLiteral("background-color:rgb(186, 189, 182)"));
        tbox->setFrameShape(QFrame::StyledPanel);
        tbox->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(tbox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        arbGroupTool = new QToolButton(tbox);
        arbGroupTool->setObjectName(QStringLiteral("arbGroupTool"));
        arbGroupTool->setStyleSheet(QStringLiteral(""));
        arbGroupTool->setIconSize(QSize(64, 64));
        arbGroupTool->setCheckable(false);
        arbGroupTool->setAutoRaise(true);

        verticalLayout_2->addWidget(arbGroupTool);

        conesGroupTool = new QToolButton(tbox);
        conesGroupTool->setObjectName(QStringLiteral("conesGroupTool"));
        conesGroupTool->setStyleSheet(QStringLiteral(""));
        conesGroupTool->setIconSize(QSize(64, 64));
        conesGroupTool->setCheckable(false);
        conesGroupTool->setAutoRaise(true);

        verticalLayout_2->addWidget(conesGroupTool);

        ellipsoidGroupTool = new QToolButton(tbox);
        ellipsoidGroupTool->setObjectName(QStringLiteral("ellipsoidGroupTool"));
        ellipsoidGroupTool->setStyleSheet(QStringLiteral(""));
        ellipsoidGroupTool->setIconSize(QSize(64, 64));
        ellipsoidGroupTool->setCheckable(false);
        ellipsoidGroupTool->setAutoRaise(true);

        verticalLayout_2->addWidget(ellipsoidGroupTool);

        torusGroupTool = new QToolButton(tbox);
        torusGroupTool->setObjectName(QStringLiteral("torusGroupTool"));
        torusGroupTool->setStyleSheet(QStringLiteral(""));
        torusGroupTool->setIconSize(QSize(64, 64));
        torusGroupTool->setCheckable(false);
        torusGroupTool->setAutoRaise(true);

        verticalLayout_2->addWidget(torusGroupTool);

        metaballsTool = new QToolButton(tbox);
        metaballsTool->setObjectName(QStringLiteral("metaballsTool"));
        metaballsTool->setStyleSheet(QStringLiteral(""));
        metaballsTool->setIconSize(QSize(64, 64));
        metaballsTool->setCheckable(false);
        metaballsTool->setAutoRaise(true);

        verticalLayout_2->addWidget(metaballsTool);


        verticalLayout_3->addWidget(tbox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tframe = new QFrame(centralwidget);
        tframe->setObjectName(QStringLiteral("tframe"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tframe->sizePolicy().hasHeightForWidth());
        tframe->setSizePolicy(sizePolicy1);
        tframe->setMinimumSize(QSize(0, 200));
        tframe->setMaximumSize(QSize(16777215, 500));
        tframe->setStyleSheet(QLatin1String("border-radius: 0px;\n"
"background-color:#272830"));
        tframe->setFrameShape(QFrame::StyledPanel);
        tframe->setFrameShadow(QFrame::Raised);
        tframe->setLineWidth(0);
        verticalLayout_5 = new QVBoxLayout(tframe);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lineEdit = new QLineEdit(tframe);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QLatin1String("color: #44ff22;\n"
"font: 16p bold  \"Monospace\";\n"
"border:none;"));

        verticalLayout_5->addWidget(lineEdit, 0, Qt::AlignTop);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);


        verticalLayout_4->addWidget(tframe, 0, Qt::AlignTop);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_7->setContentsMargins(11, -1, -1, -1);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(260, 50));
        frame->setMaximumSize(QSize(260, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setStyleSheet(QLatin1String("color: #FFFFFF;\n"
"font: 16p bold   \"Courier\";\n"
"border:none;"));

        verticalLayout_8->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setStyleSheet(QLatin1String("color: #cccccc;\n"
"font: 13p bold   \"Courier\";\n"
"border:none;"));

        verticalLayout_8->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(frame);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setStyleSheet(QLatin1String("color: #cccccc;\n"
"font: 13p bold   \"Courier\";\n"
"border:none;"));

        verticalLayout_8->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(frame);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setStyleSheet(QLatin1String("color: #cccccc;\n"
"font: 13p bold   \"Courier\";\n"
"border:none;"));

        verticalLayout_8->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(frame);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setStyleSheet(QLatin1String("color: #cccccc;\n"
"font: 13p bold   \"Courier\";\n"
"border:none;"));

        verticalLayout_8->addWidget(lineEdit_7);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_6);


        verticalLayout_7->addWidget(frame);

        properties = new QFrame(centralwidget);
        properties->setObjectName(QStringLiteral("properties"));
        properties->setMinimumSize(QSize(260, 0));
        properties->setMaximumSize(QSize(260, 16777215));
        properties->setFrameShape(QFrame::StyledPanel);
        properties->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(properties);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        lineEdit_2 = new QLineEdit(properties);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setStyleSheet(QLatin1String("color: #FFFFFF;\n"
"font: 16p bold   \"Courier\";\n"
"border:none;"));

        verticalLayout_6->addWidget(lineEdit_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);


        verticalLayout_7->addWidget(properties);


        horizontalLayout->addLayout(verticalLayout_7);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1017, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        arbGroupTool->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        conesGroupTool->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        ellipsoidGroupTool->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        torusGroupTool->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        metaballsTool->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("MainWindow", "Arbalest > ", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("MainWindow", "Objects", Q_NULLPTR));
        lineEdit_4->setText(QApplication::translate("MainWindow", "    sphere1", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("MainWindow", "    arb8_4", Q_NULLPTR));
        lineEdit_6->setText(QApplication::translate("MainWindow", "    metaball4", Q_NULLPTR));
        lineEdit_7->setText(QApplication::translate("MainWindow", "    tank1", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("MainWindow", "Sphere1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
