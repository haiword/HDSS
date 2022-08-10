/********************************************************************************
** Form generated from reading UI file 'mallsynctimeset.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MALLSYNCTIMESET_H
#define UI_MALLSYNCTIMESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <my_label.h>

QT_BEGIN_NAMESPACE

class Ui_MallSyncTimeSet
{
public:
    my_label *label;
    my_label *labelHead;
    my_label *labelClose;
    QLabel *labelRemark;
    QLabel *labelSet1;
    QLabel *labelSet2;
    QLineEdit *lineEditMinute;

    void setupUi(QDialog *MallSyncTimeSet)
    {
        if (MallSyncTimeSet->objectName().isEmpty())
            MallSyncTimeSet->setObjectName(QString::fromUtf8("MallSyncTimeSet"));
        MallSyncTimeSet->resize(600, 300);
        MallSyncTimeSet->setMinimumSize(QSize(100, 20));
        MallSyncTimeSet->setMaximumSize(QSize(600, 350));
        MallSyncTimeSet->setStyleSheet(QString::fromUtf8("background-color:rgb(251,251,251);"));
        label = new my_label(MallSyncTimeSet);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 233, 600, 70));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setCursor(QCursor(Qt::PointingHandCursor));
        label->setStyleSheet(QString::fromUtf8("color:rgb(70, 98, 255);background-color:rgb(242,242,242);"));
        label->setAlignment(Qt::AlignCenter);
        labelHead = new my_label(MallSyncTimeSet);
        labelHead->setObjectName(QString::fromUtf8("labelHead"));
        labelHead->setGeometry(QRect(0, 0, 555, 41));
        labelHead->setStyleSheet(QString::fromUtf8("background-color:rgb(242,242,242);"));
        labelClose = new my_label(MallSyncTimeSet);
        labelClose->setObjectName(QString::fromUtf8("labelClose"));
        labelClose->setGeometry(QRect(552, 0, 50, 41));
        labelClose->setStyleSheet(QString::fromUtf8("background-color:rgb(184,184,184);"));
        labelRemark = new QLabel(MallSyncTimeSet);
        labelRemark->setObjectName(QString::fromUtf8("labelRemark"));
        labelRemark->setGeometry(QRect(30, 150, 541, 61));
        labelRemark->setFont(font);
        labelSet1 = new QLabel(MallSyncTimeSet);
        labelSet1->setObjectName(QString::fromUtf8("labelSet1"));
        labelSet1->setGeometry(QRect(30, 90, 51, 31));
        labelSet2 = new QLabel(MallSyncTimeSet);
        labelSet2->setObjectName(QString::fromUtf8("labelSet2"));
        labelSet2->setGeometry(QRect(130, 90, 391, 31));
        lineEditMinute = new QLineEdit(MallSyncTimeSet);
        lineEditMinute->setObjectName(QString::fromUtf8("lineEditMinute"));
        lineEditMinute->setGeometry(QRect(80, 87, 41, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        lineEditMinute->setFont(font1);
        lineEditMinute->setStyleSheet(QString::fromUtf8("background:transparent;border:1px solid black;"));

        retranslateUi(MallSyncTimeSet);

        QMetaObject::connectSlotsByName(MallSyncTimeSet);
    } // setupUi

    void retranslateUi(QDialog *MallSyncTimeSet)
    {
        MallSyncTimeSet->setWindowTitle(QCoreApplication::translate("MallSyncTimeSet", "MallSyncTimeSet", nullptr));
        label->setText(QCoreApplication::translate("MallSyncTimeSet", "\347\241\256\345\256\232", nullptr));
        labelHead->setText(QCoreApplication::translate("MallSyncTimeSet", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; color:#6b6b6b;\">\345\225\206\345\237\216\345\220\214\346\255\245\346\227\266\351\227\264\350\256\276\347\275\256</span><span style=\" font-size:12pt; color:#5d5d5d;\"/><span style=\" font-size:11pt; color:#ac011b;\">&nbsp;&nbsp;\351\273\230\350\256\24415\345\210\206\351\222\237\357\274\214\345\217\257\344\277\256\346\224\271 </span></p></body></html>", nullptr));
        labelClose->setText(QCoreApplication::translate("MallSyncTimeSet", "close", nullptr));
        labelRemark->setText(QCoreApplication::translate("MallSyncTimeSet", "<html><head/><body><p><span style=\" font-size:14pt; color:#ababab;\">\345\244\207\346\263\250\357\274\232erp\344\274\232\345\234\250\346\257\217\351\232\224\351\231\220\345\256\232\346\227\266\351\227\264\345\206\205\345\220\221erp\345\217\221\345\207\272\350\257\267\346\261\202\357\274\214\350\216\267\345\217\226\345\225\206\345\237\216\350\256\242\345\215\225</span></p><p><span style=\" font-size:14pt; color:#ababab;\">\344\272\247\347\224\237\346\265\201\346\260\264\344\273\245\345\217\212\345\220\214\346\255\245\345\272\223\345\255\230\345\217\212\345\225\206\345\237\216\344\273\267\346\240\274</span></p></body></html>", nullptr));
        labelSet1->setText(QCoreApplication::translate("MallSyncTimeSet", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\257\217\351\232\224</span></p></body></html>", nullptr));
        labelSet2->setText(QCoreApplication::translate("MallSyncTimeSet", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\210\206\351\222\237\351\207\215\346\226\260\350\257\267\346\261\202\345\225\206\345\237\216\357\274\214\346\233\264\346\226\260\346\225\260\346\215\256\344\270\215\350\203\275\345\260\217\344\272\2165\345\210\206\351\222\237</span></p></body></html>", nullptr));
        lineEditMinute->setText(QCoreApplication::translate("MallSyncTimeSet", "15", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MallSyncTimeSet: public Ui_MallSyncTimeSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MALLSYNCTIMESET_H
