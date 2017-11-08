/********************************************************************
 * @file:dijkstraFindPath.h
 * @Author: Jannchie
 * @Date:2017-06-16
 * @Description:This class implements the Dijkstra algorithm,
 *              and can generate a shortest path.
*********************************************************************/
#ifndef DIJKSTRAFINDPATH_H
#define DIJKSTRAFINDPATH_H
#include "pathqueue.h"
#endif // DIJKSTRAFINDPATH_H
class DijkstraFindPath
{
public:


    DijkstraFindPath();

    MGraph mgraph;//storage structure of map

    void Dijkstra(int startPoint);//get dist and prevz

    void searchPath(int endPoint);//get path

    int currentPoint;//set current Point

    PathQueue searchPath_2(int startPoint,Ui::MainWindow *ui,DijkstraFindPath dj)    ;//get path

    PathQueue q;

};
