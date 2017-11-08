#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>
#include <string>
#include "DijkstraFindPath.cpp"
#include "activitylinklist.cpp"
#include <QPropertyAnimation>
#include <QPixmap>

ActivityLinkList a;
DijkstraFindPath dj;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    move (460, 50 );

    this->setWindowFlags(Qt::FramelessWindowHint);//display titlebar

//    ui->addActivity->hide ();
//    ui->deleteActivity->hide ();

    QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(500);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start();





    //QPixmap close=style()->standardPixmap(QStyle::SP_TitleBarCloseButton);
    //ui->close->setIcon (close);

    /****************************************
     * set tablewidget
     ****************************************/
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//unable to change infomation.
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->resizeRowsToContents();
    ui->tableWidget->setColumnWidth(0, 100);
    ui->tableWidget->setColumnWidth(1, 40);
    ui->tableWidget->setColumnWidth(2, 38);
    ui->tableWidget->hideColumn(4);//hide a column

    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);//unable to change infomation.
    ui->tableWidget_2->resizeColumnsToContents();
    ui->tableWidget_2->resizeRowsToContents();
    ui->tableWidget_2->setColumnWidth(0, 100);
    ui->tableWidget_2->setColumnWidth(1, 40);
    ui->tableWidget_2->setColumnWidth(2, 38);
    ui->tableWidget_2->hideColumn(4);//hide a column


    ui->currentpoint->setVisible(false);
    ui->point->setVisible(false);
    ui->endpoint->setVisible(false);
    ui->tableWidget->setRowCount(0);

    a.readfile();
    a.readInTable(ui);


    /****************************************
     * delete the same item
     ****************************************/
    ui->tableWidget->sortByColumn (0);
    int c = ui->tableWidget->rowCount ();

    int d[100];
    for(int i=0;i<100;i++)d[i]=1;
    for(int i =0; i<c ;i++)
        for(int j = i+1 ;j<c;j++)
            if (ui->tableWidget->item (i,0)->text ()==ui->tableWidget->item (j,0)->text ())d[j]=0;

    for(int i = 100;i>0;i--)
    {
        if (d[i]==0)
            ui->tableWidget->removeRow(i);
    }
    /****************************************
     * delete the same item
     ****************************************/



    //    for(int i=0;i<a.itemNumber;i++)
    //    {
    //        ui->tableWidget->setItem(i,0,new QTableWidgetItem(a.activity[i].name));
    //        ui->tableWidget->setItem(i,1,new QTableWidgetItem(a.activity[i].time));
    //        ui->tableWidget->setItem(i,2,new QTableWidgetItem(a.activity[i].place));
    //    }
    ui->statusBar->showMessage(tr("System preparation .........Succeed! "), 5000);
}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::mousePressEvent(QMouseEvent *e)
{
    ui->ordinateInfo->setText(tr("(%1,%2)").arg(e->x()).arg(e->y()));//Get coordinates on the map


    int minPoint = -1;
    float temp = dj.mgraph.ordinateCal(dj.mgraph.ordinate[0][0], dj.mgraph.ordinate[0][1], e->x(), e->y());

    for (int i = 0; i<ui->chooseAddress->count(); i++)
    {
        if ((temp >= (dj.mgraph.ordinateCal(dj.mgraph.ordinate[i][0], dj.mgraph.ordinate[i][1], e->x(), e->y()))) & (e->x() <= 660))
        {
            minPoint = i;
            temp = dj.mgraph.ordinateCal(dj.mgraph.ordinate[i][0], dj.mgraph.ordinate[i][1], e->x(), e->y());

            //    qDebug("%.2f", dj.mgraph.ordinateCal(dj.mgraph.ordinate[i][0], dj.mgraph.ordinate[i][1], e->x(), e->y()));

            currentPoint = minPoint;
            ui->currentpoint->move(dj.mgraph.ordinate[currentPoint][0] - 12, dj.mgraph.ordinate[currentPoint][1] - 24);
            ui->currentpoint->setVisible(true);
            ui->chooseAddress->setCurrentIndex(currentPoint);
        }
        //    qDebug("%d", minPoint);
    }


}



