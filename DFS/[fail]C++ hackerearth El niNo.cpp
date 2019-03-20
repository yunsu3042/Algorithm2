////
////  C++ hackerearth El niNo.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 3. 13..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <iostream>
//#include <set>
//#include <algorithm>
//#include <stack>
//#include <vector>
//#define MAX 200001
//#define ll long long
//
//using namespace std;
//
//stack<ll> st;
//ll possDis[MAX];
//
//ll N, M;
//
//void dfs(vector<ll> graph[], ll dis[], ll visit[])
//{
//    st.push(1);
//    while(!st.empty())
//    {
//        ll a = st.top();
//        st.pop();
//        visit[a] = 1;
//        for(ll i = 0; i < graph[a].size(); i++)
//        {
//            ll son = graph[a][i];
//            if(visit[son] != 1)
//            {
//                dis[son] = dis[a] + 1;
//                st.push(son);
//            }
//
//        }
//    }
//}
//
//void initialize()
//{
//    for(ll i = 0; i < MAX; i++)
//    {
//        possDis[i] = 0;
//    }
//}
//
//int main()
//{
//    initialize();
//    ll x;
//    ll cnt = 0;
//    cin >> N >> M;
//    vector<ll> graph[N + 1];
//    ll A[M];
//    ll dis[N + 1];
//    ll visit[N + 1];
//
//    for(ll i = 1; i < N + 1; i++)
//    {
//        visit[i] = 0;
//        dis[i] = 0;
//    }
//
//
//    for(ll i = 1; i < M + 1; i++)
//    {
//        cin >> x;
//        A[i] = x;
//    }
//    for(ll i = 1; i < N ; i++)
//    {
//        cin >> x;
//        graph[x].push_back(i + 1);
//    }
//
//
//    dfs(graph, dis, visit);
//
//
//
//    for(ll i = 1; i < N + 1; i++)
//    {
//        possDis[dis[i]] = 1;
//    }
//
//    for(ll i = N; i > 1; i--)
//    {
//        possDis[i - 1] += possDis[i];
//    }
//
//
//    for(ll i = 1; i < M + 1; i++)
//    {
//        cnt += possDis[A[i]];
//    }
//
//
//
//
//    cout << cnt << "\n";
//
//
//
//
//
//
//
//}

