////
////  5639.c
////  C - Algorithms
////
////  Created by yunsu Jung on 2018. 2. 15..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define false 0
//#define true 1
//
//typedef int bool;
//
//typedef struct binary_tree
//{
//    int value;
//
//    struct binary_tree* left;
//    struct binary_tree* right;
//}Tree;
//
//Tree* root = NULL;
//
//Tree* tree_alloc(Tree* p, int x)
//{
//    p = malloc(sizeof(Tree));
//    p -> value = x;
//    p -> left = NULL;
//    p -> right = NULL;
//    return p;
//}
//
//void insert(int x)
//{
//    if(root == NULL)
//    {
//        root = malloc(sizeof(Tree));
//        root -> value = x;
//        root -> left = NULL;
//        root -> right = NULL;
//        return ;
//    }
//
//    Tree* p = root;
//    Tree* parent = root;
//    bool right = false;
//    bool left = false;
//    while(p)
//    {
//        right = false;
//        left = false;
//        parent = p;
//
//        if(x > p -> value)
//        {
////            printf("%d는 %d보다 큽니다.\n", x, p->value);
//            p = p -> right;
//            right = true;
//        }
//        else if(x < p -> value)
//        {
////            printf("%d는 %d보다 작습니다.\n", x, p->value);
//            p = p -> left;
//            left = true;
//        }
//    }
//
//    p = tree_alloc(p, x);
//    if(right == true)
//    {
//        parent -> right = p;
//    }
//    else if(left == true)
//    {
//        parent -> left = p;
////        printf("parent의 주소 %d\n", parent);
////        printf("parent의 왼쪽 아들 주소 %d\n", p);
//    }
//}
//
//void print(Tree* start)
//{
//    Tree* p = start;
//    printf("%d\n", p -> value);
//    Tree* left = p -> left;
//    Tree* right = p -> right;
//
//    if(left != NULL)
//    {
//        print(left);
//    }
//    if(right!= NULL)
//    {
//        print(right);
//    }
//}
//
//void another_print(Tree* start)
//{
//    Tree* left = start -> left;
//    Tree* right = start -> right;
//    if(left != NULL)
//    {
//        another_print(left);
//        printf("%d\n", left -> value);
//    }
//
//    if(right != NULL)
//    {
//        another_print(right);
//        printf("%d\n", right -> value);
//    }
//    if(start == root)
//    {
//        printf("%d\n", start -> value);
//    }
//}
//
//
//int main()
//{
//    int n;
//    while(scanf("%d", &n) != EOF)
//    {
//        insert(n);
//    }
//
//
//    another_print(root);
//
//
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
