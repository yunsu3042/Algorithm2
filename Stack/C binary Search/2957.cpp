////
////  biary_search.c
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 2. 13..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <map>
//#include <vector>
//#include <unordered_map>
//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//
//void insert(map<int, long long int>& v, vector<long long int>& sum, int x)
//{
//    map<int, long long int>:: iterator lower_bound;
//    map<int, long long int>:: iterator upper_bound;
//    
//    
//    
//    lower_bound = --v.lower_bound(x);
//    upper_bound = v.upper_bound(x);
//    long long int count = 0;
//    count = max(lower_bound -> second, upper_bound -> second) + 1;
//    v.insert(pair<int, long long int>{x, count});
//    if(sum.size() > 1)
//    {
//        sum.push_back(sum[sum.size() - 1] + count);
//    }
//    else
//    {
//        sum.push_back(count);
//    }
//    return ;
//}
//
//
//int main()
//{
//    map<int, long long int> tree;
//    tree.insert(pair<int, long long int>{0, -1});
//    tree.insert(pair<int, long long int>{300001, -1});
//    int n;
//    int m;
//    vector<long long int>sum;
//    scanf("%d", &n);
//    while(n--)
//    {
//        scanf("%d", &m);
//        insert(tree, sum, m);
//    }
//    
//    for(long long int x: sum)
//    {
//        printf("%lld\n", x);
//    }
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
