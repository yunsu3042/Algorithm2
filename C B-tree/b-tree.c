////
////  b-tree.c
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 2. 19..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
///*
//     B- tree 구현하기
//     18.2.19 - 2시간
//     Linked_list 임의의 데이터 형에 대해서 쓸 수 있도록 void*를 사용해서 구현.
//     linked_node의 head를 기억하는 linked_list 구조체를 추가로 만들어서 여러개의 링크드 리스트를 사용할 수 있도록 추가 구현.
//     B - tree 구조 설계완료.
//
//
//     todo - search, insert, delete
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
//// B - 트리와 트리 노드
//typedef struct tree_node
//{
//    List* keys;
//
//    List* childs;
//    int level;
//}tnode;
//
//typedef struct B_tree
//{
//    tnode* root;
//}btree;
//
//
//
//
//// 링크드 리스트 생성
//List* new_list()
//{
//    List* list = malloc(sizeof(List));
//    list -> head = NULL;
//    return list;
//}
//
//// tree node 파라미터 메소드들
//lnode* make_node_t(tnode* t)
//{
//    lnode* new_node = malloc(sizeof(lnode));
//    new_node -> value = t;
//    new_node -> pre = NULL;
//    new_node -> next = NULL;
//    return new_node;
//}
//
//lnode* make_first_node_t(lnode* head, tnode* t)
//{
//    head = malloc(sizeof(lnode));
//    head -> value = t;
//    head -> pre = NULL;
//    head -> next = NULL;
//    return head;
//}
//
//
//List* insert_list_t(List* list, tnode* a)
//{
//    tnode* t = malloc(sizeof(tnode));
//    t -> keys = a -> keys;
//    t -> level = a -> level;
//    t -> childs = a -> childs;
//
//    if(list -> head == NULL)
//    {
//        list -> head = make_first_node_t(list -> head, t);
//    }
//    else
//    {
//        lnode* np = list -> head;
//        while(np -> next)
//        {
//            np = np -> next;
//        }
//        np -> next = make_node_t(t);
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
//
//
//
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
//
//    btree* tree = malloc(sizeof(btree));
//    tree -> root = NULL;
//
//    tnode* f1 = malloc(sizeof(tnode));
//    tnode* s1 = malloc(sizeof(tnode));
//    tnode* s2 = malloc(sizeof(tnode));
//
//    tree -> root  = f1;
//    s1 -> keys = new_list();
//    insert_list_i(s1 -> keys, 20);
//    insert_list_i(s1 -> keys, 30);
//
//    s2 -> keys = new_list();
//    insert_list_i(s2 -> keys, 70);
//    insert_list_i(s2 -> keys, 100);
//
//    f1 -> keys = new_list();
//    insert_list_i(f1 -> keys, 50);
//
//    f1 -> childs = new_list();
//    insert_list_t(f1 -> childs, s1);
//    insert_list_t(f1 -> childs, s2);
//
//    insert_list_t(f1 -> keys, s1);
//    insert_list_t(f1 -> keys, s2);
//
//    printf("%d\n", *(int*)(tree -> root -> keys -> head -> value));
//    printf("%d\n", *(int*)(((tnode*)(tree -> root -> childs -> head -> value)) -> keys -> head -> value));
//    printf("%d\n", *(int*)(((tnode*)(tree -> root -> childs -> head -> value)) -> keys -> head -> next -> value));
//    printf("%d\n", *(int*)(((tnode*)(tree -> root -> childs -> head -> next -> value)) -> keys -> head -> value));
//    printf("%d\n", *(int*)(((tnode*)(tree -> root -> childs -> head -> next -> value)) -> keys -> head -> next -> value));
//
////    printf("%d\n", *(int*)(tree -> root -> keys -> head -> value));
//
//
////
////    tnode* t1 = malloc(sizeof(tnode));
////    tnode* t2 = malloc(sizeof(tnode));
////    tnode* t3 = malloc(sizeof(tnode));
////    tnode* t4 = malloc(sizeof(tnode));
////
////
////    t2 -> level = 10;
////    t3 -> level = 20;
////    t4 -> level = 30;
////    t1 -> childs = new_list();
////
////    insert_list_t(t1 -> childs, t2);
////    insert_list_t(t1 -> childs, t3);
////    insert_list_t(t1 -> childs, t4);
////
////    free(t2);
////    free(t3);
////    free(t4);
////
////    lnode* tp = t1 -> childs -> head;
////    while(tp)
////    {
////        printf("%d\n", ((tnode *)(tp -> value)) -> level);
////        tp = tp -> next;
////    }
//
//
//}

