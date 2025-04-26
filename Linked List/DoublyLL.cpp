#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node*next;
};
struct node*first;
void create(int A[],int n){
    struct node*t,*Last;
    first=(struct node*)malloc(sizeof(struct node));
    Last=(struct node*)malloc(sizeof(struct node));
    first->data=A[0];
    first->prev=NULL;
    first->next=NULL;
    Last=first;
    for(int i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->prev=Last;
        t->next=Last->next;
        Last->next=t;
        Last=t;
    }
    
}
void Display(struct node*h){
    while(h){
        printf("%d ",h->data);
        h=h->next;
    }
}
int Length(struct node*h){
    int len=0;
    while(h!=NULL){
        len++;
        h=h->next;
    }
    return len;
}
void Insert(int index,int data){
    struct node*p,*t;
    p=first;
    if(index==0){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=data; 
        t->next=first;
        first->prev=t;
        t->prev=NULL;
        first=t;
    }else{
        t=(struct node*)malloc(sizeof(struct node));
        t->data=data;
        for(int i=1;i<index;i++){
            p=p->next;
        }if(p){
        t->prev=p;
        t->next=p->next;
        if(p->next) p->next->prev=t;
        p->next=t;
    
    }
}
}
int Delete(struct node*q,int in){
    struct node*p;
    p=first;
    int x;
    if(in==1){
        first=first->next;
        x=p->data;
        delete(p);
    }else{
        for(int i=1;i<in;i++){
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next) p->next->prev=p->prev;
        x=p->data;
        delete (p);
}
return x;
}
/*void reverse(struct node*p){
    struct node*temp;
    while(p!=NULL){
        
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;

        p=p->prev;
        if(p!=NULL && p->next==NULL){
            first=p;
        }
    }
    
}
void insert(struct node*q,int index,int data){
    struct node*t;
    struct node*p=q;
    if(index==0){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=data;
        do{
            p=p->next;
        }while(p!=q);
        t->prev=p;
        t->next=q;
        p->next=t;
        q->prev=t;
        first=t;
    }else {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=data;
        for(int i=0;i<index;i++){
            p=p->next;
        }
        t->prev=p;
        t->next=p->next;
        p->next=t;
        p->next->prev=t;
    }
}*/
int main(){
    int B[]={1,2,3,4,5};
    create(B,5);
    struct node*p=first;
    
    printf("Length of list is :%d\n",Length(first));
    Display(first);
    return 0;
}