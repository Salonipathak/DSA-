#include<stdio.h>
#include<stdlib.h>
int hash(int key){
    return key%10 ;
}
struct node{
    int data;
    node*next;
};
void Insert(struct node*root,int key){
    if(root==NULL){
        root->data=key;
        root->next=NULL;
    }else{
        struct node*t=root;
        struct node*t2;
        while(t->next!=NULL && t->data<key){
            t2=t;
            t=t->next;
        }
        struct node*s;
        s=(node*)malloc(sizeof(node));
        s->data=key;
        s->next=t;
        t2->next=s;
    }
}
int Search(struct node*root,int key){
    if(root->data==key) return root->data;
    else{
        struct node*t=root;
        while(t->data!=key &&t->next!=NULL){
            t=t->next;
        }
        return t->data;
    }

}
void insert(struct node *HT[],int key){
    int index=hash(key);
    Insert(HT[index],key);
}
int search(struct node*HT,int key){
    int index=hash(key);
    int s= Search(HT[index],key);
    return s;
}
int main(){
    struct node*HT[10];
    for(int i=0;i<10;i++)
    HT[i]=NULL;
    insert(HT,12);
    insert(HT,23);
    insert(HT,44);
    insert(HT,39);
    insert(HT,22);
    insert(HT,2);
    printf("Key is found at %d",search(HT,2));
    return 0;
}