void MainWindow::on_getStart_clicked()//set the starting point
{
    ui->mapdraw->setVisible(false);//Do not show the unset path
    if (ui->chooseAddress->currentIndex() == -1) {
        ui->statusBar->showMessage(tr("ERROR:You should choose a place!"), 5000);
        return;
    }
    if (ui->chooseAddress->currentIndex() == endPoint) {
        ui->statusBar->showMessage(tr("ERROR:You chose the same starting point and ending point!"), 5000);
        return;
    }
    while (ui->chooseAddress->currentIndex() != -1) {
        startPoint = ui->chooseAddress->currentIndex();
        ui->point->move(dj.mgraph.ordinate[startPoint][0] - 16, dj.mgraph.ordinate[startPoint][1] - 8);
        ui->point->setVisible(true);
        ui->statusBar->showMessage(tr("starting point setting succeed!"), 5000);
        ui->currentpoint->setVisible(false);
        return;
    }
}

void MainWindow::on_getEnd_clicked()//set the ending point
{
    ui->mapdraw->setVisible(false);//Do not show the unset path
    if (ui->chooseAddress->currentIndex() == -1) {
        ui->statusBar->showMessage(tr("ERROR:You should choose a place!"), 5000);
        return;
    }

    if (ui->chooseAddress->currentIndex() == startPoint) {
        ui->statusBar->showMessage(tr("ERROR:You chose the same starting point and ending point!"), 5000);
        return;
    }

    while (ui->chooseAddress->currentIndex() != -1) {
        endPoint = ui->chooseAddress->currentIndex();

        ui->endpoint->move(dj.mgraph.ordinate[endPoint][0] - 16, dj.mgraph.ordinate[endPoint][1] - 8);

        ui->endpoint->setVisible(true);

        ui->statusBar->showMessage(tr("ending point setting succeed!"), 5000);

        ui->currentpoint->setVisible(false);
        return;
    }

}

void MainWindow::on_searchWay_clicked()
{
    qDebug("startpoint:%d", startPoint);
    qDebug("endpoint:%d", endPoint);

    if (startPoint == -1 || endPoint == -1 || startPoint == endPoint)
    {
        ui->statusBar->showMessage(tr("ERROR:Illegal starting point or ending point!"), 5000);
        return;
    }

    dj.Dijkstra(startPoint);
    dj.searchPath(endPoint);

//    for (int i = 0; i<MAX_VERTEX_NUM; i++)
//        qDebug("que%d:%d", i, dj.pathqueue[i]);

    ui->mapdraw->setVisible(true);

}

void MainWindow::on_chooseAddress_activated(int index)
{

    currentPoint = ui->chooseAddress->currentIndex();

    ui->currentpoint->move(dj.mgraph.ordinate[index][0] - 12, dj.mgraph.ordinate[index][1] - 24);

    ui->currentpoint->setVisible(true);
}




void MainWindow::on_tableWidget_itemClicked(QTableWidgetItem *item)
{    
    ui->tableWidget->item(item->row(), 3)->text().toInt(0, 10);

    //qDebug("%s",qPrintable(ui->tableWidget->item(item->row(),4)->text()));

    int index = ui->tableWidget->item(item->row(), 4)->text().toInt(0, 10);

    currentPoint = index;

    //qDebug("%d",index);

    ui->info->setText(dj.mgraph.information[index]);

    ui->currentpoint->move(dj.mgraph.ordinate[index][0] - 12, dj.mgraph.ordinate[index][1] - 24);;

    ui->currentpoint->setVisible(true);

    ui->chooseAddress->setCurrentIndex(currentPoint);
}

