/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *lbResult;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_Procent;
    QPushButton *pushButton_Devide;
    QPushButton *pushButton_plusminus;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_Multiply;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_Plus;
    QPushButton *pushButton_8;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Dot;
    QPushButton *pushButton_Equal;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(267, 383);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lbResult = new QLabel(centralwidget);
        lbResult->setObjectName("lbResult");
        lbResult->setGeometry(QRect(11, 10, 241, 61));
        QFont font;
        font.setPointSize(20);
        lbResult->setFont(font);
        lbResult->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName("pushButton_AC");
        pushButton_AC->setGeometry(QRect(10, 70, 61, 61));
        QFont font1;
        font1.setPointSize(11);
        pushButton_AC->setFont(font1);
        pushButton_AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_Procent = new QPushButton(centralwidget);
        pushButton_Procent->setObjectName("pushButton_Procent");
        pushButton_Procent->setGeometry(QRect(132, 70, 61, 61));
        pushButton_Procent->setFont(font1);
        pushButton_Procent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_Devide = new QPushButton(centralwidget);
        pushButton_Devide->setObjectName("pushButton_Devide");
        pushButton_Devide->setGeometry(QRect(193, 70, 61, 61));
        pushButton_Devide->setFont(font1);
        pushButton_Devide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_plusminus = new QPushButton(centralwidget);
        pushButton_plusminus->setObjectName("pushButton_plusminus");
        pushButton_plusminus->setGeometry(QRect(71, 70, 61, 61));
        pushButton_plusminus->setFont(font1);
        pushButton_plusminus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(10, 130, 61, 61));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(false);
        pushButton_1->setFont(font2);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(132, 130, 61, 61));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_Multiply = new QPushButton(centralwidget);
        pushButton_Multiply->setObjectName("pushButton_Multiply");
        pushButton_Multiply->setGeometry(QRect(193, 130, 61, 61));
        pushButton_Multiply->setFont(font1);
        pushButton_Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(71, 130, 61, 61));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 190, 61, 61));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(132, 190, 61, 61));
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName("pushButton_minus");
        pushButton_minus->setGeometry(QRect(193, 190, 61, 61));
        pushButton_minus->setFont(font1);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(71, 190, 61, 61));
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(10, 250, 61, 61));
        pushButton_7->setFont(font2);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(132, 250, 61, 61));
        pushButton_9->setFont(font2);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_Plus = new QPushButton(centralwidget);
        pushButton_Plus->setObjectName("pushButton_Plus");
        pushButton_Plus->setGeometry(QRect(193, 250, 61, 61));
        pushButton_Plus->setFont(font1);
        pushButton_Plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(71, 250, 61, 61));
        pushButton_8->setFont(font2);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(10, 310, 122, 61));
        pushButton_0->setFont(font2);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_Dot = new QPushButton(centralwidget);
        pushButton_Dot->setObjectName("pushButton_Dot");
        pushButton_Dot->setGeometry(QRect(132, 310, 61, 61));
        pushButton_Dot->setFont(font1);
        pushButton_Dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_Equal = new QPushButton(centralwidget);
        pushButton_Equal->setObjectName("pushButton_Equal");
        pushButton_Equal->setGeometry(QRect(193, 310, 61, 61));
        pushButton_Equal->setFont(font1);
        pushButton_Equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lbResult->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_Procent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_Devide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_plusminus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_1->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>10</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_3->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>10</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_Multiply->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_2->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>10</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_4->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>10</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_6->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>10</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_5->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>10</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_7->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>10</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_9->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>10</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_8->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>10</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_0->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>10</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_Equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
