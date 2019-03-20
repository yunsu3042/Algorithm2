////
////  graph.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 3. 2..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//#include<iostream>
//#include<vector>
////#include<map>
//#include<algorithm>
//#include<functional>
//
//using namespace std;
//#define MAX 1002
//#define pii pair<int, int>
//int main()
//{
//    int N, M, K;
//    int val[MAX];
//    vector<pair<int, int>> graph[MAX];
//    int x, y;
//    cin >> N >> M >> K;
//    
//    for(int i = 1; i < N + 1; i++)
//    {
//        cin >> val[i];
//    }
//    
//    for(int i = 1; i < M + 1; i++)
//    {
//        cin >> x >> y;
//        graph[x].push_back(pii{val[y], y});
//        graph[y].push_back(pii{val[x], x});
//    }
//    
//    
//    for(int i = 1; i < N + 1; i++)
//    {
//        sort(graph[i].begin(), graph[i].end(), greater<pair<int, int>>());
//        
//        if(K - 1 < graph[i].size())
//        {
//            cout << graph[i][K - 1].second << "\n";
//        }
//        else
//        {
//            cout << -1 << "\n";
//        }
////
////        for(int j = 0; j < graph[i].size(); j++)
////        {
////            cout << graph[i][j].second << " ";
////        }
////        cout << "\n";
//    }
//    
//    cout << "끝";
//    
//}

