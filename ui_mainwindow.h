/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QPushButton *pushButton_importCatalogue;
    QLineEdit *lineEdit_importCatalogue;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_catalogue;
    QTreeView *treeView_catalogue;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_report;
    QLabel *label_titleDXF;
    QLineEdit *lineEdit_DXF;
    QProgressBar *progressBar_DXFProgress;
    QLabel *label_progress;
    QPushButton *pushButton_moveDXF;
    QPushButton *pushButton_quit;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(775, 545);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        pushButton_importCatalogue = new QPushButton(centralWidget);
        pushButton_importCatalogue->setObjectName(QStringLiteral("pushButton_importCatalogue"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_importCatalogue);

        lineEdit_importCatalogue = new QLineEdit(centralWidget);
        lineEdit_importCatalogue->setObjectName(QStringLiteral("lineEdit_importCatalogue"));
        lineEdit_importCatalogue->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_importCatalogue);


        verticalLayout_3->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_catalogue = new QLabel(centralWidget);
        label_catalogue->setObjectName(QStringLiteral("label_catalogue"));
        label_catalogue->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_catalogue);

        treeView_catalogue = new QTreeView(centralWidget);
        treeView_catalogue->setObjectName(QStringLiteral("treeView_catalogue"));
        treeView_catalogue->setMinimumSize(QSize(400, 400));

        verticalLayout->addWidget(treeView_catalogue);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_report = new QLabel(centralWidget);
        label_report->setObjectName(QStringLiteral("label_report"));
        label_report->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, label_report);

        label_titleDXF = new QLabel(centralWidget);
        label_titleDXF->setObjectName(QStringLiteral("label_titleDXF"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_titleDXF);

        lineEdit_DXF = new QLineEdit(centralWidget);
        lineEdit_DXF->setObjectName(QStringLiteral("lineEdit_DXF"));
        lineEdit_DXF->setReadOnly(true);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_DXF);

        progressBar_DXFProgress = new QProgressBar(centralWidget);
        progressBar_DXFProgress->setObjectName(QStringLiteral("progressBar_DXFProgress"));
        progressBar_DXFProgress->setValue(0);

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, progressBar_DXFProgress);

        label_progress = new QLabel(centralWidget);
        label_progress->setObjectName(QStringLiteral("label_progress"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, label_progress);


        verticalLayout_2->addLayout(formLayout_2);

        pushButton_moveDXF = new QPushButton(centralWidget);
        pushButton_moveDXF->setObjectName(QStringLiteral("pushButton_moveDXF"));

        verticalLayout_2->addWidget(pushButton_moveDXF);

        pushButton_quit = new QPushButton(centralWidget);
        pushButton_quit->setObjectName(QStringLiteral("pushButton_quit"));

        verticalLayout_2->addWidget(pushButton_quit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 775, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_quit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DXF Helper", 0));
        pushButton_importCatalogue->setText(QApplication::translate("MainWindow", "Importer un catalogue...", 0));
        label_catalogue->setText(QApplication::translate("MainWindow", "Contenu du catalogue scann\303\251:", 0));
        label_report->setText(QApplication::translate("MainWindow", "Rapport d'analyse et actions:", 0));
        label_titleDXF->setText(QApplication::translate("MainWindow", "Fichiers .DXF \303\240 d\303\251placer trouv\303\251s:", 0));
        label_progress->setText(QApplication::translate("MainWindow", "Progression:", 0));
        pushButton_moveDXF->setText(QApplication::translate("MainWindow", "D\303\251placer les fichiers DXF", 0));
        pushButton_quit->setText(QApplication::translate("MainWindow", "Quitter", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
