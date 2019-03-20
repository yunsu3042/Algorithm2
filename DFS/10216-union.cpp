////
////  10216-union.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 2. 27..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <vector>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <stack>
//#include <set>
//#define SIZE 3001
//#define MAX 5001
//#define pii pair<int, int>
//#define f first
//#define s second
//
//using namespace std;
//int T;
//int N;
////pii v[SIZE];
//
//int R[SIZE];
//int uni[SIZE] = {0, };
//int cnt = 0;
//int check[SIZE];
//vector<int> counter;
//int power(int x);
//
//int main()
//{
//
//    
//
//    int x = 0;
//    int y = 0;
//    int r = 0;
//    scanf("%d", &T);
//
//    for(int q = 0; q < T; q++)
//    {
//        scanf("%d", &N);
//        for(int i = 0; i < N; i++)
//        {
//            uni[i] = i + 1;
//        }
//        pii v[SIZE];
//        int R[SIZE];
//        memset(check, 0, sizeof(int) * N);
//        cnt = 0;
//        for(int i = 0; i < N; i++)
//        {
//            scanf("%d", &x);
//            scanf("%d", &y);
//            scanf("%d", &r);
//            v[i] = pii{x, y};
//            R[i] = r;
//        }
//        for(int i = 0; i < N; i++)
//        {
//            for(int j = i + 1; j < N; j++)
//            {
//                pii p1 = v[i];
//                pii p2 = v[j];
//                if(power(p1.f - p2.f) + power(p1.s - p2.s) <= power(R[i] + R[j]))
//                {
//                    uni[j] = uni[i];
//                }
//            }
//        }
//        for(int z = 0; z < N; z++)
//        {
//            if(check[uni[z]] != 1)
//            {
//                check[uni[z]] = 1;
//                cnt++;
//            }
//        }
//        counter.push_back(cnt);
//    }
//
//    for(int cnt: counter)
//    {
//        printf("%d\n", cnt);
//    }
//}
//int power(int x)
//{
//    return x * x;
//}
//
