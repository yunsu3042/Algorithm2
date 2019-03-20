///*
// // Sample code to perform I/O:
//
// cin >> name;                            // Reading input from STDIN
// cout << "Hi, " << name << ".\n";        // Writing output to STDOUT
//
// // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
// */
//
//// Write your code here
//#include <vector>
//#include <queue>
//#include <stdio.h>
//using namespace std;
//#define MAX 100002
//
//queue<int> q;
//vector<int> graph[MAX];
//int visit[MAX] = {0, };
//int level[MAX] = {0, };
//vector<int> aws;
//
//int main()
//{
//    int N = 0;
//    int x = 0;
//    int y = 0;
//    int data = 0;
//    int k = 0;
//    int count = 0;
//    scanf("%d", &N);
//    for(int i = 0; i < N - 1; i++)
//    {
//        scanf("%d", &x);
//        scanf("%d", &y);
//        graph[x].push_back(y);
//        graph[y].push_back(x);
//    }
//    scanf("%d", &k);
//
////    for(int i = 0; i < N - 1; i++)
////    {
////        printf("\n node %d : ", i);
////        for(int j = 0; j < graph[i].size(); j++)
////        {
////            printf("%d ",graph[i][j]);
////        }
////
////    }
//
//
//    q.push(1);
//    visit[1] = 1;
//    level[1] = 1;
//    while(!q.empty())
//    {
//        data = q.front();
//        q.pop();
//        for(int i = 0; i < graph[data].size(); i++)
//        {
//            if(visit[graph[data][i]] == 1) continue;
//            q.push(graph[data][i]);
//            visit[graph[data][i]] = 1;
//            level[graph[data][i]] = level[data] + 1;
//            if(level[graph[data][i]] == k)
//            {
//                count++;
//            }
//        }
//
//    }
//
//    printf("%d", count);
//
//}
//
//
//
