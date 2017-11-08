/********************************************************************
 * @file:activitylinklist.h
 * @Author: Jannchie
 * @Date:2017-06-16
 * @Description:The definition of activitylinklist.
*********************************************************************/
#ifndef ACTIVITYLINKLIST_H
#define ACTIVITYLINKLIST_H
#include "activity.h"

class ActivityLinkList{

public:

    ActivityLinkList();

    int readfile();

    int writefile(MainWindow *);

    void insert(Activity activityItem);//insert

    void deleteActivity(ActivityNode *);//delete

    ActivityNode* search(QString name);//search

    void taverse();//traverse

    void readInTable(Ui::MainWindow *ui);

    ActivityNode * head;

    int itemNumber = 0;
};

#endif // ACTIVITYLINKLIST_H
