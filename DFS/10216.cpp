//#include <vector>
//#include <stdio.h>
//#include <stack>
//#include <cstring>
//#define SIZE 3001
//#define MAX 5001
//#define pii pair<int, int>
//#define f first
//#define s second
//
//
//using namespace std;
//int T;
//int N;
//pii v[SIZE];
//int R[SIZE];
//vector<int> graph[SIZE];
//int visit[SIZE] = {0, };
//stack<int> s;
//
//
//vector<int> counter;
//int power(int x);
//
//int main()
//{
//    
//    int cnt = 0;
//    int x,y,z;
//    scanf("%d", &T);
//    for(int q = 0; q < T; q++)
//    {
//        cnt = 0;
//        memset(visit, 0, sizeof(int) * SIZE);
//        for(int i = 0; i < N; i++)
//        {
//            graph[i].clear();
//        }
//        scanf("%d", &N);
//        for(int i = 0; i < N; i++)
//        {
//            scanf("%d", &x);
//            scanf("%d", &y);
//            scanf("%d", &z);
//            v[i] = pii{x, y};
//            R[i] = z;
//        }
//
//        for(int i = 0; i < N; i++)
//        {
//            for(int j = i + 1; j < N; j++)
//            {
//                if(power(v[i].f - v[j].f) + power(v[i].s - v[j].s) <= power(R[i] + R[j]))
//                {
//                    graph[i].push_back(j);
//                    graph[j].push_back(i);
//                }
//            }
//        }
//        for(int i = 0; i < N; i++)
//        {
//            if(visit[i] == 1) continue;
//            visit[i] = 1;
//            s.push(i);
//            while(!s.empty())
//            {
//                int a = s.top(); s.pop();
//                for(int j = 0; j < graph[a].size(); j++)
//                {
//                    int new_idx = graph[a][j];
//                    if(visit[new_idx] == 1) continue;
//                    visit[new_idx] = 1;
//                    s.push(new_idx);
//                    
//                }
//            }
//            cnt++;
//        }
//        counter.push_back(cnt);
//        
//    }
//    for(int cnt: counter)
//    {
//        printf("%d\n", cnt);
//    }
//}
//
//int power(int x)
//{
//    return x * x;
//}
//
