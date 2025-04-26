#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
};
class LinkedList{
    private:
    node*first;
    node*last;
    public:
    LinkedList()
    {first=NULL;
    last=NULL;}
    LinkedList(int A[],int n);
    void Display();
    void Insert(int index,int data);
    int Delete(int index);
    int Length();
    void Midelement();
};
LinkedList::LinkedList(int A[],int n){
    node*t;
    first=new node;
    last=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        last->next=t;
        last=t;
        last->next=NULL;
    }
}
void LinkedList::Display(){
    node*p=first;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int LinkedList::Length(){
    node*p=first;
    int count=0;
    while(p!=NULL){
        count++;
        p=p->next;
    }
    return count;
}
void LinkedList::Insert(int index,int data){
    node*p,*q,*t;
    p=first;
    t=new node;
    t->data=data;
    t->next=NULL;
    if(index==0){
        t->next=first;
        first=t;
    }else if(index>0){
        for(int i=0;i<index;i++){
            q=p;
            p=p->next;
        }
        t->next=p;
        q->next=t;
    }else if(index==Length()-1){
        last->next=t;
        last=t;
    }
}
int LinkedList::Delete(int index){
    node*p,*q;
    p=first;
    int x;
    if(index==0){
        x=p->data;
        delete(p);
        first=first->next;
    }else if(index!=0 && index){
        for(int i=1;i<=index;i++){
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
void LinkedList::Midelement(){
    node*p,*q=first;
    while(p){
        p=p->next;
        if(p) p=p->next;
        if(p) q=q->next;
    }
    cout<<"The Middle Element is:"<<q->data;
}
int main(){
    int B[]={1,2,3,4,5};
    LinkedList l(B,5);
    l.Midelement();
    return 0;
}