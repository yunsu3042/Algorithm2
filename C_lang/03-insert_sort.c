
#include <stdio.h>


void swap(int* a, int* b)
{
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

void insert_sort(int* v, int n)
{
    
    for(int k = 1; k < n; k++)
    {
        for(int i = k; i >= 1; i--)
        {
            if(v[i] < v[i - 1])
                swap(v + i, v + i - 1);
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
    
    insert_sort(v, n);
    print(v, n);
}
