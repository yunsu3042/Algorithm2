////
////  2606.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 2. 26..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <stack>
//using namespace std;
//
//#define MAX 101
//
//vector<int> graph[MAX];
//bool visit[MAX];
//stack<int> q;
//int N;
//int M;
//
//int a, b;
//int cnt = 0;
//int nxt, cur;
//
//
//void print()
//{
//    for(int i = 0; i< M; i++)
//    {
//        cout << i << " : ";
//        for(int j = 0; j < graph[i].size(); j++)
//        {
////            cout << graph[i][j] << " ";
//        }
////        cout << '\n';
//    }
//}
//
//
//int main()
//{
//    scanf("%d", &N);
//    scanf("%d", &M);
//
//    for(int i =0; i < M; i++)
//    {
//        scanf("%d", &a);
//        scanf("%d", &b);
//
//        graph[a].push_back(b);
//        graph[b].push_back(a);
//    }
//
////    print();
//
//    q.push(1);
//
//    while(!q.empty())
//    {
//        cur = q.top();
//        q.pop();
//        if(visit[cur] == 1) continue;
//        cnt++;
//        visit[cur] = 1;
//        for(int i = 0; i < graph[cur].size(); i++)
//        {
//            nxt = graph[cur][i];
//            q.push(nxt);
//        }
//    }
//
//    cout << cnt - 1<< "\n";
//
//
//    return 1;
//}
//
//
//
//
//
