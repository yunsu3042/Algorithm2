#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print(vector<int> v, string s)
{
    cout << s << '\n';
    cout << "{ ";
    for(int x: v)
    {
        cout << x << ' ';
    }
    cout << "}\n";
}

vector<int> fibonacci(int x, int y, vector<int> v, int n)
{
    int count = 1;
    while(count <= n)
    {
        if(count == 1)
        {
            v.push_back(x);
        }
        else if (count ==2)
        {
            v.push_back(y);
        }
        else
        {
            int new_fibo = v[count - 2] + v[count - 3];
            v.push_back(new_fibo);
        }
        count++;
    }
    return v;
}

int main()
{
    string s = "윤수야 사랑해";
    int n = 10;
    int x = 1;
    int y{2};
    vector<int> v;
    v = fibonacci(x, y, v, n);
    print(v, s);
}
