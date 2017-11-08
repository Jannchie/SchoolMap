#include "additem.h"
#include "ui_additem.h"
#include "mainwindow.h"
#include "activitylinklist.h"
extern ActivityLinkList a;

addItem::addItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addItem)
{
    parent=0;
    ui->setupUi(this);
}

addItem::~addItem()
{
    delete ui;
}




void addItem::on_save_clicked()
{
    if((ui->getName->text ().toLocal8Bit ()!="") & (ui->getDate->text ().toLocal8Bit () != "" )& (ui->getDate->text ().toLocal8Bit () != "") &(ui->chooseAddress->currentIndex () != -1))
    {
        Activity activityItem;
        activityItem.name = ui->getName->text ().toLocal8Bit ();
        activityItem.date = ui->getDate->text ().toLocal8Bit ();
        activityItem.time = ui->getTime->text ().toLocal8Bit ();
        activityItem.index = ui->chooseAddress->currentIndex ();
        activityItem.place = ui->chooseAddress->currentText ();
        qDebug("%d",a.itemNumber);
        a.insert (activityItem);
        ui->info->setText ("<<  The activity is saved !  >>");
        //
    }else{
        ui->info->setText ("<<  Please enter full activity information !    >>");
    }
    qDebug("save");
}
