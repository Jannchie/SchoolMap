/********************************************************************
 * @file:paintlabel.h
 * @Author: Jannchie
 * @Date:2017-06-16
 * @Description:Displays a path in the interface
*********************************************************************/

#ifndef PAINTLABEL_H
#define PAINTLABEL_H
#include <QLabel>
#include <QPaintEvent>
#include <QtWidgets/qframe.h>
#include <QWidget>
#include <QPainter>


class PaintLabel:public QLabel
{

    Q_OBJECT

public:

    explicit PaintLabel(QWidget *parent = 0);

    void paintEvent(QPaintEvent *);

    void drawWay();

};

#endif // PAINTLABEL_H
