////
////  5052.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 2. 13..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <string>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//
//using namespace std;
//
//bool is_valid(int n)
//{
//    vector<string> v;
//    string s;
//    while(n--)
//    {
//        cin >> s;
//        v.push_back(s);
//    }
//    sort(v.begin(), v.end());
//
//    for(int i = 0; i < v.size() - 1; i++)
//    {
//        int a = min(v[i].length(), v[i+1].length());
//        int k = v[i].compare(0, a, v[i + 1],0, a);
//        if(k == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//
//
//
//int main()
//{
//    int t;
//    int n;
//    vector<int> ans;
//    cin >> t;
//    for(int i = 0; i < t; i ++)
//    {
//        cin >> n;
//        if(is_valid(n))
//        {
//            ans.push_back(1);
//        }
//        else
//        {
//            ans.push_back(0);
//        }
//
//    }
//    for(int x: ans)
//    {
//        if(x == 1)
//        {
//            cout << "YES\n";
//        }
//        else cout << "NO\n";
//    }
//}
//
