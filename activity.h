/********************************************************************
 * @file:activity.h
 * @Author: Jannchie
 * @Date:2017-06-16
 * @Description:The definition of activity.
*********************************************************************/
#ifndef ACTIVITY_H
#define ACTIVITY_H
#define MAX_ACTIVITY_NUM 30
#include<QString>

class Activity
{
public:

    QString name;

    QString date;

    QString time;

    QString place;

    int index;

    Activity();
};

class ActivityNode
{
public:

    Activity activityItem;

    ActivityNode * next;

    ActivityNode(Activity activityItem):

        activityItem(activityItem),next(NULL){}
};





#endif // ACTIVITY_H

