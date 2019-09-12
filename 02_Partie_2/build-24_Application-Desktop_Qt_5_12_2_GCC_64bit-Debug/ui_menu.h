/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(400, 300);
        menuBar = new QMenuBar(menu);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(menu);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        menu->addToolBar(mainToolBar);
        centralWidget = new QWidget(menu);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        menu->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(menu);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        menu->setStatusBar(statusBar);

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QMainWindow *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
