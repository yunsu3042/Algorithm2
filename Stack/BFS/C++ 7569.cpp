////
////  C++ 7569.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 2. 22..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//#define SIZE 101
//#define MAX 1000001
//int row = -1;
//int col = -1;
//int h = -1;
//int box[SIZE][SIZE][SIZE];
////int row = 100;
////int col = 100;
////int h = 100;
////int box[SIZE][SIZE][SIZE] = {1,0};
//int days[SIZE][SIZE][SIZE];
//int move_num = 6;
//int move_x[6] = {1, -1, 0, 0, 0, 0};
//int move_y[6] = {0, 0, 1, -1, 0, 0};
//int move_z[6] = {0, 0, 0, 0, 1, -1};
//int queue[MAX][3];
//int front = 0;
//int rear = 0;
//int x = -1;
//int y = -1;
//int z = -1;
//int day = 0;
//int check(int x, int y, int z, int i);
//int day_max();
//
//void input()
//{
//    scanf("%d", &col);
//    scanf("%d", &row);
//    scanf("%d", &h);
//    
//    for(int z = 0; z < h; z++)
//    {
//        for(int x = 0; x < row; x++)
//        {
//            for(int y = 0; y < col; y++)
//            {
//                scanf("%d", &box[z][x][y]);
//                if(box[z][x][y] == 1)
//                {
//                    queue[rear][0] = x;
//                    queue[rear][1] = y;
//                    queue[rear][2] = z;
//                    rear++;
//                }
//            }
//        }
//    }
//}
//
//void print()
//{
//    for(int z = 0; z < h; z++)
//    {
//        for(int x = 0; x < row; x++)
//        {
//            for(int y = 0; y < col; y++)
//            {
//                cout << box[z][x][y] << " ";
//            }
//            cout << "\n";
//        }
//        cout << "\n\n";
//    }
//    
//}
//
//int main()
//{
//    input();
//    
////    for(int z = 0; z < h; z++)
////    {
////        for(int x = 0; x < row; x++)
////        {
////            for(int y = 0; y < col; y++)
////            {
////                if(box[z][x][y] == 1)
////                {
////                    queue[rear][0] = x;
////                    queue[rear][1] = y;
////                    queue[rear][2] = z;
////                    rear++;
////                }
////            }
////        }
////    }
////
//    
//    
//    for(front = 0; front < rear ; front++)
//    {
//        x = queue[front][0];
//        y = queue[front][1];
//        z = queue[front][2];
//        for(int i = 0; i < move_num; i++)
//        {
//            if(check(x, y, z, i) == 1 && box[z + move_z[i] ][x + move_x[i] ][y + move_y[i] ] == 0)
//            {
//                queue[rear][0] = x + move_x[i];
//                queue[rear][1] = y + move_y[i];
//                queue[rear][2] = z + move_z[i];
//                rear++;
//                box[z + move_z[i] ][x + move_x[i] ][y + move_y[i] ] = 1;
//                days[z + move_z[i] ][x + move_x[i] ][y + move_y[i] ] = days[z][x][y] + 1;
//            }
//        }
//    }
//
//    
//    day = day_max();
//    cout << day << '\n';
//}
//
//int day_max()
//{
//    for(int k = 0; k < h; k++)
//    {
//        for(int x = 0; x < row; x++)
//        {
//            for(int y = 0; y < col; y++)
//            {
//                if(box[k][x][y] == 0)
//                {
//                    day = -1;
//                    break;
//                }
//                
//                if(day < days[k][x][y])
//                {
//                    day = days[k][x][y];
//                }
//            }
//        }
//    }
//    return day;
//}
//
//int check(int x, int y, int z, int i)
//{
//    int x_ran = x + move_x[i];
//    int y_ran = y + move_y[i];
//    int z_ran = z + move_z[i];
//    if(x_ran < 0 || x_ran >= row || y_ran < 0 || y_ran >= col || z_ran < 0 || z_ran >= h)
//        return 0;
//    return 1;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
