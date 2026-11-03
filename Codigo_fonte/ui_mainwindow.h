/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_trilho_topo;
    QLabel *label_trilho_meio;
    QLabel *label_trilho_base_meio;
    QLabel *label_trilho_base;
    QLabel *label_trilho_esq_topo;
    QLabel *label_trilho_dir_topo;
    QLabel *label_trilho_div_meio;
    QLabel *label_trilho_b1;
    QLabel *label_trilho_b2;
    QLabel *label_trilho_b3;
    QLabel *label_trilho_b4;
    QLabel *label_trem1;
    QLabel *label_trem2;
    QLabel *label_trem3;
    QLabel *label_trem4;
    QLabel *label_trem5;
    QLabel *label_trem6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(560, 440);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_trilho_topo = new QLabel(centralWidget);
        label_trilho_topo->setObjectName(QString::fromUtf8("label_trilho_topo"));
        label_trilho_topo->setGeometry(QRect(112, 17, 306, 6));
        label_trilho_topo->setStyleSheet(QString::fromUtf8("QLabel { background: #0055ff}"));
        label_trilho_topo->setAlignment(Qt::AlignCenter);
        label_trilho_meio = new QLabel(centralWidget);
        label_trilho_meio->setObjectName(QString::fromUtf8("label_trilho_meio"));
        label_trilho_meio->setGeometry(QRect(112, 117, 306, 6));
        label_trilho_meio->setStyleSheet(QString::fromUtf8("QLabel { background: #0055ff}"));
        label_trilho_meio->setAlignment(Qt::AlignCenter);
        label_trilho_base_meio = new QLabel(centralWidget);
        label_trilho_base_meio->setObjectName(QString::fromUtf8("label_trilho_base_meio"));
        label_trilho_base_meio->setGeometry(QRect(37, 217, 456, 6));
        label_trilho_base_meio->setStyleSheet(QString::fromUtf8("QLabel { background: #0055ff}"));
        label_trilho_base_meio->setAlignment(Qt::AlignCenter);
        label_trilho_base = new QLabel(centralWidget);
        label_trilho_base->setObjectName(QString::fromUtf8("label_trilho_base"));
        label_trilho_base->setGeometry(QRect(37, 317, 456, 6));
        label_trilho_base->setStyleSheet(QString::fromUtf8("QLabel { background: #0055ff}"));
        label_trilho_base->setAlignment(Qt::AlignCenter);
        label_trilho_esq_topo = new QLabel(centralWidget);
        label_trilho_esq_topo->setObjectName(QString::fromUtf8("label_trilho_esq_topo"));
        label_trilho_esq_topo->setGeometry(QRect(112, 17, 6, 206));
        label_trilho_esq_topo->setStyleSheet(QString::fromUtf8("QLabel { background: #0055ff}"));
        label_trilho_esq_topo->setAlignment(Qt::AlignCenter);
        label_trilho_dir_topo = new QLabel(centralWidget);
        label_trilho_dir_topo->setObjectName(QString::fromUtf8("label_trilho_dir_topo"));
        label_trilho_dir_topo->setGeometry(QRect(412, 17, 6, 206));
        label_trilho_dir_topo->setStyleSheet(QString::fromUtf8("QLabel { background: #0055ff}"));
        label_trilho_dir_topo->setAlignment(Qt::AlignCenter);
        label_trilho_div_meio = new QLabel(centralWidget);
        label_trilho_div_meio->setObjectName(QString::fromUtf8("label_trilho_div_meio"));
        label_trilho_div_meio->setGeometry(QRect(262, 117, 6, 106));
        label_trilho_div_meio->setStyleSheet(QString::fromUtf8("QLabel { background: #0055ff}"));
        label_trilho_div_meio->setAlignment(Qt::AlignCenter);
        label_trilho_b1 = new QLabel(centralWidget);
        label_trilho_b1->setObjectName(QString::fromUtf8("label_trilho_b1"));
        label_trilho_b1->setGeometry(QRect(37, 217, 6, 106));
        label_trilho_b1->setStyleSheet(QString::fromUtf8("QLabel { background: #0055ff}"));
        label_trilho_b1->setAlignment(Qt::AlignCenter);
        label_trilho_b2 = new QLabel(centralWidget);
        label_trilho_b2->setObjectName(QString::fromUtf8("label_trilho_b2"));
        label_trilho_b2->setGeometry(QRect(187, 217, 6, 106));
        label_trilho_b2->setStyleSheet(QString::fromUtf8("QLabel { background: #0055ff}"));
        label_trilho_b2->setAlignment(Qt::AlignCenter);
        label_trilho_b3 = new QLabel(centralWidget);
        label_trilho_b3->setObjectName(QString::fromUtf8("label_trilho_b3"));
        label_trilho_b3->setGeometry(QRect(337, 217, 6, 106));
        label_trilho_b3->setStyleSheet(QString::fromUtf8("QLabel { background: #0055ff}"));
        label_trilho_b3->setAlignment(Qt::AlignCenter);
        label_trilho_b4 = new QLabel(centralWidget);
        label_trilho_b4->setObjectName(QString::fromUtf8("label_trilho_b4"));
        label_trilho_b4->setGeometry(QRect(487, 217, 6, 106));
        label_trilho_b4->setStyleSheet(QString::fromUtf8("QLabel { background: #0055ff}"));
        label_trilho_b4->setAlignment(Qt::AlignCenter);
        label_trem1 = new QLabel(centralWidget);
        label_trem1->setObjectName(QString::fromUtf8("label_trem1"));
        label_trem1->setGeometry(QRect(254, 9, 22, 22));
        label_trem1->setStyleSheet(QString::fromUtf8("QLabel { background: #e6e6e6; border: 1px solid #555; font-weight: bold}"));
        label_trem1->setAlignment(Qt::AlignCenter);
        label_trem2 = new QLabel(centralWidget);
        label_trem2->setObjectName(QString::fromUtf8("label_trem2"));
        label_trem2->setGeometry(QRect(104, 159, 22, 22));
        label_trem2->setStyleSheet(QString::fromUtf8("QLabel { background: #e6e6e6; border: 1px solid #555; font-weight: bold}"));
        label_trem2->setAlignment(Qt::AlignCenter);
        label_trem3 = new QLabel(centralWidget);
        label_trem3->setObjectName(QString::fromUtf8("label_trem3"));
        label_trem3->setGeometry(QRect(404, 159, 22, 22));
        label_trem3->setStyleSheet(QString::fromUtf8("QLabel { background: #e6e6e6; border: 1px solid #555; font-weight: bold}"));
        label_trem3->setAlignment(Qt::AlignCenter);
        label_trem4 = new QLabel(centralWidget);
        label_trem4->setObjectName(QString::fromUtf8("label_trem4"));
        label_trem4->setGeometry(QRect(29, 259, 22, 22));
        label_trem4->setStyleSheet(QString::fromUtf8("QLabel { background: #e6e6e6; border: 1px solid #555; font-weight: bold}"));
        label_trem4->setAlignment(Qt::AlignCenter);
        label_trem5 = new QLabel(centralWidget);
        label_trem5->setObjectName(QString::fromUtf8("label_trem5"));
        label_trem5->setGeometry(QRect(254, 309, 22, 22));
        label_trem5->setStyleSheet(QString::fromUtf8("QLabel { background: #e6e6e6; border: 1px solid #555; font-weight: bold}"));
        label_trem5->setAlignment(Qt::AlignCenter);
        label_trem6 = new QLabel(centralWidget);
        label_trem6->setObjectName(QString::fromUtf8("label_trem6"));
        label_trem6->setGeometry(QRect(479, 259, 22, 22));
        label_trem6->setStyleSheet(QString::fromUtf8("QLabel { background: #e6e6e6; border: 1px solid #555; font-weight: bold}"));
        label_trem6->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 350, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 350, 99, 27));
        MainWindow->setCentralWidget(centralWidget);
        label_trilho_topo->raise();
        label_trilho_meio->raise();
        label_trilho_base_meio->raise();
        label_trilho_base->raise();
        label_trilho_esq_topo->raise();
        label_trilho_dir_topo->raise();
        label_trilho_div_meio->raise();
        label_trilho_b1->raise();
        label_trilho_b2->raise();
        label_trilho_b3->raise();
        label_trilho_b4->raise();
        label_trem1->raise();
        label_trem2->raise();
        label_trem3->raise();
        label_trem4->raise();
        label_trem5->raise();
        label_trem6->raise();
        pushButton->raise();
        pushButton_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 560, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_trilho_topo->setText(QString());
        label_trilho_meio->setText(QString());
        label_trilho_base_meio->setText(QString());
        label_trilho_base->setText(QString());
        label_trilho_esq_topo->setText(QString());
        label_trilho_dir_topo->setText(QString());
        label_trilho_div_meio->setText(QString());
        label_trilho_b1->setText(QString());
        label_trilho_b2->setText(QString());
        label_trilho_b3->setText(QString());
        label_trilho_b4->setText(QString());
        label_trem1->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        label_trem2->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        label_trem3->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        label_trem4->setText(QCoreApplication::translate("MainWindow", "d", nullptr));
        label_trem5->setText(QCoreApplication::translate("MainWindow", "e", nullptr));
        label_trem6->setText(QCoreApplication::translate("MainWindow", "f", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Ligar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Parar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
