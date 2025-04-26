#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*lchild;
    int data;
    struct node*rchild;
}*root=NULL;
void insert(int key){
    if(root==NULL){
        struct node*t=(struct node*)malloc(sizeof(struct node));
        t->data=key;
        t->lchild=t->rchild=NULL;
        root=t;
        return ;
    }
    struct node*p=root,*r=NULL;
    while(p!=NULL){
        r=p;
        if(key<p->data){
            p=p->lchild;
        }else if(key>p->data){
            p=p->rchild;
        }else {
        return ;
        }
    }
    struct node*s=(struct node*)malloc(sizeof(struct node));
    s->data=key;
    s->lchild=s->rchild=NULL;
    if(key>r->data) r->rchild=s;
    else r->lchild=s;
    return ;
}
struct node* rinsert(struct node*s,int key){
    struct node*t=NULL;
    if(s==NULL){
        struct node*t=(struct node*)malloc(sizeof(struct node));
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t ;
    }
    if(key>s->data){
        s->rchild=rinsert(s->rchild,key);

    }else if(key<s->data){
        s->lchild=rinsert(s->lchild,key);
    }

    return s;
}
void Inorder(struct node*t){
    if(t){
        Inorder(t->lchild);
        printf("%d ",t->data);
        Inorder(t->rchild);
    }
}
struct node* search(int key){
    struct node*t=root;
    while(t!=NULL){
    if(t->data==key){
    return t;
    }
    else if(t->data>key){
    t=t->lchild;
    }
    else{ 
    t=t->rchild;
    } 
    }
    return t;
}
int Height(struct node*p){
    if(p==NULL) return 0;
    int x,y;
    x=Height(p->lchild);
    y=Height(p->rchild);
    if(x>y) return x+1;
    else return y+1;
}
struct node*Inpre(struct node*s){
    if(s==NULL) return NULL;
    while(s && s->rchild!=NULL){
        s=s->rchild;
    }
    return s;
}
struct node*Insucc(struct node*s){
    if(s==NULL) return NULL;
    while(s && s->lchild!=NULL){
        s=s->lchild;
    }
    return s;
}
struct node*Delete(struct node*p,int key){
    struct node*q;
    if(p==NULL){
        return NULL;
    }else if(p->lchild==NULL && p->rchild==NULL){
        if(p==root)
        root=NULL;

        return NULL;
        free (p);
    }else{
        if(key>p->data)
        p->rchild=Delete(p->rchild,key);
        else if(key<p->data)
        p->lchild=Delete(p->lchild,key);
        else{
        if(Height(p->lchild)>Height(p->rchild)){
            q=Inpre(p->lchild);
            p->data=q->data;
            p->lchild=Delete(p->lchild,q->data);
        }else{
            q=Insucc(p->rchild);
            p->data=q->data;
            p->rchild=Delete(p->rchild,q->data);
        }
        }
    }
}
int main(){
    struct node*temp=NULL;
    root=rinsert(root,10);
    rinsert(root,8);
    rinsert(root,20);
    rinsert(root,50);
    rinsert(root,15);
    Delete(root,8);
    Inorder(root);
    printf("\n");
    temp=search(20);
    if(temp!=NULL){
    printf("Element %d is found!!",temp->data);
    }else{
        printf("Element is not found");
    }
    return 0;
}