#ifndef Queue_h
#define Queue_h
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*rchild;
    struct Node*lchild;
};
struct Queue{
    int size;
    int rear;
    int front;
    struct Node**A;
};
void create(struct Queue*q,int s){
    q->size=s;
    q->front=q->rear=0;
    q->A=(struct Node**)malloc(sizeof(struct Node*)*q->size);
}
void enqueue(struct Queue*q,struct Node*data){
    if((q->rear+1)%q->size==q->front){
        printf("Queue is Full !!");
    }else{
        q->rear=(q->rear+1)%q->size;
        q->A[q->rear]=data;

    }
}
struct Node* dequeue(struct Queue*q){
    struct Node*x=NULL;
    if(q->rear==q->front){
        printf("Queue is Empty !!");
    }else{
        q->front=(q->front+1)%q->size;
        x=q->A[q->front];
        free q->A[q->front];
    }
    return x;
}
int Isempty(struct Queue q){
    if(q.front==q.rear){
    return 1;
}else{
    return 0;
}}
#endif /*Queue_h*/