/********************************************************************
 * @file:activity.h
 * @Author: Jannchie
 * @Date:2017-06-16
 * @Description:The definition of map data structure is included here.
*********************************************************************/

static const int MAX_VERTEX_NUM = 60;
static const int NOWAY = 9999;


struct ArcCell
{
    int adj;       //weight
};



class MGraph{
public:

    float ordinateCal(int x1,int y1,int x2, int y2);

    void hasedge(int x,int y);

    MGraph();

    ArcCell arcs[MAX_VERTEX_NUM][MAX_VERTEX_NUM];           // adjacency matrix;

    int ordinate[MAX_VERTEX_NUM][2];                      //the ordinate of node

    int dist[MAX_VERTEX_NUM];                             //the shortest route

    bool visited[MAX_VERTEX_NUM];                         //visit record

    int prev[MAX_VERTEX_NUM];                            //Precursor node

    QString information[MAX_VERTEX_NUM];



};
