#include "MGraph.cpp"

#include <dijkstrafindpath.h>
#include <QDebug>
int startPoint = -1;//set starting Point
int endPoint = -1;//set ending Point
int currentPoint = -1;//set ending Point

DijkstraFindPath::DijkstraFindPath()//Dijkstra algorithm constructor
{
}

int n = MAX_VERTEX_NUM;             // Knot number of a graph



void DijkstraFindPath::Dijkstra(int startPoint)
{


    bool visited[MAX_VERTEX_NUM];    //Determines whether the point has been stored in the S collection

    for (int i = 0; i<n; ++i)
    {
        visited[i] = false;

        mgraph.dist[i] = mgraph.arcs[startPoint][i].adj;

        if (mgraph.dist[i] == NOWAY)
            mgraph.prev[i] = 0;

        else
            mgraph.prev[i] = startPoint;
    }

    mgraph.dist[startPoint] = 0;

    visited[startPoint] = 0;
    // Minimum will be placed in the S collection of nodes, take the minimum mgraph.dist[] node, into the combination of S
    // Once the S contains all the vertices in the V, the mgraph.dist records the shortest path length from the source point to all other vertices

    for (int i = 0; i<n; ++i)
    {
        int tmp = NOWAY;

        int u = startPoint;
        // Find the minimum mgraph.dist[j]

        for (int j = 1; j <= n; ++j)

            if ((!visited[j]) && mgraph.dist[j]<tmp)
            {
                u = j;              // U save the nearist point of the current point
                tmp = mgraph.dist[j];
            }

        visited[u] = 1;    // Save current pointin the gather S

        // Update mgraph.dist
        for (int j = 0; j<n; ++j)

            if ((!visited[j]) && mgraph.arcs[u][j].adj < NOWAY)
            {

                int newdist = mgraph.dist[u] + mgraph.arcs[u][j].adj;

                if (newdist < mgraph.dist[j])
                {
                    mgraph.dist[j] = newdist;

                    mgraph.prev[j] = u;
                }
            }
    }

//    for (int i = 0; i<n; i++)qDebug("dist[%d]:%d", i, mgraph.dist[i]);
}



void DijkstraFindPath::searchPath(int endPoint)//Get a path from starting point to ending point
{
    qDebug("startpoint:%d", startPoint);

//    for (int i = 0; i<MAX_VERTEX_NUM; i++)//DEBUG:after useing this function,
//        pathqueue[i] = 9999;        //reset pathqueue in order to make useing this function next time collectly!

//    int flag = 0;

//    pathqueue[flag] = endPoint;

//    flag++;

//    int tmp = mgraph.prev[endPoint];

//    while (tmp != startPoint)
//    {
//        pathqueue[flag] = tmp;

//        flag++;

//        tmp = mgraph.prev[tmp];
//    }

//    pathqueue[flag] = startPoint;



    int tmp = mgraph.prev[endPoint];

    while (tmp != startPoint)
    {
        q.EnQueue (tmp);
        tmp = mgraph.prev[tmp];
    }
    q.EnQueue (startPoint);

}


PathQueue DijkstraFindPath::searchPath_2(int startPoint,Ui::MainWindow *ui,DijkstraFindPath dj)//Get a path from starting point to ending point
{
    int e = -1;
    //   PathQueue q;
    int max = ui->tableWidget_2->rowCount ();
    for(int i=max-1; i >= 0;i--)
    {
        endPoint =  ui->tableWidget_2->item (i,4)->text ().toInt ();
        if(i != 0)
        {
            e = startPoint;
            startPoint =ui->tableWidget_2->item (i-1,4)->text ().toInt ();
        }

        dj.Dijkstra (startPoint);

//        dj.searchPath (startPoint);
        int tmp = dj.mgraph.prev[endPoint];


        while (tmp != startPoint)
        {
            q.EnQueue (tmp);
            tmp = dj.mgraph.prev[tmp];
        }
        q.EnQueue (startPoint);

        startPoint = endPoint;
    }
    endPoint = ui->tableWidget_2->item (max-1,4)->text ().toInt ();
    return q;
}


