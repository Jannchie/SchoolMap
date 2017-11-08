#include <QDebug>
#include <Qfile>
#include <QTextStream>
#include <iostream>
#include "activitylinklist.h"
#include <QString>

ActivityLinkList::ActivityLinkList()
{
    head = NULL;

    itemNumber = 0;
}

void ActivityLinkList::insert(Activity activityItem)
{
    ActivityNode *temp = head;

    ActivityNode *newNode = new ActivityNode(activityItem);

    newNode->next = temp;

    head = newNode;

    itemNumber++;

    return;
}

ActivityNode* ActivityLinkList::search(QString name)
{
    ActivityNode * temp;
    temp = this->head;

    while(temp != NULL)
    {
        qDebug("%s,%s",qPrintable(temp->activityItem.name),name.toLocal8Bit ());
        if(temp->activityItem.name == name.toLocal8Bit ())
        {
            qDebug("sueeccd");
            return temp;
        }
        temp=temp->next;
    }

    return NULL;
}

void ActivityLinkList::deleteActivity(ActivityNode * p)
{
    ActivityNode** pnext;
    for(pnext = &head; *pnext ; pnext=&(*pnext)->next)
    {
        if(*pnext==p)
        {
            *pnext=p->next;
            qDebug("%s",p);
        }
    }
}


void ActivityLinkList::readInTable(Ui::MainWindow *ui)
{
    int i = 0;
    ActivityNode *temp = head;
    while (temp != NULL)
    {
        ui->tableWidget->setRowCount(i + 1);

        //qDebug("%d",temp->activityItem.index);

        int a = temp->activityItem.index;

        QString s = QString::number(a, 10);

        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(temp->activityItem.name));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(temp->activityItem.date));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(temp->activityItem.time));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(temp->activityItem.place));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(s));

        i++;

        temp = temp->next;
    }

}

int ActivityLinkList::writefile(MainWindow *w) {

    QFile f("D:\\Qt\\SchoolMap\\activityInformation.txt");
    if (!f.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug("Open failedQAQ.");
        return -1;
    }

    QTextStream txtOutput(&f);

    QString line_1=0;
    QString line_2=0;
    QString line_3=0;
    QString line_4=0;
    QString line_5=0;

    int c = 0;
    c = w->ui->tableWidget->rowCount();


    for(int i = 0; i < c; i++)
    {
        w->ui->tableWidget->setRowCount (w->ui->tableWidget->rowCount()+1);

        line_1 = w->ui->tableWidget->item (i,0)->text ().toLocal8Bit();
        line_2 = w->ui->tableWidget->item (i,1)->text ().toLocal8Bit();
        line_3 = w->ui->tableWidget->item (i,2)->text ().toLocal8Bit();
        line_4 = w->ui->tableWidget->item (i,3)->text ().toLocal8Bit();
        line_5 = w->ui->tableWidget->item (i,4)->text ().toLocal8Bit();

        txtOutput << line_1 <<"  "<<line_2<<"  "<<line_3<<"  "<<line_4<<"  "<<line_5<< endl;
    }

    f.close();

    return 0;
}

int ActivityLinkList::readfile() {

    QFile f(":/activityInformation.txt");

    if (!f.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug("Open failed.");

        return -1;
    }

    QTextStream txtInput(&f);

    QString lineStr;

    QString tempActivity[5] = { (""),(""),(""),(""),("") };

    while (!txtInput.atEnd())
    {
        lineStr = txtInput.readLine();
        tempActivity[0] = lineStr.section("  ", 0, 0);
        tempActivity[1] = lineStr.section("  ", 1, 1);
        tempActivity[2] = lineStr.section("  ", 2, 2);
        tempActivity[3] = lineStr.section("  ", 3, 3);
        tempActivity[4] = lineStr.section("  ", 4, 4);

        Activity activityItem;

        activityItem.name = tempActivity[0];
        activityItem.date = tempActivity[1];
        activityItem.time = tempActivity[2];
        activityItem.place = tempActivity[3];
        activityItem.index = tempActivity[4].toInt(0, 10);

        insert(activityItem);
    }

    f.close();

    return 0;
}
