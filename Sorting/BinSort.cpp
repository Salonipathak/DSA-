#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int findmax(int A[],int n){
    int max=-1;
    for(int i=0;i<n;i++){
        if(max<A[i])
        max=A[i];
    }
    return max;
}
typedef struct node{
    int data;
    struct node*next;
}node;
void insert(node**root,int d){
    printf("H\n");
    if(*root==NULL){
        printf("H\n");
        (*root)->data=d;
        printf("H\n");
        (*root)->next=NULL;
        printf("H\n");
    }else{
        printf("H\n");
        node*temp= *root;
        node*s;
        printf("H\n");
        s=new node;
        printf("Hello");
        s->data=d;
        s->next=NULL;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=s;
    }
}
int Delete(node*A){
    node*temp=A;
    node*temp2;
    while(temp->next!=NULL){
        temp2=temp;
        temp=temp->next;
    }
    int d=temp->data;
    temp2->next=NULL;
    delete(temp);
    return d;
}
void BinSort(int A[],int n){
    int max=findmax(A,n);
    node**bin;//array of linklist
    //bin=(node**)malloc(sizeof(node*)*(max+1));
    bin=new node*[max+1];
    for(int i=0;i<max+1;i++){
        bin[i]=NULL;
    }
    for(int i=0;i<n;i++){
        printf("Element inserted\n");
        insert(&bin[A[i]],A[i]);
        cout<<"Element inserted"<<endl;
    }
    int i=0,j=0;
    while(i<max+1){
        while(bin[i]!=NULL){
            A[j++]=Delete(bin[i]);
        }
        i++;
    }
}
int main(){
    int A[]={53,24,21,31,12,44,33,29,37,45};
    BinSort(A,9);
    for(int i=0;i<9;i++){
        printf("%d ",A[i]);
    }
    return 0;
}