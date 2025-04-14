/********************************************************************************
** Form generated from reading UI file 'bucketswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUCKETSWIDGET_H
#define UI_BUCKETSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BucketsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QListWidget *listWidget;

    void setupUi(QWidget *BucketsWidget)
    {
        if (BucketsWidget->objectName().isEmpty())
            BucketsWidget->setObjectName(QString::fromUtf8("BucketsWidget"));
        BucketsWidget->resize(160, 280);
        verticalLayout = new QVBoxLayout(BucketsWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(BucketsWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(BucketsWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(BucketsWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        retranslateUi(BucketsWidget);

        QMetaObject::connectSlotsByName(BucketsWidget);
    } // setupUi

    void retranslateUi(QWidget *BucketsWidget)
    {
        BucketsWidget->setWindowTitle(QCoreApplication::translate("BucketsWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("BucketsWidget", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BucketsWidget: public Ui_BucketsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUCKETSWIDGET_H