void MainWindow::on_tableWidget_2_itemClicked(QTableWidgetItem *item)
{
    ui->tableWidget_2->item(item->row(), 3)->text().toInt(0, 10);

    //qDebug("%s",qPrintable(ui->tableWidget->item(item->row(),4)->text()));

    int index = ui->tableWidget_2->item(item->row(), 4)->text().toInt(0, 10);

    currentPoint = index;

    //qDebug("%d",index);

    ui->info->setText(dj.mgraph.information[index]);

    ui->currentpoint->move(dj.mgraph.ordinate[index][0] - 12, dj.mgraph.ordinate[index][1] - 24);;

    ui->currentpoint->setVisible(true);

    ui->chooseAddress->setCurrentIndex(currentPoint);
}


void MainWindow::on_tableWidget_doubleClicked(const QModelIndex &index)
{
    //  qDebug("%d", index.row() );

    QString a = "";

    QString b = "";

    if (ui->tableWidget_2->rowCount() != 0)//Do not admit to pay attention on a activity had already attended.
    {
        for (int i = 0; i < ui->tableWidget_2->rowCount(); i++)
        {
            a = ui->tableWidget->item(index.row(), 0)->text();

            b = ui->tableWidget_2->item(i, 0)->text();

            if (a == b)
            {
                ui->statusBar->showMessage(tr("ERROR:You can not attention on a activity you had already attented!"), 5000);

                return;
            }
        }
    }

    ui->tableWidget_2->setRowCount(ui->tableWidget_2->rowCount() + 1);

    for (int i = 0; i <= 4; i++)
    {
        ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount ()-1, i, new QTableWidgetItem(ui->tableWidget->item(index.row(), i)->text()));
    }


    //ui->tableWidget->item(index.row(),0);
}

void PaintLabel::drawWay()
{

    QPainter *painter = new QPainter(this);
    QPen pen;  // creates a default pen
    pen.setStyle(Qt::DashDotLine);
    pen.setWidth(3);
    pen.setBrush(Qt::darkRed);
    pen.setCapStyle(Qt::SquareCap);
    pen.setJoinStyle(Qt::BevelJoin);

    painter->setPen(pen);

    QPainterPath path;

    path.moveTo(dj.mgraph.ordinate[endPoint][0],dj.mgraph.ordinate[endPoint][1]);

//    int i=0;
//    while(dj.pathqueue[i] <MAX_VERTEX_NUM){
//        if(dj.pathqueue[i]!=9999)
//            path.lineTo(dj.mgraph.ordinate[dj.pathqueue[i]][0],dj.mgraph.ordinate[dj.pathqueue[i]][1]);
//        i++;
//    }

    int temp;
    while((temp = dj.q.DeQueue()) != -1)
    {
            path.lineTo(dj.mgraph.ordinate[temp][0],dj.mgraph.ordinate[temp][1]);
            qDebug("%d",temp);
    }



    painter->setPen(pen);
    painter->drawPath(path);
//        delete painter;
//        update();
//    QPainter painter(this);

//       DEBUG:show the point!
//            QPen pen_2;  // creates a default pen
//            pen_2.setStyle(Qt::DashLine);
//            pen_2.setWidth(2);
//            pen_2.setBrush(Qt::darkBlue);
//            pen_2.setCapStyle(Qt::SquareCap);
//            pen_2.setJoinStyle(Qt::BevelJoin);
//            painter->setPen(pen_2);

//            for(int i = 0 ;i< 28;i++)
//            {
//                painter->drawEllipse(dj.mgraph.ordinate[i][0]-13,dj.mgraph.ordinate[i][1]-13,20,20);
//            }

//      DEBUG:show all the road
//                QPoint a,b;
//                QLine line;
//                for(int i=0;i<MAX_VERTEX_NUM;i++){
//                     for(int j=0;j<MAX_VERTEX_NUM;j++){
//                         if(dj.mgraph.arcs[i][j].adj != 9999)
//                         {
//                             a.setX(dj.mgraph.ordinate[i][0]);
//                             a.setY(dj.mgraph.ordinate[i][1]);
//                             b.setX(dj.mgraph.ordinate[j][0]);
//                             b.setY(dj.mgraph.ordinate[j][1]);
//                             line.setP1(a);
//                             line.setP2(b);
//                             painter->drawLine(line);
//                         }
//                     }
//                }

        painter->setPen(pen);
        painter->drawPath(path);
        delete painter;


}



