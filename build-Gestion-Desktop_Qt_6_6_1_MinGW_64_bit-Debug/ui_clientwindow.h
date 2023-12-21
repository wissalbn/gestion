/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *ClientPage;
    QTableView *ClienttableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *UpdateButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *NewButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *DeleteButton;
    QWidget *AdminPage;
    QTableView *AdminsView;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *NewAdminButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *DeleteAdminButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *UpdateAdminsButton;
    QWidget *Commande;
    QTableView *tableView;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *CommandeButton;
    QPushButton *AdminButton;
    QPushButton *ClientButton;
    QPushButton *CategorieButton;

    void setupUi(QMainWindow *ClientWindow)
    {
        if (ClientWindow->objectName().isEmpty())
            ClientWindow->setObjectName("ClientWindow");
        ClientWindow->resize(1014, 600);
        centralwidget = new QWidget(ClientWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(230, 10, 771, 481));
        ClientPage = new QWidget();
        ClientPage->setObjectName("ClientPage");
        ClienttableView = new QTableView(ClientPage);
        ClienttableView->setObjectName("ClienttableView");
        ClienttableView->setGeometry(QRect(10, 30, 771, 391));
        ClienttableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    border: 1px solid #ccc;\n"
"    gridline-color: #ccc;\n"
"    background-color: #f5f5f5;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 5px;\n"
"    border: 1px solid #F0ECE5;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #F0ECE5;\n"
"    color: #161A30;\n"
"    padding: 5px;\n"
"    border: 1px solid #ddd;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #F0ECE5;\n"
"}"));
        layoutWidget = new QWidget(ClientPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(240, 430, 301, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        UpdateButton = new QPushButton(layoutWidget);
        UpdateButton->setObjectName("UpdateButton");

        horizontalLayout->addWidget(UpdateButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        NewButton = new QPushButton(layoutWidget);
        NewButton->setObjectName("NewButton");

        horizontalLayout->addWidget(NewButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        DeleteButton = new QPushButton(layoutWidget);
        DeleteButton->setObjectName("DeleteButton");

        horizontalLayout->addWidget(DeleteButton);

        stackedWidget->addWidget(ClientPage);
        AdminPage = new QWidget();
        AdminPage->setObjectName("AdminPage");
        AdminsView = new QTableView(AdminPage);
        AdminsView->setObjectName("AdminsView");
        AdminsView->setGeometry(QRect(40, 50, 731, 341));
        AdminsView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    border: 1px solid #ccc;\n"
"    gridline-color: #ccc;\n"
"    background-color: #f5f5f5;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 5px;\n"
"    border: 1px solid #F0ECE5;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #F0ECE5;\n"
"    color: #161A30;\n"
"    padding: 5px;\n"
"    border: 1px solid #ddd;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #F0ECE5;\n"
"}"));
        layoutWidget1 = new QWidget(AdminPage);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(210, 410, 359, 31));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        NewAdminButton = new QPushButton(layoutWidget1);
        NewAdminButton->setObjectName("NewAdminButton");

        gridLayout_2->addWidget(NewAdminButton, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        DeleteAdminButton = new QPushButton(layoutWidget1);
        DeleteAdminButton->setObjectName("DeleteAdminButton");

        gridLayout_2->addWidget(DeleteAdminButton, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        UpdateAdminsButton = new QPushButton(layoutWidget1);
        UpdateAdminsButton->setObjectName("UpdateAdminsButton");

        gridLayout_2->addWidget(UpdateAdminsButton, 0, 4, 1, 1);

        stackedWidget->addWidget(AdminPage);
        Commande = new QWidget();
        Commande->setObjectName("Commande");
        tableView = new QTableView(Commande);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(145, 20, 601, 311));
        stackedWidget->addWidget(Commande);
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 90, 178, 146));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 2, 1, 1);

        CommandeButton = new QPushButton(layoutWidget2);
        CommandeButton->setObjectName("CommandeButton");

        gridLayout->addWidget(CommandeButton, 2, 2, 1, 1);

        AdminButton = new QPushButton(layoutWidget2);
        AdminButton->setObjectName("AdminButton");

        gridLayout->addWidget(AdminButton, 1, 2, 1, 1);

        ClientButton = new QPushButton(layoutWidget2);
        ClientButton->setObjectName("ClientButton");

        gridLayout->addWidget(ClientButton, 0, 2, 1, 1);

        CategorieButton = new QPushButton(layoutWidget2);
        CategorieButton->setObjectName("CategorieButton");

        gridLayout->addWidget(CategorieButton, 3, 2, 1, 1);

        ClientWindow->setCentralWidget(centralwidget);

        retranslateUi(ClientWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ClientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ClientWindow)
    {
        ClientWindow->setWindowTitle(QCoreApplication::translate("ClientWindow", "MainWindow", nullptr));
        UpdateButton->setText(QCoreApplication::translate("ClientWindow", "Update", nullptr));
        NewButton->setText(QCoreApplication::translate("ClientWindow", "New", nullptr));
        DeleteButton->setText(QCoreApplication::translate("ClientWindow", "Delete", nullptr));
        NewAdminButton->setText(QCoreApplication::translate("ClientWindow", "New Admin", nullptr));
        DeleteAdminButton->setText(QCoreApplication::translate("ClientWindow", "Delete Admin", nullptr));
        UpdateAdminsButton->setText(QCoreApplication::translate("ClientWindow", "Update", nullptr));
        CommandeButton->setText(QCoreApplication::translate("ClientWindow", "Commande", nullptr));
        AdminButton->setText(QCoreApplication::translate("ClientWindow", "Admins", nullptr));
        ClientButton->setText(QCoreApplication::translate("ClientWindow", "Client", nullptr));
        CategorieButton->setText(QCoreApplication::translate("ClientWindow", "Categorie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWindow: public Ui_ClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
