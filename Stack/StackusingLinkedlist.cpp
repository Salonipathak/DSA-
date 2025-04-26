#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*first=NULL;

void push(int x){
    struct node*t;
    t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL) printf("Stack is Overflow");
    else{
    t->data=x;
        t->next=first;
        first=t;
    }
}
int pop(){
    int x=-1;
    if(first==NULL) printf("Stack is underflow");
    else{
        struct node*q=first;
        x=q->data;
        first=first->next;
        free(q);
    }
    return x;
}
void Display(){
    struct node*t=first;
    while(t!=NULL){
        printf("%d ",t->data);
        t=t->next;
    }
}
int main(){
    
    push(10);
    push(20);
    pop();
    Display();
    return 0;
}