#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "node.h"
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
    void on_search_clicked();

    void on_actionCREATE_triggered();

private:
    Ui::MainWindow *ui;
    void search_t(QString);
};

#endif // MAINWINDOW_H
