#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_importCatalogue_clicked();

    void on_pushButton_moveDXF_clicked();

private:
    Ui::MainWindow *ui;
    QString catalogueRoot;
    QStack<QString>* filesStack;

    void moveDXFFiles();
    void scanCatalogue(QString root);
};

#endif // MAINWINDOW_H
