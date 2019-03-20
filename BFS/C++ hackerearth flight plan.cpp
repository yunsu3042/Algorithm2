////
////  C++ hackerearth bfs pb1.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 3. 5..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//#define MAX 1002
//using namespace std;
//
//vector<int> graph[MAX];
//int pre[MAX] = {0, };
//queue<int> q;
//int visit[MAX] = {0, };
//int flag = false;
//vector<int> aws;
//
//
//
//int main()
//{
//    int N = 0;
//    int M = 0;
//    int T = 0;
//    int C = 0;
//    int city1 = 0;
//    int city2 = 0;
//    int x = 0;
//    int y = 0;
//    int k = 0;
//    int node = 0;
//    
//    
//    scanf("%d %d %d %d", &N, &M, &T, &C);
//    for(int i = 0; i < M; i++)
//    {
//        scanf("%d %d", &city1, &city2);
//        graph[city1].push_back(city2);
//        graph[city2].push_back(city1);
//    }
//    scanf("%d %d", &x, &y);
//    for(int i = 1; i < N + 1; i++)
//    {
//        sort(graph[i].begin(), graph[i].end());
//    }
//    
//    q.push(x);
//    visit[x] = 1;
//    while(!q.empty())
//    {
//        if(flag == true) break;
//        k = q.front();
//        q.pop();
//        
//        for(int i = 0; i < graph[k].size(); i++)
//        {
//            node = graph[k][i];
//            if(visit[node] == 1) continue;
//            visit[node] = 1;
//            q.push(node);
//            pre[node] = k;
//            if(node == y)
//            {
//                flag = true;
//                break;
//            }
//        }
//    }
//
//    int tmp = y;
//    aws.push_back(tmp);
//    if(flag == true)
//    {
//        while(pre[tmp])
//        {
//            tmp = pre[tmp];
//            aws.push_back(tmp);
//        }
//        reverse(aws.begin(), aws.end());
//    }
//
//    printf("%d\n", static_cast<int>(aws.size()));
//    for(int i: aws)
//    {
//        printf("%d ", i);
//    }
//
//}

