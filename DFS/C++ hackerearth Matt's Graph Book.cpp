////
////  C++ hackerearth Matt's Graph Book.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 3. 13..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//using namespace std;
//#define MAX 100001
//vector<int> graph[MAX];
//int visit[MAX];
//stack<int> st;
//
//void initialize()
//{
//    for(int i = 0; i < MAX; i++)
//    {
//        graph[i].clear();
//        visit[i] = 0;
//    }
//}
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    int n, k;
//    int a, b;
//    int remove;
//    bool flag = true;
//    vector<int> :: iterator iter;
//    cin >> n >> k;
//    for(int i = 0; i < k; i++)
//    {
//        cin >> a >> b;
//        graph[a].push_back(b);
//        graph[b].push_back(a);
//    }
//    cin >> remove;
//    for(int i: graph[remove])
//    {
//        iter = find(graph[i].begin(), graph[i].end(), remove);
//        graph[i].erase(iter);
//    }
//    
//    st.push(0);
//    visit[0] = 1;
//    
//    while(!st.empty())
//    {
//        int x = st.top();
//        st.pop();
//        for(int k: graph[x])
//        {
//            if(visit[k] == 1) continue;
//            st.push(k);
//            visit[k] = 1;
//        }
//    }
//    
//    for(int i = 0; i < n; i++)
//    {
//        if(i == remove) continue;
//        else if(visit[i] == 0)
//        {
//            flag = false;
//            break;
//        }
//    }
//    
//    
//    if(flag == true)
//    {
//        cout << "Connected\n";
//    }
//    else
//    {
//        cout << "Not Connected\n";
//    }
//}
//
