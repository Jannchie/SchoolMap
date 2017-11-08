 /********************************************************************
 * @file:additem.h
 * @Author: Jannchie
 * @Date:2017-06-16
 * @Description:The role of this class is to add activity data.
*********************************************************************/
#ifndef ADDITEM_H
#define ADDITEM_H

#include <QDialog>

namespace Ui {
class addItem;
}

class addItem : public QDialog
{
    Q_OBJECT

public:

    explicit addItem(QWidget *parent);

    int index;

    void closeEvent(QCloseEvent *);

    ~addItem();

private slots:

    void on_save_clicked();

private:

    Ui::addItem *ui;
};


#endif // ADDITEM_H
