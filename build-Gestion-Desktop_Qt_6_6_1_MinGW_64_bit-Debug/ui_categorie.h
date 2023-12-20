/********************************************************************************
** Form generated from reading UI file 'categorie.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORIE_H
#define UI_CATEGORIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Categorie
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Categorie)
    {
        if (Categorie->objectName().isEmpty())
            Categorie->setObjectName("Categorie");
        Categorie->resize(800, 600);
        centralwidget = new QWidget(Categorie);
        centralwidget->setObjectName("centralwidget");
        Categorie->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Categorie);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Categorie->setMenuBar(menubar);
        statusbar = new QStatusBar(Categorie);
        statusbar->setObjectName("statusbar");
        Categorie->setStatusBar(statusbar);

        retranslateUi(Categorie);

        QMetaObject::connectSlotsByName(Categorie);
    } // setupUi

    void retranslateUi(QMainWindow *Categorie)
    {
        Categorie->setWindowTitle(QCoreApplication::translate("Categorie", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Categorie: public Ui_Categorie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORIE_H
