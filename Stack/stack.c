////
////  stack.c
////  C Sort - bubble
////
////  Created by yunsu Jung on 2018. 2. 9..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct stack
//{
//    int val;
//    char check;
//    
//    struct stack* next;
//    struct stack* pre;
//}stack;
//
//stack* head = NULL;
//
//// 선입 후출, head에 넣고 head부터 뺀다.
//
//int alloc_base()
//{
//    if(head==NULL)
//    {
//        head = malloc(sizeof(stack));
//        if(head == NULL)
//        {
//            return 0;
//        }
//        memset(head, 0, sizeof(stack));
//        head -> next = NULL;
//        head -> pre = NULL;
//    }
//    return 1;
//}
//
//void setHead()
//{
//    if(head == NULL) return ;
//    while(head -> pre)
//    {
//        head = head -> pre;
//    }
//}
//
//int is_empty()
//{
//    if(head == NULL)
//    {
//        printf("1\n");
//        return 1;
//    }
//    printf("0\n");
//    return 0;
//}
//
//void push(int n)
//{
//    if(head == NULL)
//    {
//        if(!alloc_base())
//        {
//            puts("head 메모리 할당실패");
//            return ;
//        }
//        // 리스트가 비었을 경우에는 맨 앞값을 대체.
//        head -> val = n;
//        return ;
//    }
//
//    setHead();
//    
//
//    // 새로운 데이터 추가
//    stack* newData = NULL;
//    newData = malloc(sizeof(stack));
//    if(newData == NULL)
//    {
//        puts("push 데이터 메모리 할당 실패");
//        return ;
//    }
//    newData -> val = n;
//    newData -> pre = NULL;
//    newData -> next = head;
//    head -> pre = newData;
//    head = newData;
//}
//// 헤드 포인터를 맨 앞으로 다시 위치.
//
//
//
//void pop()
//{
//    setHead();
//    if(head == NULL)
//    {
//        printf("%d\n", -1);
//        return ;
//    }
//    
//    printf("%d\n", head -> val);
//    if(head -> next)
//    {
//        head = head -> next;
//        head -> pre = NULL;
//        return ;
//    }
//    head = NULL;
//    return ;
//}
//
//void size()
//{
//    setHead();
//    if(head == NULL)
//    {
//        printf("0\n");
//        return ;
//    }
//    int count = 1;
//    stack* ptr = head;
//    while(ptr -> next)
//    {
//        count++;
//        ptr = ptr -> next;
//    }
//    printf("%d\n", count);
//    return;
//}
//
//void print()
//{
//    stack* ptr = head;
//    while(ptr)
//    {
//        printf("%d ",ptr -> val);
//        ptr = ptr -> next;
//    }
//    return ;
//}
//void top()
//{
//    if(head == NULL)
//    {
//        printf("-1\n");
//        return ;
//    }
//    printf("%d\n", head -> val);
//    return ;
//}
//
//
//int main()
//{
//    
//    int n;
//    scanf("%d", &n);
//    char string[30];
//    for(int i = 0; i < n; i++)
//    {
//        scanf("%s", string);
//
//        if(strcmp(string, "top") == 0)
//        {
//            top();
//        }
//        if(strcmp(string, "size") == 0)
//        {
//            size();
//        }
//        if(strcmp(string, "pop") == 0)
//        {
//            pop();
//        }
//        if(strcmp(string, "empty") == 0)
//        {
//            is_empty();
//        }
//        if(strcmp(string, "push") == 0)
//        {
//            int x;
//            scanf("%d", &x);
//            push(x);
//        }
//
//    }
//    
//    
//}
//
//
//
//
