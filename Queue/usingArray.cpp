#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int*Q;
};
void create(struct queue *u){
    printf("Enter the size :");
    scanf("%d",&u->size);
    u->Q=(int *)malloc(sizeof(int)*u->size);
    u->front=u->rear=-1;
}
void enqueue(struct queue *u,int data){
    if(u->rear==u->size-1) printf("Queue is full");
    u->rear++;
    u->Q[u->rear]=data;
}
int dequeue(struct queue *u){
    int x=-1;
    if(u->rear==u->front) printf("Queue is empty");
    else{
        u->front++;
        x=u->Q[u->front];
    }
    return x;
}
void display(struct queue u){
    for(int i=0;i<=u.rear;i++){
        printf("%d ",u.Q[i]);
    }
    printf("\n");
}
int main(){
    struct queue q;
    create(&q);
    enqueue(&q,5);
    enqueue(&q,4);
    enqueue(&q,3);
    enqueue(&q,2);
    display(q);
    printf("%d ",dequeue(&q));
    return 0;
}