#include<stdio.h>
#include<stdlib.h>
#include"Queue.h"
struct Node*root=NULL;

void Treecreate(){
    struct Queue q;
    create(&q,100);
    struct Node*t,*p;
    int x;
    printf("Enter the vaLue of root :");
    scanf("%d",&x);
    root=(struct Node*)malloc(sizeof(Node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);

    while(Isempty(q)==0){
        p=(struct Node*)malloc(sizeof(Node));
        p=dequeue(&q);
        printf("Enter the left child of %d",p->lchild->data);
        scanf("%d",&x);
        if(x!=-1){
        t=(struct Node*)malloc(sizeof(Node));
        t->data=x;
        t->rchild=t->lchild=NULL;
        p->lchild=t;
        enqueue(&q,t);
        }
        printf("Enter the right child of %d",p->lchild->data);
        scanf("%d",&x);
        if(x!=-1){
            t=(struct Node*)malloc(sizeof(struct Node));
            t->data=x;
            t->rchild=t->lchild=NULL;
            p->rchild=t;
            enqueue(&q,t);
        }
    }
}
void Preorder(struct Node *p){
    if(p){
    printf("%d",p->data);
    Preorder(p->lchild);
    Preorder(p->rchild);
    }
}
int main(){
    Treecreate();
    Preorder(root);
}
