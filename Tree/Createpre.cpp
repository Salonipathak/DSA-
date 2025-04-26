//Creating a tree through the traversal of Preorder method :- Root,Left,Right
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*lchild;
    struct node*rchild;
}node;
node*root=NULL;
void createpre(int*a,int n){
    node*stack[n];
    int top=-1;
    node*s=(node*)malloc(sizeof(node));
    s->data=a[0];
    s->lchild=s->rchild=NULL;
    root=s;
    int i=1;
    node*t=root;
    while(i<n){
        if(a[i]<t->data){
            node*ptr=(node*)malloc(sizeof(node));
            ptr->data=a[i++];
            ptr->lchild=ptr->rchild=NULL;
            t->lchild=ptr;
            stack[++top]=t;
            t=ptr;
            printf("%d",root->data);
        }else if((stack[top]->data>a[i] || top==-1) && a[i]>t->data){
            
                node*p=(node*)malloc(sizeof(node));
                p->data=a[i++];
                p->lchild=p->rchild=NULL;
                t->rchild=p;
                t=p;
                printf("\n%d",root->data);
            }else{
                t=stack[top--];
            }
        }
    }

void inorder(node*r){
    if(r==NULL){
        printf("Tree is Empty");
    }else{
        inorder(r->lchild);
        printf("%d ",r->data);
        inorder(r->rchild);
    }
}
int main(){
    int A[4]={20,15,35,40};
    createpre(A,4);
    printf("%d",root->data);
    inorder(root);
    return 0;
}