#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};
class LinkedList{
    public:
    Node *first;
    Node*last;
    public:
    LinkedList(){
        first=NULL;
        last=NULL;
    }
    LinkedList(int A[],int n);
    void Display();
    void Insert(int data,int index);
    int Delete(int index);
    int MidElement();
};
LinkedList::LinkedList(int A[],int n){
    first=new Node;
    first->data=A[0];
    first->prev=first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        Node*t;
        t=new Node;
        t->data=A[i];
        t->prev=last;
        last->next=t;
        last=t;
        last->next=NULL;
    }
    last->next=first;
    first->prev=last;
}
void LinkedList:: Display(){
    Node*p=first;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=first);
}
void LinkedList:: Insert(int data,int index){
    Node*p=new Node;
        p=first;
        Node*t=new Node;
        t->data=data;
    if(index==0){
    t->next=first;
    t->prev=first->prev;
    first->prev->next=t;
    first->prev=t;
    first=t;
    }else{
        
        for(int i=1;i<index;i++){
            p=p->next;
        }
        t->next=p->next;
        t->prev=p;
        p->next->prev=t;
        p->next=t;
    }
}
int LinkedList::Delete(int index){
    Node*p=first;
    int data;
    first=first->next;
    if(index==0){
        first->prev=last;
        last->next=first;
        data=p->data;
        delete(p);
    }else{
        for(int i=1;i<index;i++){
            p=p->next;
        }
        p->prev->next=p->next;
        p->next->prev=p->prev;
        data=p->data;
        delete(p);
    }
    return data;
}

int main(){
    int B[]={10,12,14,16,18};
    LinkedList l(B,5);
    l.Insert(9,5);
    l.Display();
    cout<<endl;
    cout<<l.Delete(5);
    cout<<endl;
    l.Display();
    cout<<"The Middle Element is :"<<l.MidElement();
    return 0;
}
