////
////  C++ 7576.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 2. 19..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <map>
//#include <vector>
//using namespace std;
//
//typedef pair<int, int> pos;
//
//void step(int v[][1000], int row, int col, pos p, vector<pair<int, int>>& q)
//{
//    if(v[p.first][p.second] == 1)
//    {
//        if(p.first + 1 < row && v[p.first + 1][p.second] == 0)
//        {
////            v[p.first + 1][p.second] = 1;
//            q.push_back(pos{p.first + 1, p.second});
//        }
//        if(p.first - 1 >= 0 && v[p.first - 1][p.second] == 0)
//        {
////            v[p.first - 1][p.second] = 1;
//            q.push_back(pos{p.first - 1, p.second});
//        }
//        if(p.second + 1 < col && v[p.first][p.second + 1] == 0)
//        {
////            v[p.first][p.second + 1] = 1;
//            q.push_back(pos{p.first, p.second + 1});
//        }
//        if(p.second - 1 >= 0 && v[p.first][p.second - 1] == 0)
//        {
////            v[p.first][p.second - 1] = 1;
//            q.push_back(pos{p.first, p.second - 1});
//        }
//    }
//    return ;
//}
//
//void maturate(int v[][1000], int row, int col, vector<pair<int, int>>& q)
//{
//    for(pair<int, int> p: q)
//    {
//        v[p.first][p.second] = 1;
//    }
//    q.clear();
//}
//
//int find_tomato(int v[][1000], int row, int col)
//{
//    int count = 0;
//    for(int r =0; r < row; r++)
//    {
//        for(int c = 0; c < col; c++)
//        {
//            if(v[r][c] == 0)
//                count++;
//        }
//    }
//    return count;
//}
//
//
//void print(int v[][1000], int row, int col)
//{
//    for(int r =0; r < row; r++)
//    {
//        for(int c = 0; c < col; c++)
//        {
//            printf("%d ", v[r][c]);
//        }
//        printf("\n");
//    }
//    printf("\n\n");
//}
//
//void vector_input(int v[][1000], int row, int col)
//{
//    for(int r = 0; r < row; r++)
//    {
//        for(int c = 0; c < col; c++)
//        {
//            scanf("%d", &v[r][c]);
//        }
//    }
//}
//
//int main()
//{
//    int row = 0;
//    int col = 0;
//    int count = 0;
//    int days = 0;
//    vector<pair<int, int>> q;
//    int v[1000][1000] = {0,};
//    
//    scanf("%d", &col);
//    scanf("%d", &row);
//    
//    vector_input(v, row, col);
//    print(v, row, col);
//    
//
//    while(1)
//    {
//        if(days == 0 && find_tomato(v, row, col) == 0)
//        {
//            cout << "이미 토마토가 익어있습니다.\n";
//            cout << 0;
//            print(v, row, col);
//            break;
//        }
//        count = find_tomato(v, row, col);
//
//        for(int r = 0; r < row; r++)
//        {
//            for(int c = 0; c < col; c++)
//            {
//                step(v, row, col, pos{r, c}, q);
//            }
//        }
//        maturate(v, row, col, q);
//        days++;
//
//        if(count == find_tomato(v, row, col))
//        {
//            if(count == 0)
//            {
//                cout << "토마토가 다 익었습니다. \n";
//                cout << days - 1<< '\n';
//                print(v, row, col);
//                break;
//            }
//            else
//            {
//                cout << "안 익은 토마토가 있습니다." << '\n';
//                cout << -1 << '\n';
//                print(v, row, col);
//                break;
//            }
//        }
//
//    }
//
//    
//}
//
//
