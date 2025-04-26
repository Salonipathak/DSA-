#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*lchild;
    struct node*rchild;
    int height;
}*root=NULL;
int nodeheight(struct node*p){
    int hl,hr;
    hl=p&&p->lchild?p->lchild->height:0;
    hr=p&&p->rchild?p->rchild->height:0;

    return hl>hr?hl+1:hr+1;
}
struct node*LLRotation(struct node*p){
    struct node*pl=p->lchild;
    struct node*plr=pl->rchild;

    pl->rchild=p;
    p->lchild=plr;
    p->height=nodeheight(p);
    pl->height=nodeheight(pl);
    if(p==root)
    root=pl;

    return pl;
}
int BF(struct node*s){
    int hl,hr;
    hl=s&&s->lchild?s->lchild->height:0;
    hr=s&&s->rchild?s->rchild->height:0;

    return hl-hr;
}
struct node*Rinsert(struct node*p,int value){
    if(p==NULL){
        struct node*r=(struct node*)malloc(sizeof(struct node));
        r->data=value;
        r->height=1;
        r->lchild=r->rchild=NULL;
        return r;
    }
    if(p->data>value){
        p->lchild=Rinsert(p->lchild,value);
    }else if(p->data<value){
        p->rchild=Rinsert(p->rchild,value);
    }

    p->height=nodeheight(p);

    if(BF(p)==2 && BF(p->lchild)==1)
    return LLRotation(p);
    else if(BF(p)==2 && BF(p->rchild==))
}
void Inorder(struct node*p){
    if(p!=NULL){
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
    }
}
void PreOrder(struct node*p){
    if(p!=NULL){
        printf("%d ",p->data);
        PreOrder(p->lchild);
        PreOrder(p->rchild);
    }
}
int main(){
    root=Rinsert(root,10);
    Rinsert(root,5);
    Rinsert(root,3);
    PreOrder(root);
    return 0;
}