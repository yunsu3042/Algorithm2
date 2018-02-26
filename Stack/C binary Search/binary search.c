////
////  biary_search.c
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 2. 13..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node{
//    int val;
//
//    struct node* left;
//    struct node* right;
//}Node;
//
//int count = 0;
//Node* root = NULL;
////x는 새로 추가될 값, n은
//
//Node* make_node(int x)
//{
//    Node* new = malloc(sizeof(Node));
//    new -> val = x;
//    new -> left = NULL;
//    new -> right = NULL;
//    return new;
//}
//
//void insert(int x, Node* N)
//{
//    if(root == NULL)
//    {
//        Node* new = make_node(x);
//        root = new;
//        return ;
//    }
//    count++;
//
//    if(x < N -> val)
//    {
//        if((N -> left) == NULL)
//        {
//            Node* new = make_node(x);
//            N -> left = new;
//            return ;
//        }
//        else
//        {
//            insert(x, N -> left);
//            return ;
//        }
//    }
//    else
//    {
//        if((N -> right) == NULL)
//        {
//            Node* new = make_node(x);
//            N -> right = new;
//
//            return ;
//        }
//        else
//        {
//            insert(x, N -> right);
//            return ;
//        }
//    }
//}
//
//void print(Node* N)
//{
//    if(N == NULL)
//        return ;
//    print(N -> left);
//    print(N -> right);
//    printf("%d", N -> val);
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int x;
//    while(n--)
//    {
//        scanf("%d", &x);
//        insert(x, root);
//        printf("%d\n", count);
//    }
//}
//
//
//
//
