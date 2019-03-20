////
////  C++ hackerearth prison break.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 3. 8..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <stack>
//using namespace std;
//
//#define pii pair<int, int>
//#define f first
//#define s second
//#define SIZE 5
//
//vector<pii> graph[SIZE][SIZE];
////int visit[SIZE][SIZE];
////stack<pii> all_q;
////stack<pii> s;
////int map[SIZE][SIZE];
////int dx[] = {-1, 1, 0, 0};
////int dy[] = {0, 0, 1, -1};
//int T, N;
//
//bool is_ok(int x, int y);
//
//int main()
//{
//    int visit[SIZE][SIZE] = {0, };
//    stack<pii> all_q;
//    stack<pii> st;
//    int map[SIZE][SIZE] = {0, };
//    int dx[] = {-1, 1, 0, 0};
//    int dy[] = {0, 0, 1, -1};
////    int T, N;
//    int nx, ny;
//    pii val;
//    pii p;
//    cin >> T;
//    for(int i = 0; i < T; i++)
//    {
//        int cnt = 0;
//        cin >> N;
//        for(int x = 0; x < N; x++)
//        {
//            for(int y = 0; y < N; y++)
//            {
//                cin >> map[x][y];
//            }
//        }
//        
//        for(int x = 0; x < N; x++)
//        {
//            for(int y = 0; y < N; y++)
//            {
//                if(map[x][y] == 1) continue;
//                for(int j = 0; j < 4; j++)
//                {
//                    nx = x + dx[j];
//                    ny = y + dy[j];
//                    if(is_ok(nx, ny) == true && map[nx][ny] == 0)
//                    {
//                        graph[x][y].push_back(pii{nx, ny});
//                    }
//                }
//            }
//        }
//        
//        for(int x = 0; x < N; x++)
//        {
//            for(int y = 0; y < N; y++)
//            {
//                cout << "graph[" << x << "][" << y << "] : ";
//                for(int k = 0; k < graph[x][y].size(); k++)
//                {
//                    cout << "(" << graph[x][y][k].first << ", " <<graph[x][y][k].second << ") ";
//                }
//                cout << "\n";
//            }
//        }
//        
//        st.push(pii{0,0});
//        visit[0][0] = 1;
//        all_q.push(pii{0, 0});
//        while(!st.empty())
//        {
//            val = st.top();
//            st.pop();
//            cout << "(" << val.first << ", " << val.s << ") ";
//            visit[val.f][val.s] = 1;
//            if(val.f == N -1 && val.s == N -1)
//            {
//                cout << "도착 \n";
//                // 중요, s.top()하나 더 해서 그 값 만날때까지 큐에서 제거시키고, 각각 visit = 0으로 만들고 재 실행.
//                cnt++;
//                if(st.empty()) break;
//                pii key = st.top();
//                
//                while(all_q.top() != key)
//                {
//                    pii remove = all_q.top();
//                    visit[remove.f][remove.s] = 0;
//                    all_q.pop();
//                }
//                continue;
//            }
//            for(int a = 0; a < graph[val.f][val.s].size(); a++)
//            {
//                p = graph[val.f][val.s][a];
//                if(visit[p.f][p.s] == 1) continue;
//                st.push(p);
//                all_q.push(p);
//            }
//        }
//        
//        
//        
//        
//        
//        
//        
//        
//        cout << "count :" << cnt << "\n";
//    }
//    
//}
//
//bool is_ok(int x, int y)
//{
//    if(x < 0 || x >= N || y < 0 || y >= N)
//    {
//        return false;
//    }
//    return true;
//}
//
//
//
