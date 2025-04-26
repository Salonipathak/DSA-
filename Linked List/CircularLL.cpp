#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*Head;
void create(int A[],int n){
    struct node*Last,*t;
    Head=(struct node*)malloc(sizeof(struct node));
    Head->data=A[0];
    Head->next=Head;
    Last=Head;
    for(int i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=Last->next;
        Last->next=t;
        Last=t;
    }
}
void Display(struct node*h){
    do{
        printf("%d ",h->data);
        h=h->next;
    }while(h!=Head);
}
int Length(struct node*p){
    int len=0;
    do{
        len++;
        p=p->next;
    }while(p!=Head);
    return len;
}
void Insert(int index,int data){
    struct node*t,*p;
    if(index<0 || index>Length(Head)){
        return ;
    }else{
    if(index==0){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=data;
        if(Head==NULL){
            Head=t;
            Head->next=Head;
        }else{
            p=Head;
            while(p->next!=Head){p=p->next;}
            t->next=p->next;
            p->next=t;
            Head=t;
        }
    }else{
        t=(struct node*)malloc(sizeof(struct node));
        t->data=data;
        for(int i=0;i<index;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
    }
}
void rdisplay(struct node*h){
    struct node*p;
    p=Head;
    static int flag;
    if(p!=Head || flag==0){
        flag=1;
        printf("%d ",p->data);
        rdisplay(p->next);
    }flag=0;
}
int Delete(int index){
    struct node*p,*q;
    int x;
    p=(struct node*)malloc(sizeof(struct node));
    q=(struct node*)malloc(sizeof(struct node));
    p=q=Head;
    if(index==0){
        do{
            p=p->next;
        }while(p->next!=Head);
        p->next=q->next;
        x=q->data;
        delete(q);
        Head=p->next;
    }else{
        for(int i=0;i<index;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        p->next=NULL;
        x=p->data;
        delete(p);
    }
    return x;
}
int main(){
    int B[]={20,60,56,37,29,17};
    create(B,6);
    printf("%d\n",Delete(2));
    Display(Head);
    return 0;
}