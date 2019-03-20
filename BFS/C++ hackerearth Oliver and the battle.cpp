////
////  C++ hackerearth Oliver and the battle.cpp
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 3. 7..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <queue>
//
//#define MAX 1002
//#define pii pair<int, int>
//using namespace std;
//
//queue<pii> q;
//int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
//int dy[] = {1, 0, -1, 1, -1, 1, 0, -1};
//int N, M ,T;
//pii elem;
//int x, y;
//
//
//bool is_mv_ok(int x, int y);
//
//int main()
//{
//    scanf("%d", &T);
//    for(int i = 0; i < T; i++)
//    {
//        // 테스트 케이스별로 쓰이는 변수 초기화
//        // ans는 pair<int, int> 첫 번쨰 값은 부대의 수, 두 번째 값은 부대 중 가장 많은 인원수 기록
//        int troop[MAX][MAX] = {0, };
//        int visit[MAX][MAX] = {0, };
//        pii ans = {0, 0};
//        scanf("%d %d", &N, &M);
//        // 요괴들 대형 입력
//        for(int r = 0; r < N; r++)
//        {
//            for(int c = 0; c < M; c++)
//            {
//                scanf("%d", &troop[r][c]);
//            }
//        }
//
//
//        for(int a = 0; a < N; a++)
//        {
//            for(int b = 0; b < M; b++)
//            {
//                if(troop[a][b] == 1 && visit[a][b] == 0)
//                {
//                    q.push(pii{a, b});
//                    visit[a][b] = 1;
//                    int cnt = 1;
//                    while(!q.empty())
//                    {
//                        elem = q.front();
//                        q.pop();
//                        // 좌우 위아래 대각선 8방향으로 움직이면서 부대 찾기
//                        for(int p = 0; p < 8; p++)
//                        {
//                            x = elem.first + dx[p];
//                            y = elem.second + dy[p];
//                            if(is_mv_ok(x,y) == true && troop[x][y] == 1 && visit[x][y] == 0)
//                            {
//                                visit[x][y] = 1;
//                                q.push(pii{x, y});
//                                cnt++;
//
//                            }
//                        }
//                    }
//                    ans.first++;
//                    if(ans.second < cnt)
//                    {
//                        ans.second = cnt;
//                    }
//                }
//            }
//        }
//
//        printf("%d %d\n", ans.first, ans.second);
//    }
//
//}
//
//bool is_mv_ok(int x, int y)
//{
//    if(x < 0 || x >= N || y < 0 || y >= M)
//    {
//        return false;
//    }
//    return true;
//}
//
//
