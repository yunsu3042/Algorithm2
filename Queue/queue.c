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
//void setHead()
//{
//    
//}
//
//void push(int x)
//{
//    Q* newData = malloc(sizeof(Q));
//    newData -> val = x;
//    
//    if(head == NULL)
//    {
//        head = newData;
//        head -> pre = NULL;
//        head -> next = NULL;
//        return;
//    }
//    else
//    {
//        Q* p = head;
//        while(p -> next)
//        {
//            p = p -> next;
//        }
//        p -> next = newData;
//        newData -> pre = p;
//        newData -> next = NULL;
//    }
//    
//    return ;
//}
//
//void pop()
//{
//    if(head == NULL)
//    {
//        printf("-1\n");
//        return;
//    }
//    Q* p = head;
//    printf("%d\n", head -> val);
//    
//    if(head -> next)
//    {
//        (head -> next) -> pre = NULL;
//        head = head -> next;
//        free(p);
//        return;
//    }
//    else
//    {
//        head = NULL;
//        free(p);
//        return ;
//    }
//}
//
//void back()
//{
//    if(head == NULL)
//    {
//        printf("-1\n");
//        return;
//    }
//    Q* p = head;
//    while(p -> next)
//    {
//        p = p -> next;
//    }
//    printf("%d\n", p -> val);
//    return;
//}
//
//void print()
//{
//    Q* p = head;
//    while(p)
//    {
//        printf("%d ", p -> val);
//        p = p -> next;
//    }
//}
//
//void size()
//{
//    int count = 0;
//    Q* p = head;
//    while(p)
//    {
//        p = p -> next;
//        count++;
//    }
//    printf("%d\n", count);
//}
//
//void empty()
//{
//    if(head == NULL)
//    {
//        printf("1\n");
//        return;
//    }
//    printf("0\n");
//    return;
//}
//
//void front()
//{
//    if(head == NULL)
//    {
//        printf("-1\n");
//        return;
//    }
//    printf("%d\n", head -> val);
//    return ;
//}
//
//
//
//
//
//
//
//int main()
//{
//    
//    
//    int n;
//    scanf("%d", &n);
//    char buf[20];
//    for(int i = 0; i < n; i++)
//    {
//        scanf("%s", buf);
//        if(strcmp(buf, "push") == 0)
//        {
//            int x;
//            scanf("%d", &x);
//            push(x);
//        }
//        else if(strcmp(buf, "pop") == 0)
//            pop();
//        else if(strcmp(buf, "front") == 0)
//            front();
//        else if(strcmp(buf, "back") == 0)
//            back();
//        else if(strcmp(buf, "size") == 0)
//            size();
//        else if(strcmp(buf, "empty") == 0)
//            empty();
//        
//    }
//    
//
//
//}

