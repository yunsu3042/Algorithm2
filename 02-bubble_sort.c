#include<stdio.h>

void swap(int* a, int* b)
{
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

void bubble_sort(int* v, int n)
{
    for(int i = 0; i < n - 1; i ++)
    {
        for(int j = 0; j < n - i - 1; j ++)
        {
            if(v[j] > v[j + 1])
            {
                swap(v + j, v + j + 1);
            }
        }
    }
}


void print(int* v, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", v[i]);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int v[1000] = {0, };
    for(int i = 0; i < n; i ++)
    {
        scanf("%d", v + i);
    }
    
    bubble_sort(v, n);
    print(v, n);
}
