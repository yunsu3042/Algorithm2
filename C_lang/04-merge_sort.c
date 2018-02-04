

#include <stdio.h>

void print(int* v, int n);
void swap(int* a, int* b)
{
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

void merge(int* l, int* r, int n)
{
    // 병합할 배열 생성 및 초기화.
    int merged[n];
    memset(merged, 0, n);
    // 디버깅
//    printf("--- 초기화된 merged --- \n\n");
    int* p1 = l;
    int* p2 = r;
    int* endp = l + n;
    for(int i = 0; i < n ; i++)
    {
        if(p1 == r)
        {
            //디버깅
//            printf("남은 오른쪽 값을 다 더합니다.");
            while(p2 != endp)
            {
                merged[i++] = *p2++;
            }
            break;
        }
        else if(p2 == l + n)
        {
//            printf("남은 왼쪽 값을 다 더합니다.");
            while(p1 != r)
            {
                merged[i++] = *p1++;
            }
            break;
        }

        if(*p1 >= *(p2))
        {
            merged[i] = *(p2);
            p2++;
            // 디버깅 용도
//            printf("%d", merged[i]);
//            if(p2 == endp) break;
        }
        else
        {
            merged[i] = *p1;
            p1 ++;
            //디버깅 용도
//            printf("%d", merged[i]);
//            if(p1== r) break;
            
        }
    }
    for(int i = 0; i < n; i++)
    {
        l[i] = merged[i];
    }
    
//    printf("===============================\n");
//    print(l, n);
//    printf("===============================\n");
//
}


void print(int* v, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", v[i]);
    }
}

void merge_sort(int* v, int n)
{
    int left_num = (n / 2);
    int right_num = n - left_num;
    if(left_num !=0)
    {
        
        int* l = v;
        int* r = v + left_num;
        
//        printf("주소값: %u 첫 번째 값:%d 개수: %d\n", l, l[0], left_num);
//        print(l, left_num);
//        printf("\n");
//        printf("주소값: %u 첫 번째 값:%d 개수: %d\n", r, r[0], right_num);
//        print(r, right_num);
//        printf("\n");
        
        merge_sort(l, left_num);
        merge_sort(r, right_num);
        merge(l, r, n);
    }
    
    
    
    
}



int main()
{
    int n;
    scanf("%d", &n);
    int v[1000000];
    for(int i = 0; i < n; i ++)
    {
        scanf("%d", v + i);
    }
    merge_sort(v, n);
    print(v, n);
    
}
