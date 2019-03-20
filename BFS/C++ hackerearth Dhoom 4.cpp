////
////  C++ hackerearth BFS Dhoom 4.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 3. 6..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <queue>
//
//
//#define SIZE 1002
//#define MX 100001
//#define MOD 100000
//#define pii pair<long long int, long long int>
//
//
//
//using namespace std;
//
//long long int fk = 0;
//long long int t = 0;
//long long int N = 0;
//long long int keys[SIZE];
//queue<pii> q;
//int vis[MX] = {0, };
//pii x;
//long long int k = 0;
//bool flag = false;
//
//int main()
//{
//    scanf("%lld %lld %lld", &fk, &t, &N);
//    for(long long int i = 0; i < N; i++)
//    {
//        scanf("%lldd", &keys[i]);
//    }
//    
//    
//    
//    q.push(pii{fk, 0});
//    while(!q.empty())
//    {
//        x = q.front();
//        q.pop();
//        if(x.first == t)
//        {
//            flag =true;
//            break;
//        }
//        for(long long int i = 0; i < N; i++)
//        {
//            k = keys[i];
//            if(vis[(x.first * k) % MOD] == 0)
//            {
//                q.push(pii{(x.first * k) % MOD, x.second + 1});
//                vis[(x.first * k) % MOD] = 1;
//            }
//        }
//    }
//
//    if(flag == true)
//    {
//        printf("%lld\n", x.second);
//    }
//    else
//    {
//        printf("-1\n");
//    }
//
//    
//    
//}
//
