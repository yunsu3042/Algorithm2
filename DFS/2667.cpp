////
////  2667.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 2. 26..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <stack>
//#include <vector>
//#include <string>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define MAX 26
//#define pii pair<int, int>
//
//int check(int x, int y);
//
//char map[MAX][MAX];
//int N;
//int x, y;
//char c;
//int mv[] = {1, -1, 0, 0};
//stack<pii> s;
//pii cur;
//pii nxt;
//int visit[MAX][MAX];
//vector<int> counter ;
//int cnt;
//
//int main()
//{
//    scanf("%d", &N);
//    for(int i = 0; i < N; i++)
//    {
//        scanf("%s", map[i]);
//    }
//
//    for(int i = 0; i < N; i++)
//    {
//        for(int j = 0; j < N; j++)
//        {
//            if(visit[i][j] == 1) continue;
//
//            s.push(pii{i, j});
//
//            while(!s.empty())
//            {
//                cur = s.top();
//                s.pop();
//                //        if(visit[cur.first][cur.second] == 1) continue;
//
//                //                cout << "(" << cur.first << ", " << cur.second << ")";
//                for(int k = 0; k < 4; k++)
//                {
//                    x = cur.first + mv[k];
//                    y = cur.second + mv[3 - k];
//                    if(check(x, y) == 1 && map[x][y] == '1')
//                    {
//                        nxt = pii{x,y};
//                        s.push(nxt);
//                        visit[x][y] = 1;
//                        cnt++;
//                    }
//                }
//            }
//            if(cnt !=0)
//                counter.push_back(cnt);
//            cnt = 0;
//
//        }
//
//    }
//    cout << counter.size() << '\n';
//    sort(counter.begin(), counter.end());
//    for(int x: counter)
//    {
//        cout << x << '\n';
//    }
//
//}
//
//int check(int x, int y)
//{
//    if(x < 0 || x >= N || y < 0 || y >= N || visit[x][y] == 1)
//        return 0;
//    return 1;
//}
//
//
