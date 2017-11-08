#ifndef PATHQUEUE_H
#define PATHQUEUE_H

typedef struct QueueNode
{
  int date;
  struct QueueNode *next;
}QNode,*QueuePtr;

class PathQueue
{
public:
    PathQueue();

    QueuePtr front,rear;

    void InitQueue() ;

    void EnQueue(int e);

    int DeQueue();

};

#endif // PATHQUEUE_H





