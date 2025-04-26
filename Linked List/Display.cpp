#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node{
    int data;
    struct node*next;
};
struct node *first=NULL;
struct node*last=NULL;
struct node*second=NULL;
struct node*third=NULL;
void create(int A[],int n){
    struct node *t;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void create2(int B[],int n){
    struct node *t;
    struct node*last;
    second=(struct node *)malloc(sizeof(struct node));
    second->data=B[0];
    second->next=NULL;
    last=second;
    for(int i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=B[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node*p){
    while(p!=0){
        printf("%d ",p->data);
        p=p->next;
    }
}
void rdisplay(struct node*p){//using Recursion
    if(p!=0){
        printf("%d ",p->data);
        rdisplay(p->next);
    }
}
int count(struct node*p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
int rcount(struct node*p){
    if(p){
        return 1+ rcount(p->next);
    } return 0;
}
int add(struct node*p){
    int sum=0;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}
int radd(struct node*p){
    if(p==0) return 0;
    return radd(p->next)+p->data;
}
int max(struct node*p){
    int max=0;
    while(p!=0){
        if(p->data > max){
            max=p->data;
        }
        p=p->next;
    }
    return max;
} 
int m=0;
int rmax(struct node*p){

    if(p){
        m<p->data;
        m=p->data;
        rmax(p->next);
        return m;
    }else return 0;
}
struct node*search(struct node*p,int key){
    while(p!=NULL){
        if(p->data==key){
            return p;
        }
        p=p->next;
    }
}
struct node*rsearch(struct node*p,int key){
    if(p==NULL){
        return 0;
    }else if(p->data==key){
        return p;
    }else{
        return rsearch(p->next,key);
    }
}
struct node*isearch(struct node*p,int key){//For improving search via move to head
    struct node*q=NULL;
    while(p!=NULL){
        if(key==p->data){
        
        q->next=p->next;
        p->next=first;
        first=p;
        return p;
    } 
    q=p;
    p=p->next;
}
return NULL;
}
void insert(struct node*p,int index,int data){
    if(index==0){
        struct node*t=(struct node*)malloc(sizeof(struct node));
        t->data=data;
        t->next=first;
        first=t;
    }else if(index>0){
        struct node *t,*s;
        t=(struct node*)malloc(sizeof(struct node));
        t->data=data;
        s=first;
        for(int i=0;i<index-1 && index;i++){
            s=s->next;
        }
        t->next=s->next;
        s->next=t;
    }
}
void Insertlast(int data){
    struct node*t=(struct node*)malloc(sizeof(struct node));
    t->data=data;
    t->next=NULL;
    if(first==NULL){
        first=last=t;
    }else{
        last->next=t;
        last=t;
    }
}
void Sortedinsert(struct node*p,int x){
    struct node*t,*q;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    
    if(first==NULL){
        t->next=NULL;
        first=t;
    }while(p && p->data<x){
        q=p;
        p=p->next;
    }
    if(p==first){
        t->next=NULL;
        first=t;
    }else {
        t->next=q->next;
        q->next=t;
}
}
int Delete(struct node*p,int pos){
    int x=0;
    if(pos==1){
        struct node*s=(struct node*)malloc(sizeof(struct node));
        s=first;
        s->data=x;
        first=first->next;
        free (s);
        return x;
    }
    else if(pos>1){
        struct node *t;
        
        t=(struct node*)malloc(sizeof(struct node));
        for(int i=0;i<pos-1;i++){
            t=p;
            p=p->next;
        }
        t->next=p->next;
        p->next=NULL;
        x=p->data;
        free (p);
        return x;
    }
}
int check(struct node*p){
    int x=-31260;
    while(p!=NULL){
        if(p->data < x){
            return 0;
        }else{
            x=p->data;
            p=p->next;
        }   
    }
    return 1;
}
void removeduplicates(struct node *p){
    struct node*q=p->next;
    
    while(p!=NULL){
    if(q->data!=p->data){
        q=p;
        p=p->next;
    }else{
        q->next=p->next;
        free(p);
        p=q->next;
    }
}
}
void reverse1(struct node*p){
    struct node*q=(struct node*)malloc(sizeof(struct node));
    q=p;
    int *A;
    A=(int *)malloc(sizeof(int)*count(first));
    
    int i=0;
    
    while(q!=NULL){
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL){
        q->data=A[i];
        i--;
        q=q->next;
    }
}
void reverse2(struct node*p){
    struct node*r=NULL,*s=NULL;
    while(p!=NULL){
        s=r;
        r=p;
        p=p->next;
        r->next=s;
    }
    first=r;
}
void reverse3(struct node*q,struct node*p){
    if(p){
        reverse3(p,p->next);
        p->next=q;
    }else
    first=q;
}
void concatenate(struct node*p,struct node*q){
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
}
void merge(struct node*p,struct node*q){
    if(p->data<q->data){
        third=p;
        last=p;
        p=p->next;
    }else{
        third=q;
        last=q;
        q=q->next;
    }
    while(p && q){
        if(p->data<q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }else if(p->data>q->data){
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p!=NULL){
        last->next=p;
        last=p;
        p=p->next;
    }
    if(q!=NULL){
        last->next=q;
    }
}
int isloop(struct node*p){
    struct node *s,*t;
    do{
        s=t=p;
        s=s->next;
        t=t->next;
        if(t!=NULL){
            t=t->next;
        }else{
            t=t;
        }
    }while(s && t && s!=t);
    if(s==t) return 1;
    return 0;
}
int Midelement(struct node*p){
    struct node*s=p,*t=p;
    while(s){
        s=s->next;
        if(s) s=s->next;
        if(s) t=t->next;
    }
    return t->data;
}
int main(){
    int A[]={1,5,6,7,8};
    create(A,5);
    struct node*t1,*t2;
    // t1=first->next->next;
    // t2=first->next->next->next->next;
    // t2->next=t1;
    
    //printf("%d",isloop(first));
    printf("The Middle Element is %d",Midelement(first));
    return 0;
}