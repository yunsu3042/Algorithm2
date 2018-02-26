//
//  C++ 2178.cpp
//  C - Algorithms
//
//  Created by yunsu Jung on 2018. 2. 25..
//  Copyright © 2018년 yunsu Jung. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
#define SIZE 101
#define MAX 100001

int n = 0;
int m = 0;
char tmp;
int map[SIZE][SIZE] = {1,};
int queue[MAX][2];
int is_visit[SIZE][SIZE] = {0, };

int x = -1;
int y = -1;

int move_x[] = {1, -1, 0, 0};
int move_y[] = {0, 0, 1, -1};
int can_move = 4;

int moved_x = -1;
int moved_y = -1;

int counter[SIZE][SIZE] = {0, };

int front = 0;
int rear = 0;



void print(int v[][SIZE]);
void input();
int check(int a, int b);


int main()
{
    std::ios::sync_with_stdio(false);
    input();
    
//    print(map);
    
    queue[rear][0] = 0;
    queue[rear][0] = 0;
    counter[0][0] = 1;
    is_visit[0][0] = 1;
    rear++;
    
    

    while(front < rear)
    {
        x = queue[front][0];
        y = queue[front][1];
//        is_visit[x][y] = 1;
        if(x == n - 1 && y == m - 1)
            break;
        
        for(int i = 0; i < can_move; i++)
        {
            moved_x = x + move_x[i];
            moved_y = y + move_y[i];
            if(check(moved_x, moved_y) == 1 && map[moved_x][moved_y] == 1 && is_visit[moved_x][moved_y] == 0)
            {
                
                is_visit[moved_x][moved_y] = 1;
                queue[rear][0] = moved_x;
                queue[rear][1] = moved_y;
                counter[moved_x][moved_y] = counter[x][y] + 1;
                if(moved_x == n - 1 && moved_y == m - 1)
                    break;
                rear++;
            }
        }
        front++;
    }
    
//    print(counter);
    
    cout << counter[n-1][m-1] << '\n';

}

int ctoi(char a)
{
    return a - 48;
}

void print(int v[][SIZE])
{
    cout << '\n';
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << v[i][j];
        }
        cout << '\n';
    }
    cout << '\n';
}

void input()
{
    cin >> n >> m;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> tmp;
            map[i][j] = ctoi(tmp);
        }
    }
}


int check(int a, int b)
{
    if(a < 0 || a >= n || b < 0 || b >= m)
        return 0;
    return 1;
}


