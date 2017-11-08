#include "pathqueue.h"

PathQueue::PathQueue()
{

    front = rear = new QueueNode();
    front->next = 0;

}

void PathQueue::InitQueue ()
{ /* 构造一个空队列Q */
    //PathQueue *q = new PathQueue;
}

void PathQueue::EnQueue(int e)
{
    QueueNode *node = new QueueNode();

    node -> date = e;

    node -> next = 0;

    rear->next = node;

    rear = node;
}

int PathQueue::DeQueue()
{
    if(front == rear)
        return -1;

    QueueNode *node;

    node = front -> next;

    int e = node -> date;

    front->next = node -> next;

    if(rear == node)
        rear = front;

    delete(node);

    return e;
}


