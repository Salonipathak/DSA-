#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};
class LinkedList{
    private:
    Node*top;
    public:
    LinkedList(){
        top=NULL;
    }
    void push(int x){
        Node*t;
        t=new Node;
        if(t==NULL) cout<<"Stack is Overflow";
        else{
            t->data=x;
            t->next=top;
            top=t;
        }
    }
    int pop(){
        int x=-1;
        Node*p;
        if(top==NULL) cout<<"Stack is underflow";
        else{
            p=top;
            top=top->next;
            x=p->data;
            delete(p);
        }
        return x;
    }
    void Display(){
        Node*p=top;
        while(p){
            cout<<p->data<<" ";
            p=p->next;
        }
    }
    int peek(int index){
        Node*p=top;
        for(int i=1;p!=NULL&&i<index;i--){
            p=p->next;
        }
        if(p!=NULL) return p->data;
        else return -1;
    }
    int Isempty(){
        if(top==NULL) return 1;
        else return 0;
    }
    int Isfull(){
        if(top==NULL)return 1;
        else return 0;
    }
};
int main(){
    LinkedList l;
   // l.push(10);
    //l.push(20);
    //cout<<l.pop()<<endl;
    l.Display();
    cout<<endl<<l.Isempty();
    return 0;
}