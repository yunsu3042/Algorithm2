////
////  C++ hackerearth Words and Trees.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 3. 12..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//
//#include <iostream>
//
//using namespace std;
//
//#define MAX 1000001
//
//
//int parent[MAX];
//int rank1[MAX];
//char op[MAX][2];
//int A[MAX];
//int B[MAX];
//bool flag = false;
//
//void initialize()
//{
//    for(int i = 0; i < MAX; i++)
//    {
//        parent[i] = i;
//        rank1[i] = 0;
//        op[i][0] = '\0';
//        op[i][1] = '\0';
//    }
//    flag = false;
//    
//}
//
//int find(int x)
//{
//    if(parent[x] == x)
//        return x;
//    else
//    {
//        parent[x] = find(parent[x]);
//        return parent[x];
//    }
//}
//
//void unionSet(int x, int y)
//{
//    int xRoot = find(x);
//    int yRoot = find(y);
//    if(rank1[xRoot] < rank1[yRoot])
//    {
//        parent[xRoot] = yRoot;
//    }
//    else if(rank1[xRoot] > rank1[yRoot])
//    {
//        parent[yRoot] = xRoot;
//    }
//    else
//    {
//        parent[xRoot] = yRoot;
//        rank1[xRoot]  += 1;
//    }
//}
//
//
//int main()
//{
//    int T, N, K;
//    int x, y;
//    ios_base::sync_with_stdio(false);
//    
//    cin >> T;
//    while(T--)
//    {
//        initialize();
//        cin >> N >> K;
//        for(int i = 0; i < K; i++)
//        {
//            cin >> x >> op[i] >> y;
//            A[i] = x;
//            B[i] = y;
//        }
//        
//        for(int i = 0; i < MAX; i++)
//        {
//            if(op[i][0] == '=')
//            {
//                unionSet(A[i], B[i]);
//            }
//        }
//        for(int i = 0; i < MAX; i++)
//        {
//            if(op[i][0] == '!')
//            {
//                if(find(A[i]) == find(B[i]))
//                {
//                    flag = true;
//                    break;
//                }
//            }
//        }
//        
//        if(flag == true)
//        {
//            cout << "NO\n";
//        }
//        else
//        {
//            cout << "YES\n";
//        }
//        
//    }
//    
//    
//    
//    
//    
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
