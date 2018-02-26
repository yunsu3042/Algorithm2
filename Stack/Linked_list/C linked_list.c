////
////  C linked_list.c
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 2. 19..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
///*
//     Linked_list 임의의 데이터 형에 대해서 쓸 수 있도록 void*를 사용해서 구현.
//     linked_node의 head를 기억하는 linked_list 구조체를 추가로 만들어서 여러개의 링크드 리스트를 사용할 수 있도록 추가 구현.
//
// */
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//
//
//// C++ template과 비슷하게 동작.
//
//// 링크드 리스트
//typedef struct linked_node
//{
//    void* value;
//
//    struct linked_node* next;
//    struct linked_node* pre;
//}lnode;
//
//typedef struct linked_list
//{
//    lnode* head;
//
//}List;
//
//// 링크드 리스트 생성
//List* new_list()
//{
//    List* list = malloc(sizeof(List));
//    list -> head = NULL;
//    return list;
//}
//
//// int 파라미터 메소드들.
//lnode* make_node_i(int* x)
//{
//    lnode* new_node = malloc(sizeof(lnode));
//    new_node -> value = x;
//    new_node -> pre = NULL;
//    new_node -> next = NULL;
//    return new_node;
//}
//
//lnode* make_first_node_i(lnode* head, int* x)
//{
//    head = malloc(sizeof(lnode));
//    head -> value = x;
//    head -> pre = NULL;
//    head -> next = NULL;
//    return head;
//}
//
//
//List* insert_list_i(List* list, int a)
//{
//    int* x = malloc(sizeof(int));
//    *x = a;
//    if(list -> head == NULL)
//    {
//        list -> head = make_first_node_i(list -> head, x);
//    }
//    else
//    {
//        lnode* np = list -> head;
//        while(np -> next)
//        {
//            np = np -> next;
//        }
//        np -> next = make_node_i(x);
//        np -> next -> pre = np;
//    }
//    return list;
//}
//
//
//
//
//
//
//int main()
//{
//        lnode* arr[10];
//        for(int i = 0; i < 10; i++)
//        {
//            lnode* node = malloc(sizeof(lnode));
//            int* x = malloc(sizeof(int));
//            *x = 10 * i;
//            node -> value = x;
//            arr[i] = node;
//            printf("%d\n", *(int*)(node -> value));
//        }
//        for(int i = 0; i < 10; i ++)
//        {
//            printf("%d\n", *(int*)(arr[i] -> value));
//        }
//
//}
//
