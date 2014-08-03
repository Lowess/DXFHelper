#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QFileDialog"
#include "QFileSystemModel"

#include "QStack"

#include "QDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButton_importCatalogue_clicked() {
    catalogueRoot = QFileDialog::getExistingDirectory(this,
        tr("Dossier racine du scanner"),
        "/home/florian/Desktop",
        QFileDialog::ShowDirsOnly| QFileDialog::DontResolveSymlinks);

    if (catalogueRoot != 0) {
        ui->lineEdit_importCatalogue->setText(catalogueRoot );

        QFileSystemModel* model = new QFileSystemModel;
        model->setRootPath(catalogueRoot );
        ui->treeView_catalogue->setModel(model);
        ui->treeView_catalogue->setRootIndex(model->index(catalogueRoot));

        scanCatalogue(catalogueRoot);
    }
}

void MainWindow::on_pushButton_moveDXF_clicked() {
    moveDXFFiles();
}

void MainWindow::scanCatalogue(QString rootPath) {
    QDir catalogueDir(rootPath);
    catalogueDir.setFilter(QDir::Files | QDir::Dirs | QDir::NoDot | QDir::NoDotDot);

    QStringList qsl; qsl.append("*.DXF"); // Only get DXF files
    catalogueDir.setNameFilters(qsl);


    // used to store the file paths
    if (filesStack) {
        filesStack->clear();
    } else {
        filesStack = new QStack<QString>();
    }

    // this function stores the absolute paths of each file in a QVector
    QDirIterator itDir(catalogueDir, QDirIterator::Subdirectories);
    while(itDir.hasNext()) {
        //Second filter pass to extract only Piece*.DXF
        QString filePath = itDir.next();
        if ( filePath.right(filePath.size() - filePath.lastIndexOf(QDir::separator()) - 1).contains("Piece") ) {
            filesStack->push(filePath);
        }
    }

    //Display repport of the scan
    ui->lineEdit_DXF->setText(QString::number(filesStack->size()));
    ui->progressBar_DXFProgress->setRange(0, filesStack->size());
    ui->progressBar_DXFProgress->setValue(0);
}

void MainWindow::moveDXFFiles() {
    int p = 0;

    QStack<QDir>* folderToRemove = new QStack<QDir>();

    while(!filesStack->empty()) {
        QString filePath = filesStack->pop();
        qDebug() << "Current: " << filePath;

        QString newFilePath = filePath.left(filePath.lastIndexOf(QDir::separator())) + ".DXF";
        QDir oldFilePath(filePath);
        oldFilePath.rename(oldFilePath.absolutePath(), newFilePath);

        qDebug() << "Renamed: " << newFilePath << "\n";

        QDir oldFolder(filePath.left(filePath.lastIndexOf(QDir::separator())));
        folderToRemove->push(oldFolder);

        p ++;
        ui->progressBar_DXFProgress->setValue(p);
    }

    while(!folderToRemove->empty()) {
        QDir oldFolder = folderToRemove->pop();
        oldFolder.removeRecursively();
        qDebug() << "Removed: " << oldFolder.absolutePath() << "\n";
    }
}

