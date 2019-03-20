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
//#include <deque>
//using namespace std;
//
//#define pii pair<int, int>
//#define f first
//#define s second
//#define SIZE 5
//
//vector<pii> graph[SIZE][SIZE];
//int T, N;
//
//bool is_ok(int x, int y);
//
//int main()
//{
//    int visit[SIZE][SIZE] = {0, };
//    deque<pii> log;
//    stack<pii> road;
//    int map[SIZE][SIZE] = {0, };
//    int dx[] = {-1, 1, 0, 0};
//    int dy[] = {0, 0, 1, -1};
//    int nx, ny;
//    pii val;
//    pii p;
//
//    int cnt = 0;
//    cin >> N;
//    
//    
//    for(int x = 0; x < N; x++)
//    {
//        for(int y = 0; y < N; y++)
//        {
//            cin >> map[x][y];
//        }
//    }
//    
//    for(int x = 0; x < N; x++)
//    {
//        for(int y = 0; y < N; y++)
//        {
//            if(map[x][y] == 1) continue;
//            for(int j = 0; j < 4; j++)
//            {
//                nx = x + dx[j];
//                ny = y + dy[j];
//                if(is_ok(nx, ny) == true && map[nx][ny] == 0)
//                {
//                    graph[x][y].push_back(pii{nx, ny});
//                }
//            }
//        }
//    }
//    
//    for(int x = 0; x < N; x++)
//    {
//        for(int y = 0; y < N; y++)
//        {
//            cout << "graph[" << x << "][" << y << "] : ";
//            for(int k = 0; k < graph[x][y].size(); k++)
//            {
//                cout << "(" << graph[x][y][k].first << ", " <<graph[x][y][k].second << ") ";
//            }
//            cout << "\n";
//        }
//    }
//    
//
//    road.push(pii{0, 0});
//
//    
//    while(!road.empty())
//    {
//        pii path = road.top();
//        visit[path.f][path.s] = 1;
//        road.pop();
//        cout << "pop : " << path.f << ", "<< path.s << "\n";
//        
//        for(int i = 0; i < graph[path.f][path.s].size(); i++)
//        {
//            pii new_path = graph[path.f][path.s][i];
//
//            if(new_path.f == N - 1 && new_path.s == N - 1)
//            {
//                cnt++;
//                
//                
//                for(int a = 0; a < N; a++)
//                {
//                    for(int b = 0; b < N; b++)
//                    {
//                        if(visit[a][b] == 1)
//                        {
//                            cout << a << ", " << b << " -> ";
//                        }
//                    }
//                }
//                
//                cout << N - 1 << ", " << N - 1 <<  "도착 \n";
//
//                
//                if(!road.empty())
//                {
//                    pii new_start = road.top();
//                    cout <<  "roll back:" ;
//                    while(new_start != log.back())
//                    {
//                        pii rm = log.back();
//                        visit[rm.f][rm.s] = 0;
//                        cout << rm.f << ", " << rm.s << " -> ";
//                        log.pop_back();
//                    }
//                    cout << "===================================\n\n";
//                }
//            }
//            else if(visit[new_path.f][new_path.s] == 1)
//            {
//                continue;
//            }
//            
//            else
//            {
//                road.push(new_path);
//                log.push_back(new_path);
//            }
//            
//            
//        }
//    }
//        
//        
//        
//        
//        
//        
//    cout << "count :" << cnt << "\n";
//    
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
//