void MainWindow::on_chooseAddress_currentIndexChanged(int index)
{
    if (index != -1)
        ui->info->setText(dj.mgraph.information[index]);

    else
        ui->info->setText("");
}

void MainWindow::on_addActivity_clicked()
{   
    ui->tableWidget->setRowCount (0);
   // ui->tableWidget->setRowCount (ui->tableWidget->rowCount ()+1);

    this->close();

    add = new addItem(this);
    add->show ();
}

void addItem::closeEvent(QCloseEvent *)
{
    MainWindow * w = new MainWindow();
    w->show();
}

void MainWindow::closeEvent(QCloseEvent *)
{

    a.writefile (this);
    ui->tableWidget->setRowCount (0);

}

void MainWindow::on_deleteActivity_clicked()
{
     ui->tableWidget->removeRow(ui->tableWidget->currentRow ());
}



void MainWindow::on_searchPoint_clicked()
{

    int flag = 0;

    for(int i=0;i<ui->chooseAddress->count ()-1;i++)

    {ui->chooseAddress->setCurrentIndex (i);

        if(ui->searchLine->text ().toLocal8Bit ()==ui->chooseAddress->currentText ().toLocal8Bit ())
        {
            currentPoint = i;

            ui->currentpoint->move(dj.mgraph.ordinate[currentPoint][0] - 12, dj.mgraph.ordinate[currentPoint][1] - 24);

            ui->currentpoint->setVisible(true);

            ui->chooseAddress->setCurrentIndex(currentPoint);

            flag = 1;

            break;
        }

    }
    if(flag == 0)
    {
        ui->statusBar->showMessage(tr("ERROR:Can't find the point!"), 5000);

        ui->chooseAddress->setCurrentIndex(-1);
    }
}

void MainWindow::on_searchActivity_textChanged(const QString &arg1)
{
    //a.search (arg1);
    for(int n = 0;n < ui->tableWidget->rowCount ();n++)ui->tableWidget->showRow (n);

    if(arg1 !="")
    {
        for(int n = 0;n < ui->tableWidget->rowCount ();n++)
        {
            QString temp = ui->tableWidget->item (n,0)->text () +
                    ui->tableWidget->item (n,1)->text () +
                    ui->tableWidget->item (n,2)->text () +
                    ui->tableWidget->item (n,3)->text ();

            ui->tableWidget->hideRow (n);

            QString y;
            for(int i = 0;i<= temp.size () - arg1.size ()+1;i++)
            {
                y = temp.mid(i - 1, arg1.size ());
//                qDebug("%s,%s",qPrintable(arg1),qPrintable(y));
                if(arg1.toLocal8Bit ()== y)
                {
                    ui->tableWidget->showRow (n);
                }
            }


//                if(temp.contains (arg1 , Qt::CaseSensitive))
//                {
//                    ui->tableWidget->showRow (n);
//                }

        }

    }

}

void MainWindow::on_deleteFocusActivity_clicked()
{
    ui->tableWidget_2->removeRow(ui->tableWidget_2->currentRow ());
}

void MainWindow::on_close_clicked()
{

    this->close();
}



void MainWindow::on_searchfocusway_clicked()
{

    dj.searchPath_2(startPoint,ui, dj);
    update();
    ui->mapdraw->setVisible(true);

}

void MainWindow::on_login_clicked()
{
    Login *login = new Login();
    login->setWindowFlags(Qt::FramelessWindowHint);//display titlebar
    login->show();
}
