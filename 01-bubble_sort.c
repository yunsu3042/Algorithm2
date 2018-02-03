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

int main()
{
    int temp[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    bubble_sort(temp, 10);
    print(temp, 10);
    
}
