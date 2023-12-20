/********************************************************************************
** Form generated from reading UI file 'commande.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDE_H
#define UI_COMMANDE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commande
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCommandLinkButton *commandLinkButton;
    QListView *listView;

    void setupUi(QWidget *commande)
    {
        if (commande->objectName().isEmpty())
            commande->setObjectName("commande");
        commande->resize(1201, 647);
        commande->setMinimumSize(QSize(0, 647));
        commande->setMaximumSize(QSize(1308, 647));
        horizontalLayoutWidget = new QWidget(commande);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(40, 0, 1201, 631));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        commandLinkButton = new QCommandLinkButton(horizontalLayoutWidget);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("camera-photo")));
        commandLinkButton->setIcon(icon);

        horizontalLayout->addWidget(commandLinkButton);

        listView = new QListView(horizontalLayoutWidget);
        listView->setObjectName("listView");

        horizontalLayout->addWidget(listView);


        retranslateUi(commande);

        QMetaObject::connectSlotsByName(commande);
    } // setupUi

    void retranslateUi(QWidget *commande)
    {
        commande->setWindowTitle(QCoreApplication::translate("commande", "Form", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("commande", "CommandLinkButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commande: public Ui_commande {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDE_H
