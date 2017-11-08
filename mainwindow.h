/********************************************************************
 * @file:mainwindow.h
 * @Author: Jannchie
 * @Date:2017-06-19
 * @Description:Here are the signals and slots in the interface
*********************************************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidgetItem>
#include "addItem.h"
#include "login.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    Ui::MainWindow *ui;

    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();


private slots:

    void closeEvent(QCloseEvent *);

    void on_getStart_clicked();

    void on_getEnd_clicked();

    void on_searchWay_clicked();

    void on_chooseAddress_activated(int index);

    void on_tableWidget_itemClicked(QTableWidgetItem *item);

    void on_tableWidget_2_itemClicked(QTableWidgetItem *item);

    void on_tableWidget_doubleClicked(const QModelIndex &index);

    void on_chooseAddress_currentIndexChanged(int index);

    void on_addActivity_clicked();

    void on_deleteActivity_clicked();

    void on_searchPoint_clicked();

    void on_searchActivity_textChanged(const QString &arg1);

    void on_deleteFocusActivity_clicked();

    void on_close_clicked();

    void on_searchfocusway_clicked();

    void on_login_clicked();

private:

    addItem * add;



    void MainWindow::mousePressEvent(QMouseEvent *e);

};

#endif // MAINWINDOW_H
