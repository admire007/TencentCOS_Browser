/********************************************************************************
** Form generated from reading UI file 'toolbarwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLBARWIDGET_H
#define UI_TOOLBARWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToolBarWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_UpLoad;
    QPushButton *pushButton_DownLoad;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_5;
    QPushButton *pushButton_QuitLogin;

    void setupUi(QWidget *ToolBarWidget)
    {
        if (ToolBarWidget->objectName().isEmpty())
            ToolBarWidget->setObjectName(QString::fromUtf8("ToolBarWidget"));
        ToolBarWidget->resize(332, 54);
        horizontalLayout = new QHBoxLayout(ToolBarWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(ToolBarWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton);

        pushButton_UpLoad = new QPushButton(ToolBarWidget);
        pushButton_UpLoad->setObjectName(QString::fromUtf8("pushButton_UpLoad"));
        pushButton_UpLoad->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_UpLoad);

        pushButton_DownLoad = new QPushButton(ToolBarWidget);
        pushButton_DownLoad->setObjectName(QString::fromUtf8("pushButton_DownLoad"));
        pushButton_DownLoad->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_DownLoad);

        pushButton_4 = new QPushButton(ToolBarWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_5 = new QPushButton(ToolBarWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_QuitLogin = new QPushButton(ToolBarWidget);
        pushButton_QuitLogin->setObjectName(QString::fromUtf8("pushButton_QuitLogin"));
        pushButton_QuitLogin->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_QuitLogin);


        retranslateUi(ToolBarWidget);

        QMetaObject::connectSlotsByName(ToolBarWidget);
    } // setupUi

    void retranslateUi(QWidget *ToolBarWidget)
    {
        ToolBarWidget->setWindowTitle(QCoreApplication::translate("ToolBarWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ToolBarWidget", "\345\210\233\345\273\272\346\241\266", nullptr));
        pushButton_UpLoad->setText(QCoreApplication::translate("ToolBarWidget", "\344\270\212\344\274\240", nullptr));
        pushButton_DownLoad->setText(QCoreApplication::translate("ToolBarWidget", "\344\270\213\350\275\275", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ToolBarWidget", "\345\210\267\346\226\260", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ToolBarWidget", "\344\274\240\350\276\223\345\210\227\350\241\250", nullptr));
        pushButton_QuitLogin->setText(QCoreApplication::translate("ToolBarWidget", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToolBarWidget: public Ui_ToolBarWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBARWIDGET_H
