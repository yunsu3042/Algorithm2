//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//#include <set>
//#include <map>
//#include <vector>
//using namespace std;
//
//void input(int v[1001][1001], int& row, int& col)
//{
//    scanf("%d", &col);
//    scanf("%d", &row);
//    for(int r = 0; r < row; r++)
//    {
//        for(int c = 0; c < col; c++)
//        {
//            scanf("%d", &v[r][c]);
//        }
//    }
//}
//
//
//bool doubt(int v[1001][1001], int& row, int& col)
//{
//    for(int r = 0; r < row ; r++)
//    {
//        for(int c = 0; c < col; c++)
//        {
//            if(v[r][c] == 0)
//            {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//
//void print(int v[1001][1001], int& row, int& col)
//{
//    for(int r =0; r < row; r++)
//    {
//        for(int c = 0; c < col; c++)
//        {
//            printf("%d ", v[r][c]);
//        }
//        printf("\n");
//    }
//    printf("\n\n");
//}
//
//void print_vector(vector<pair<int, int>>& v)
//{
//    for(pair<int, int> p: v)
//    {
//        cout << "(" << p.first << ", " << p.second << ")\n" ;
//    }
//}
//
//
//
//
//int main()
//{
//    set<pair<int, int>> visited;
//    set<pair<int, int>>:: iterator iter;
//    vector<pair<int, int>> will_visit;
//    vector<pair<int, int>> buffer;
//
//    int row;
//    int col;
//    int day = 0;
////    int v[1001][1001];
////    input(v, row, col);
//    row = 13;
//    col = 13;
//    int v[1001][1001] = {1,0,};
//
//    for(int r = 0; r < row; r++)
//    {
//        for(int c = 0; c < col; c++)
//        {
//            if(v[r][c] == 1)
//            {
//                will_visit.push_back(pair<int, int>(r,c));
//            }
//        }
//    }
//    while(1)
//    {
//        for(pair<int, int>& p: will_visit)
//        {
//            visited.insert(p);
//            if(p.first + 1 < row && v[p.first + 1][p.second] == 0)
//            {
//                if(visited.find(pair<int, int>{p.first + 1, p.second}) == visited.end())
//                {
//                    buffer.push_back(pair<int, int>{p.first + 1, p.second});
//                }
//            }
//            if(p.first - 1 >= 0 && v[p.first - 1][p.second] == 0)
//            {
//                if(visited.find(pair<int, int>{p.first - 1, p.second}) == visited.end())
//                {
//                    buffer.push_back(pair<int, int>{p.first - 1, p.second});
//                }
//            }
//            if(p.second + 1 < col && v[p.first][p.second + 1] == 0)
//            {
//                if(visited.find(pair<int, int>{p.first, p.second + 1}) == visited.end())
//                {
//                    buffer.push_back(pair<int, int>{p.first, p.second + 1});
//                }
//            }
//            if(p.second - 1 >= 0 && v[p.first][p.second - 1] == 0)
//            {
//                if(visited.find(pair<int, int>{p.first, p.second -1}) == visited.end())
//                {
//                    buffer.push_back(pair<int, int>{p.first, p.second - 1});
//                }
//            }
//        }
//        for(pair<int, int>& p: buffer)
//        {
//            v[p.first][p.second] = 1;
//        }
//        will_visit.clear();
//        will_visit = buffer;
//        buffer.clear();
//        day++;
//
////        print(v, row, col);
//
//        if(will_visit.size() == 0)
//        {
//            if(!doubt(v, row, col))
//               {
//                   cout << day - 1 << "\n";
//                   break;
//               }
//            cout << -1;
//            break;
//        }
//    }
//}
//
//
//
//
//
//
