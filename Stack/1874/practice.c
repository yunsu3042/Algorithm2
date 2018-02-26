////
////  practical_stack.c
////  C Sort - bubble
////
////  Created by yunsu Jung on 2018. 2. 9..
////  Copyright © 2018년 yunsu Jung. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct St
//{
//    int count;
//    int v[200000];
//}S;
//
//
//
//void push(S* s, int n)
//{
//    s -> v[s ->count] = n;
//    s -> count ++;
//}
//
//int size(S* s)
//{
//    return s -> count;
//}
//
//int top(S* s)
//{
//    if(s -> count >= 1)
//    {
//        return s->v[s->count-1];
//    }
//    return 0;
//}
//
//int pop(S* s)
//{
//    if(s->count >= 1)
//    {
//        s->count --;
//        return s->v[s->count - 1];
//    }
//    return -100;
//}
//
//int empty(S* s)
//{
//    if(s->count == 0)
//    {
//        return 1;
//    }
//    return 0;
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    S stack;
//    S output;
//
//    output.count = 0;
//    stack.count = 0;
//    int q;
//    int k = 1;
//    int fail = 0;
//    int success = 0;
//    int qarr[n+1];
//    for(int i = 0; i < n; i++)
//    {
//        scanf("%d", &q);
//        qarr[i] = q;
//    }
//
//    int index = 0;
//    while(!fail && !success)
//    {
//        if(stack.count == 0 && k == n + 1)
//        {
//            success = 1;
//            break;
//        }
//
//        q = qarr[index++];
//        while(1)
//        {
//
//            if(q > top(&stack))
//            {
//                push(&stack, k);
//                k++;
//                push(&output, 1);
//            }
//            else if(q == top(&stack))
//            {
//                pop(&stack);
//                push(&output, -1);
//                break;
//            }
//            else if(q < top(&stack))
//            {
//                fail = 1;
//                break;
//            }
//        }
//    }
//
//    if(fail)
//    {
//        printf("NO\n");
//    }
//    else if(success)
//    {
//        for(int i = 0; i < output.count; i++)
//        {
//            if(output.v[i] == 1) printf("+\n");
//            else if(output.v[i] == -1) printf("-\n");
//        }
//    }
//
//}
//
//
