////
////  C++ hackerearth happy vertices.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 3. 7..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <vector>
//#include <stack>
//#include <memory.h>
//#include <iostream>
//
//#define MAX 100002
//#define pii pair<int, int>
//#define vi vector<int>
//using namespace std;
//
//
//stack<int> s;
//vi ms_vertices;
//int N, M;
//vi graph[MAX];
//int visit[MAX] = {0, };
//
//int main()
//{
//    int x, y;
//    int top;
//    int linked;
//    int master = MAX;
//    int cnt = 0;
//
//    std::ios::sync_with_stdio(false);
//    
//    cin >> N >> M;
//
//    for(int j = 0; j < M; j++)
//    {
//        cin >> x >> y;
//        graph[x].push_back(y);
//        graph[y].push_back(x);
//    }
//    
////    for(int i = 1; i < N + 1; i++)
////    {
////        cout << "graph[" << i << "] : ";
////        for(int j = 0; j < graph[i].size(); j++)
////        {
////            cout << graph[i][j] << " ";
////        }
////        cout << "\n";
////    }
//    
//
//    for(int i = 1; i < N + 1; i++)
//    {
//        if(visit[i] == 1) continue;
//        master = MAX;
//        s.push(i);
//        visit[i] = 1;
//        while(!s.empty())
//        {
//            top = s.top();
//            s.pop();
//            if(master > top)
//            {
//                master = top;
//            }
//            for(int j = 0; j < graph[top].size(); j++)
//            {
//                linked = graph[top][j];
//                if(visit[linked] == 1) continue;
//                visit[linked] = 1;
//                s.push(linked);
//                if(master > linked)
//                {
//                    master = linked;
//                }
//            }
//        }
//        ms_vertices.push_back(master);
//
//    }
////    cout << "mater vertice : ";
////
////    for(int master: ms_vertices)
////    {
////        cout << master << "\n";
////    }
//
//    memset(visit, 0, sizeof(int) * MAX);
//
//
//    for(int master: ms_vertices)
//    {
//        if(visit[master] == 1) continue;
//        s.push(master);
//        visit[master] = 1;
//        while(!s.empty())
//        {
//            top = s.top();
//            s.pop();
//
//            for(int j = 0; j < graph[top].size(); j++)
//            {
//                linked = graph[top][j];
//                if(visit[linked] == 1) continue;
//                visit[linked] = 1;
//                s.push(linked);
//                if(graph[top].size() < graph[linked].size())
//                {
//                    cnt++;
//                }
//            }
//        }
//    }
//    
//    cout << cnt << "\n";
//}
//
//
//
//
//
//
//
//
