//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//#define SIZE 1001
//#define MAX 1000001
//
//int row = 0;
//int col = 0;
//int queue[MAX][2];
//int day = 0;
//int days[SIZE][SIZE] = {0,};
//int map[SIZE][SIZE];
//int x = 0;
//int y = 0;
//
//int move_x[] = {1, -1, 0, 0};
//int move_y[] = {0, 0, 1, -1};
//
//int rear = 0;
//int front = 0;
//
//void enque(int x, int y)
//{
//    queue[rear][0] = x;
//    queue[rear][1] = y;
//    rear++;
//}
//
//int check(int a, int b)
//{
//    if(a < 0 || a >= row || b < 0 || b >= col)
//        return 0;
//    return 1;
//}
//
//int main()
//{
//
//    
//    scanf("%d", &col);
//    scanf("%d", &row);
//    
//    
//    
////    for(int i = 0; i < row; i++)
////    {
////        for(int j = 0; j < col; j++)
////        {
////            cout << map[i][j]<< " ";
////        }
////        cout << "\n";
////    }
//    
//    
//
//    for(int i = 0; i < row; i++)
//    {
//        for(int j = 0; j < col; j++)
//        {
//            scanf("%d", &map[i][j]);
//            if(map[i][j] == 1)
//            {
//                queue[rear][0] = i;
//                queue[rear][1] = j;
//                rear++;
//            }
//        }
//    }
//    
////    for(int i = 0; i < rear ; i++)
////    {
////        x = queue[i][0];
////        y = queue[i][1];
////        cout << "x : "  << x << "y :"<< y << '\n';
////    }
//
//
//    for(front = 0; front < rear; front++)
//    {
//        x = queue[front][0];
//        y = queue[front][1];
//        
//        for(int i = 0; i < 4; i++)
//        {
//            if(map[x+move_x[i]][y+move_y[i]] == 0 && check(x+move_x[i], y+move_y[i]) ==1)
//            {
//                enque(x + move_x[i], y + move_y[i]);
//                days[x + move_x[i]][y + move_y[i]] = days[x][y] + 1;
//                map[x +move_x[i]][y + move_y[i]] = 1;
//            }
//        }
////        for(int i = 0; i < row; i++)
////        {
////            for(int j = 0; j < col; j++)
////            {
////                cout << map[i][j]<< " ";
////            }
////            cout << "\n";
////        }
////        cout << '\n';
//
//    }
//
//    int flag = 1;
//    for(int i = 0; i < row; i++)
//    {
//        for(int j = 0; j < col; j++)
//        {
//            if(map[i][j] == 0)
//            {
//                flag = -1;
//                break;
//            }
//            if(day < days[i][j])
//            {
//                day = days[i][j];
//            }
//        }
//    }
//    if(flag == -1)
//    {
//        cout << "-1\n";
//    }
//    else if(flag == 1)
//    {
//        cout << day << '\n';
//
//    }
//    
////    for(int i = 0; i < row; i++)
////    {
////        for(int j = 0; j < col; j++)
////        {
////            cout << map[i][j]<< " ";
////        }
////        cout << "\n";
////    }
////
////    cout << rear << '\n';
//    
//
//    
//}

