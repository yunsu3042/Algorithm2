////
////  queue.c
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 2. 12..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct queue
//{
//    int val;
//    
//    struct queue* next;
//    struct queue* pre;
//}Q;
//
//Q* head = NULL;
//
//void make(int n)
//{
//    Q* p = NULL;
//    for(int i = 1; i <= n; i++)
//    {
//        if(i == 1)
//        {
//            Q* newData = malloc(sizeof(Q));
//            newData -> val = i;
//            head = newData;
//            p = newData;
//        }
//        else
//        {
//            Q* newData = malloc(sizeof(Q));
//            newData -> val = i;
//            p -> next = newData;
//            newData -> pre = p;
//            p = newData;
//        }
//
//    }
//    p -> next = head;
//    head -> pre = p;
//}
//
//int pop(int m)
//{
//    Q* p = head;
//    m = m - 1;
//    while(m--)
//    {
//        p = p -> next;
//    }
//    printf("%d", p -> val);
//    (p -> pre) -> next = p -> next;
//    (p -> next) -> pre = p -> pre;
//    head = p -> next;
//    free(p);
//    return head -> val;
//    
//    
//}
//
//int main()
//{
//    int n;
//    int m;
//    scanf("%d", &n);
//    scanf("%d", &m);
//    make(n);
//    Q* p = head;
//
//    printf("<");
//    for(int i = 0; i < n; i++)
//    {
//        pop(m);
//        if(i == n - 1) break;
//        printf(", ");
//    }
//    printf(">\n");
//}

