#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    node*next;
}*rear,*front;
void create(struct node*s){
    rear=front=NULL;
}
void enqueue(struct node*s,int data){
    struct node*t;
    t=new node;
    if(t==NULL) printf("Queue is full");
    else{
        t->data=data;
        t->next=NULL;
        if(front==NULL){
            front=rear=t;
    }else{
        rear->next=t;
        rear=t;
    }
    }
}
int dequeue(struct node*s){
    int x=-1;
    if(front==NULL) printf("Queue is empty");
    else{
        struct node*t=front;
        x=front->data;
        front=front->next;
        free(t);
    }
    return x; 
}
void display(struct node s){
    struct node*i=front;
    do{
        printf("%d ",i->data);
        i=i->next;
    }while(i!=NULL);
    printf("\n");
}
int main(){
    struct node u;
    create(&u);
    enqueue(&u,10);
    enqueue(&u,20);
    display(u);
    printf("%d ",dequeue(&u));
    return 0;
}