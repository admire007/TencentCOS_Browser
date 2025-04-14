/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_ID;
    QLineEdit *lineEdit_ID;
    QLabel *label_PassWord;
    QLineEdit *lineEdit_PassWord;
    QLabel *label_Remark;
    QLineEdit *lineEdit_Remark;
    QCheckBox *checkBox_Save;
    QPushButton *pushButton_LoginIn;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(400, 450);
        widget = new QWidget(LoginDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 50, 321, 341));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_ID = new QLabel(widget);
        label_ID->setObjectName(QString::fromUtf8("label_ID"));

        gridLayout->addWidget(label_ID, 0, 0, 1, 1);

        lineEdit_ID = new QLineEdit(widget);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));

        gridLayout->addWidget(lineEdit_ID, 1, 0, 1, 1);

        label_PassWord = new QLabel(widget);
        label_PassWord->setObjectName(QString::fromUtf8("label_PassWord"));

        gridLayout->addWidget(label_PassWord, 2, 0, 1, 1);

        lineEdit_PassWord = new QLineEdit(widget);
        lineEdit_PassWord->setObjectName(QString::fromUtf8("lineEdit_PassWord"));

        gridLayout->addWidget(lineEdit_PassWord, 3, 0, 1, 1);

        label_Remark = new QLabel(widget);
        label_Remark->setObjectName(QString::fromUtf8("label_Remark"));

        gridLayout->addWidget(label_Remark, 4, 0, 1, 1);

        lineEdit_Remark = new QLineEdit(widget);
        lineEdit_Remark->setObjectName(QString::fromUtf8("lineEdit_Remark"));

        gridLayout->addWidget(lineEdit_Remark, 5, 0, 1, 1);

        checkBox_Save = new QCheckBox(widget);
        checkBox_Save->setObjectName(QString::fromUtf8("checkBox_Save"));

        gridLayout->addWidget(checkBox_Save, 6, 0, 1, 1);

        pushButton_LoginIn = new QPushButton(widget);
        pushButton_LoginIn->setObjectName(QString::fromUtf8("pushButton_LoginIn"));

        gridLayout->addWidget(pushButton_LoginIn, 7, 0, 1, 1);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        label_ID->setText(QCoreApplication::translate("LoginDialog", "ID", nullptr));
        label_PassWord->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201", nullptr));
        label_Remark->setText(QCoreApplication::translate("LoginDialog", "\345\244\207\346\263\250", nullptr));
        checkBox_Save->setText(QCoreApplication::translate("LoginDialog", "\350\256\260\344\275\217\344\274\232\350\257\235", nullptr));
        pushButton_LoginIn->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
