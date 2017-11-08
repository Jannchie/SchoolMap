#include <math.h>
#include "MGraph.h"
inline float MGraph::ordinateCal(int x1, int y1, int x2, int y2)//calculate weight
{
        return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}
inline void MGraph::hasedge(int x, int y)
{
        arcs[x][y].adj = arcs[y][x].adj = ordinateCal(ordinate[x][0], ordinate[x][1], ordinate[y][0], ordinate[y][1]);    //00 - 01
}

//inline void MGraph::setNode(int index,int x,int y,QString information)
//{
//    ordinate[index][0] = x;
//    ordinate[index][1] = y;
//    information[0]+=information;
//}

MGraph::MGraph()//
{

        int vexnum = MAX_VERTEX_NUM;
        for (int i = 0; i<2; i++)
        {
                for (int j = 0; j<MAX_VERTEX_NUM; j++) {

                        ordinate[j][i] = 0;
                }
        }

        for (int j = 0; j<MAX_VERTEX_NUM; j++)
        {
                visited[j] = false;

                dist[j] = NOWAY;

                prev[j] = NOWAY;

                information[j] += QString::fromLocal8Bit("地点简介：\n");
        }

        //00.south gate
        ordinate[0][0] = 250;
        ordinate[0][1] = 888;
        information[0] += QString::fromLocal8Bit("南大门是哈尔滨工业大学（威海）的正门。这是校园最大的门，每天都有无数师生从这里经过，出了校园便是一条美食街，往校园方向走可以到达主楼。");

        //01.songjian
        ordinate[1][0] = 322;
        ordinate[1][1] = 862;
        information[1] += QString::fromLocal8Bit("宋健楼又称宋健研究院，是哈尔滨工业大学（威海）的研究中心。");

        //02.main
        ordinate[2][0] = 383;
        ordinate[2][1] = 616;
        information[2] += QString::fromLocal8Bit("主楼是校园的标志性建筑物之一。这里与图书馆相连。主楼内部有一个大型舞台，每周都会有大型活动在这里举办。");

        //03.library
        ordinate[3][0] = 337;
        ordinate[3][1] = 551;
        information[3] += QString::fromLocal8Bit("图书馆是学生自习的首选地点。这里有一个名为悦思间的学生交流共享空间。");

        //04.M
        ordinate[4][0] = 200;
        ordinate[4][1] = 530;
        information[4] += QString::fromLocal8Bit("M楼又称妹楼，是哈工大学子最熟悉的教学楼之一，大部分课程都在这里展开。");

        //05.G
        ordinate[5][0] = 265;
        ordinate[5][1] = 564;
        information[5] += QString::fromLocal8Bit("G楼又称哥楼，是哈工大学子最熟悉的教学楼之一，大部分课程都在这里展开。");

        //06.N
        ordinate[6][0] = 378;
        ordinate[6][1] = 70;
        information[6] += QString::fromLocal8Bit("N楼在学校的最北端。");

        //07.students serving area
        ordinate[7][0] = 250;
        ordinate[7][1] = 432;
        information[7] += QString::fromLocal8Bit("大学生服务区是学生的休闲场所，这里有许多美食，且提供理发、洗衣、洗澡等服务。");

        //08.playground
        ordinate[8][0] = 161;
        ordinate[8][1] = 596;
        information[8] += QString::fromLocal8Bit("运动场是学生的运动中心，一年一度的运动会在这里展开。这里还拥有校园健身房。");

        //9.clinic
        ordinate[9][0] = 536;
        ordinate[9][1] = 705;
        information[9] += QString::fromLocal8Bit("校园诊所可以处理一些简单的医疗处理。");

        //10.school history library
        ordinate[10][0] = 442;
        ordinate[10][1] = 505;
        information[10] += QString::fromLocal8Bit("校史馆中保存着学校的历史。");

        //11.school new library
        ordinate[11][0] = 403;
        ordinate[11][1] = 17;
        information[11] += QString::fromLocal8Bit("正在建造的校园新图书馆。");

        //12.school activity museum
        ordinate[12][0] = 455;
        ordinate[12][1] = 100;
        information[12] += QString::fromLocal8Bit("大学生活动中心是大学生的活动中心，这里有一个中型舞台。还有羽毛球场、乒乓球场等设施。");

        //13.student canteen
        ordinate[13][0] = 300;
        ordinate[13][1] = 229;
        information[13] += QString::fromLocal8Bit("学子餐厅是校园最大的餐厅。");

        //14.school basketball museum
        ordinate[14][0] = 236;
        ordinate[14][1] = 628;
        information[14] += QString::fromLocal8Bit("旧篮球场是学生们打篮球的绝佳去处。");

        //15.school new basketball museum
        ordinate[15][0] = 108;
        ordinate[15][1] = 542;
        information[15] += QString::fromLocal8Bit("新的篮球场能够提供更好的篮球设施。");

        //16.C/E
        ordinate[16][0] = 482;
        ordinate[16][1] = 735;
        information[16] += QString::fromLocal8Bit("C楼、E楼是学生做实验的场所。");

        //17.foreign student area
        ordinate[17][0] = 526;
        ordinate[17][1] = 654;
        information[17] += QString::fromLocal8Bit("留学生生活居住的地方。");

        //18.peofessor area
        ordinate[18][0] = 83;
        ordinate[18][1] = 737;
        information[18] += QString::fromLocal8Bit("教工住宅区是教工生活的场所。");

        //19.west south gate
        ordinate[19][0] = 15;
        ordinate[19][1] = 539;
        information[19] += QString::fromLocal8Bit("西门是校园面朝西方的大门。");

        //20.high building
        ordinate[20][0] = 115;
        ordinate[20][1] = 447;
        information[20] += QString::fromLocal8Bit("教工住宅高层是教工高层住宅的区域。");

        //21.B
        ordinate[21][0] = 278;
        ordinate[21][1] = 518;
        information[21] += QString::fromLocal8Bit("B楼。");

        //22.xueyuan canteen
        ordinate[22][0] = 342;
        ordinate[22][1] = 403;
        information[22] += QString::fromLocal8Bit("学苑餐厅是校园第二大的餐厅。");

        //23.1-5
        ordinate[23][0] = 321;
        ordinate[23][1] = 343;
        information[23] += QString::fromLocal8Bit("1-5公寓是学生住宅区域。");

        //24.6
        ordinate[24][0] = 335;
        ordinate[24][1] = 290;
        information[24] += QString::fromLocal8Bit("6公寓是学生住宅区域。");

        //25.7
        ordinate[25][0] = 205;
        ordinate[25][1] = 316;
        information[25] += QString::fromLocal8Bit("6公寓是学生住宅区域。");

        //26.8-11
        ordinate[26][0] = 236;
        ordinate[26][1] = 207;
        information[26] += QString::fromLocal8Bit("8-11公寓是学生住宅区域。");

        //27.north
        ordinate[27][0] = 229;
        ordinate[27][1] = 32;
        information[27] += QString::fromLocal8Bit("北门是校园面朝北方的大门。");

        //28.east
        ordinate[28][0] = 577;
        ordinate[28][1] = 722;
        information[27] += QString::fromLocal8Bit("东门是校园面朝东方的大门。");





        //
        for (int i = 0; i < vexnum; i++) {
                for (int j = 0; j < vexnum; j++) {
                        if (i == j)
                                arcs[i][j].adj = 0;
                        else
                                arcs[i][j].adj = NOWAY;
                }
        }


        //29.the first bransh road
        ordinate[29][0] = 269;
        ordinate[29][1] = 836;
        //30.library-main
        ordinate[30][0] = 320;
        ordinate[30][1] = 585;
        //31.main left
        ordinate[31][0] = 295;
        ordinate[31][1] = 583;
        //32.library front
        ordinate[32][0] = 318;
        ordinate[32][1] = 537;
        //33.M-G
        ordinate[33][0] = 230;
        ordinate[33][1] = 548;
        //34.33-up
        ordinate[34][0] = 252;
        ordinate[34][1] = 507;
        //35.street begin
        ordinate[35][0] = 160;
        ordinate[35][1] = 507;
        //36.34-up
        ordinate[36][0] = 290;
        ordinate[36][1] = 428;
        //37.36-up three brunch
        ordinate[37][0] = 345;
        ordinate[37][1] = 422;
        //38.37-32
        ordinate[38][0] = 347;
        ordinate[38][1] = 473;
        //39.36-37 east serve
        ordinate[39][0] = 277;
        ordinate[39][1] = 450;
        //40.22-23
        ordinate[40][0] = 322;
        ordinate[40][1] = 389;
        //41.24-23
        ordinate[41][0] = 342;
        ordinate[41][1] = 337;
        //42.behind 24
        ordinate[42][0] = 367;
        ordinate[42][1] = 272;
        //43.west serve ,connect street start
        ordinate[43][0] = 206;
        ordinate[43][1] = 413;
        //44.in fount of 7 gongyu
        ordinate[44][0] = 254;
        ordinate[44][1] = 319;
        //45.in fount of high building
        ordinate[45][0] = 127;
        ordinate[45][1] = 493;
        //46.west library
        ordinate[46][0] = 355;
        ordinate[46][1] = 519;
        //47.behind main
        ordinate[47][0] = 421;
        ordinate[47][1] = 549;
        //48.come left
        ordinate[48][0] = 189;
        ordinate[48][1] = 794;
        //49.last
        ordinate[49][0] = 353;
        ordinate[49][1] = 119;
        //50.8-11z
        ordinate[50][0] = 211;
        ordinate[50][1] = 259;
        //51.8-11zz
        ordinate[51][0] = 267;
        ordinate[51][1] = 293;
        //52.in front of west south door
        ordinate[52][0] = 36;
        ordinate[52][1] = 544;
        //53.45-52
        ordinate[53][0] = 70;
        ordinate[53][1] = 500;
        //54.xueyuanlu zhong
        ordinate[54][0] = 231;
        ordinate[54][1] = 714;
        //55.
        ordinate[55][0] = 187;
        ordinate[55][1] = 792;


        //
        hasedge(45, 52);
        hasedge(52, 15);
        hasedge(52, 19);
        hasedge(50, 51);
        hasedge(51, 13);
        hasedge(51, 44);
        hasedge(50, 26);
        hasedge(29, 0);
        hasedge(29, 1);
        hasedge(29, 2);
        hasedge(2, 30);
        hasedge(30, 3);
        hasedge(31, 2);
        hasedge(32, 3);
        hasedge(31, 32);
        hasedge(5, 31);
        hasedge(5, 33);
        hasedge(4, 33);
        hasedge(34, 33);
        hasedge(34, 21);
        hasedge(21, 32);
        hasedge(35, 4);
        hasedge(36, 34);
        hasedge(34, 39);
        hasedge(36, 39);
        hasedge(36, 37);
        hasedge(38, 37);
        hasedge(38, 32);
        hasedge(23, 40);
        hasedge(40, 22);
        hasedge(24, 41);
        hasedge(23, 41);
        hasedge(22, 37);
        hasedge(24, 42);
        hasedge(39, 7);
        hasedge(43, 7);
        hasedge(43, 35);
        hasedge(43, 44);
        hasedge(25, 44);
        hasedge(2, 9);
        hasedge(17, 9);
        hasedge(45, 35);
        hasedge(45, 20);
        hasedge(33, 8);
        hasedge(3, 46);
        hasedge(47, 46);
        hasedge(47, 10);
        hasedge(14, 5);
        hasedge(14, 8);
        hasedge(15, 8);
        hasedge(15, 35);
        hasedge(15, 45);
        hasedge(13, 42);
        hasedge(13, 44);
        hasedge(13, 49);
        hasedge(49, 6);
        hasedge(12, 6);
        hasedge(16, 9);
        hasedge(28, 9);
        hasedge(6, 11);
        hasedge(48, 18);
        hasedge(55, 29);
        hasedge(55, 48);
        hasedge(49, 27);
        hasedge(55, 54);
        hasedge(31, 54);
        hasedge(18, 8);
        hasedge(35, 8);
        hasedge(44, 24);
        hasedge(44, 23);
}
