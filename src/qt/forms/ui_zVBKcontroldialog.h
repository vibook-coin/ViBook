/********************************************************************************
** Form generated from reading UI file 'zVBKcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZVBKCONTROLDIALOG_H
#define UI_ZVBKCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZVBKControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZVBK;
    QLabel *labelZVBK_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZVBKControlDialog)
    {
        if (ZVBKControlDialog->objectName().isEmpty())
            ZVBKControlDialog->setObjectName(QStringLiteral("ZVBKControlDialog"));
        ZVBKControlDialog->resize(681, 384);
        ZVBKControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZVBKControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZVBKControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZVBKControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZVBK = new QLabel(ZVBKControlDialog);
        labelZVBK->setObjectName(QStringLiteral("labelZVBK"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZVBK);

        labelZVBK_int = new QLabel(ZVBKControlDialog);
        labelZVBK_int->setObjectName(QStringLiteral("labelZVBK_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZVBK_int);

        pushButtonAll = new QPushButton(ZVBKControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZVBKControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zVBK Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZVBKControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZVBKControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZVBKControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZVBKControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZVBKControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZVBKControlDialog)
    {
        ZVBKControlDialog->setWindowTitle(QApplication::translate("ZVBKControlDialog", "Select zVBK to Spend", 0));
        labelQuantity->setText(QApplication::translate("ZVBKControlDialog", "Quantity", 0));
        labelQuantity_int->setText(QApplication::translate("ZVBKControlDialog", "0", 0));
        labelZVBK->setText(QApplication::translate("ZVBKControlDialog", "zVBK", 0));
        labelZVBK_int->setText(QApplication::translate("ZVBKControlDialog", "0", 0));
        pushButtonAll->setText(QApplication::translate("ZVBKControlDialog", "Select/Deselect All", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZVBKControlDialog", "Is Spendable", 0));
    } // retranslateUi

};

namespace Ui {
    class ZVBKControlDialog: public Ui_ZVBKControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZVBKCONTROLDIALOG_H
