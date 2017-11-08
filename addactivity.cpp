#include "addactivity.h"
#include "ui_addactivity.h"

addActivity::addActivity(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addActivity)
{
    ui->setupUi(this);
}

addActivity::~addActivity()
{
    delete ui;
}
