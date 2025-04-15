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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_8;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Logo;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_Title;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Close;
    QSpacerItem *verticalSpacer_5;
    QFrame *line;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_Name;
    QLineEdit *lineEdit_Name;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_ID;
    QLineEdit *lineEdit_ID;
    QLabel *label_PassWord;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit_PassWord;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_Remark;
    QLineEdit *lineEdit_Remark;
    QSpacerItem *verticalSpacer_4;
    QCheckBox *checkBox_Save;
    QPushButton *pushButton_LoginIn;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(396, 441);
        verticalLayout_2 = new QVBoxLayout(LoginDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        frame = new QFrame(LoginDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, -1);
        label_Logo = new QLabel(frame);
        label_Logo->setObjectName(QString::fromUtf8("label_Logo"));
        label_Logo->setMaximumSize(QSize(32, 32));

        horizontalLayout->addWidget(label_Logo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_Title = new QLabel(frame);
        label_Title->setObjectName(QString::fromUtf8("label_Title"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_Title->setFont(font);
        label_Title->setTextFormat(Qt::AutoText);
        label_Title->setAlignment(Qt::AlignCenter);
        label_Title->setWordWrap(false);
        label_Title->setMargin(0);
        label_Title->setIndent(1);

        horizontalLayout->addWidget(label_Title);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Close = new QPushButton(frame);
        pushButton_Close->setObjectName(QString::fromUtf8("pushButton_Close"));
        pushButton_Close->setMaximumSize(QSize(32, 32));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        pushButton_Close->setFont(font1);

        horizontalLayout->addWidget(pushButton_Close);


        verticalLayout_2->addWidget(frame);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        line = new QFrame(LoginDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        frame_2 = new QFrame(LoginDialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_Name = new QLabel(frame_2);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        label_Name->setFont(font2);

        verticalLayout->addWidget(label_Name);

        lineEdit_Name = new QLineEdit(frame_2);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));

        verticalLayout->addWidget(lineEdit_Name);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_9);

        label_ID = new QLabel(frame_2);
        label_ID->setObjectName(QString::fromUtf8("label_ID"));
        QFont font3;
        font3.setPointSize(12);
        label_ID->setFont(font3);

        verticalLayout->addWidget(label_ID);

        lineEdit_ID = new QLineEdit(frame_2);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setMinimumSize(QSize(32, 32));

        verticalLayout->addWidget(lineEdit_ID);

        label_PassWord = new QLabel(frame_2);
        label_PassWord->setObjectName(QString::fromUtf8("label_PassWord"));
        label_PassWord->setFont(font3);

        verticalLayout->addWidget(label_PassWord);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        lineEdit_PassWord = new QLineEdit(frame_2);
        lineEdit_PassWord->setObjectName(QString::fromUtf8("lineEdit_PassWord"));
        lineEdit_PassWord->setMinimumSize(QSize(32, 32));

        verticalLayout->addWidget(lineEdit_PassWord);

        verticalSpacer_3 = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_Remark = new QLabel(frame_2);
        label_Remark->setObjectName(QString::fromUtf8("label_Remark"));
        label_Remark->setFont(font3);

        verticalLayout->addWidget(label_Remark);

        lineEdit_Remark = new QLineEdit(frame_2);
        lineEdit_Remark->setObjectName(QString::fromUtf8("lineEdit_Remark"));
        lineEdit_Remark->setMinimumSize(QSize(32, 32));

        verticalLayout->addWidget(lineEdit_Remark);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        checkBox_Save = new QCheckBox(frame_2);
        checkBox_Save->setObjectName(QString::fromUtf8("checkBox_Save"));

        verticalLayout->addWidget(checkBox_Save);

        pushButton_LoginIn = new QPushButton(frame_2);
        pushButton_LoginIn->setObjectName(QString::fromUtf8("pushButton_LoginIn"));
        pushButton_LoginIn->setMinimumSize(QSize(32, 32));
        pushButton_LoginIn->setFont(font3);

        verticalLayout->addWidget(pushButton_LoginIn);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);


        verticalLayout_2->addWidget(frame_2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

#if QT_CONFIG(shortcut)
        label_ID->setBuddy(lineEdit_ID);
        label_PassWord->setBuddy(lineEdit_PassWord);
#endif // QT_CONFIG(shortcut)

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        label_Logo->setText(QCoreApplication::translate("LoginDialog", "Logo", nullptr));
        label_Title->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("LoginDialog", "X", nullptr));
        label_Name->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225\345\220\215", nullptr));
        label_ID->setText(QCoreApplication::translate("LoginDialog", "&ID", nullptr));
        label_PassWord->setText(QCoreApplication::translate("LoginDialog", "&PassWord", nullptr));
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
