////
////  C++ hackerearth prison break3- recur.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 3. 9..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <memory.h>
//using namespace std;
//int arr[25][25];
//int vis[25][25];
//int N;
//int T;
//int ans = 0;
//int dx[] = {-1, 1, 0 ,0};
//int dy[] = {0, 0, -1, 1};
//
//void initialize()
//{
//    memset(vis, 0, sizeof(vis));
//}
//
//void func(int x, int y)
//{
//    if(x == N - 1 && y == N - 1)
//    {
//        ans++;
//        return;
//    }
//    
//    vis[x][y] = 1;
//    for(int i = 0; i < 4; i++)
//    {
//        int a = x + dx[i];
//        int b = y + dy[i];
//        if(a < 0 || a >= N || b < 0 || b >= N) continue;
//        if(vis[a][b] == 1 || arr[a][b] == 1) continue;
//        func(a,b);
//        vis[a][b] = false;
//    }
//    
//}
//
//int main()
//{
//    cin >> T;
//    while(T--)
//    {
//        ans = 0;
//        cin >> N;
//        for(int i = 0; i < N; i ++)
//        {
//            for(int j = 0; j < N; j++)
//            {
//                cin >> arr[i][j];
//            }
//        }
//        initialize();
//        func(0, 0);
//        cout << ans << "\n";
//        
//    }
//}

