
//
//  hackerearth Monk and Graph Problem.cpp
//  C - Algorithms
//
//  Created by yunsu Jung on 2018. 3. 14..
//  Copyright © 2018년 yunsu Jung. All rights reserved.
//

#include <iostream>
#include <stack>
#include <vector>
using namespace std;
#define MAX 2000001
#define fil for(int i = 0; i < l; i++)
//vector<int> grp[MAX];
//int visit[MAX];
//stack<int> st;
//int cnt = 0;
//int big_cnt = 0;
//int l = 0;



void initialize(int visit[], int n)
{
    int l = 0;
    l = n + 1;
    fil
    {
        visit[i] = 0;
    }
}

void dfs(int visit[], vector<int> grp[], int n, int &cnt, int& big_cnt)
{
    int topNd;
    int nd;
    stack<int> st;
    

    for(int j = 1; j <= n; j++)
    {
        if(visit[j] == 1) continue;
        st.push(j);
        while(!st.empty())
        {
            topNd = st.top();
            st.pop();
            if(visit[topNd] == 1) continue;
            for(int i = 0; i < grp[topNd].size(); i++ )
            {
                
                nd = grp[topNd][i];
                if(visit[nd] == 1) continue;
//                if(visit[nd] == 1)continue;
//                visit[nd] = 1;
                st.push(nd);
                cnt++;
            }
            visit[topNd] = 1;

        }
//        cout << cnt << "\n";
        if(cnt > big_cnt)
        {
            big_cnt = cnt;
        }
        cnt = 0;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int cnt = 0;
    int big_cnt = 0;
    int n, m;
    int x, y;
    cin >> n >> m;
    vector<int> grp[n + 1];
    int visit[n + 1];
    initialize(visit, n);
    while(m--)
    {
        cin >> x >> y;
        if(x != y)
        {
            grp[x].push_back(y);
            grp[y].push_back(x);
        }
        else
        {
            grp[x].push_back(y);
        }
    }
    
    dfs(visit, grp, n, cnt, big_cnt);
    
    cout << big_cnt << "\n";

    
}

