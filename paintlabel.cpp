#include "paintlabel.h"
#include "mainwindow.h"


PaintLabel::PaintLabel(QWidget *parent):QLabel(parent)
{
}
void PaintLabel::paintEvent(QPaintEvent *)
{
    drawWay();
}

