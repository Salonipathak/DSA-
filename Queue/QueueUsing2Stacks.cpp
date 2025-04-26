#include<iostream>
using namespace std;

    struct node{
        int data;
        node*next;
        node*top=NULL;
    };
    int pop(node*s){
        int x=-1;
        if(s->top==NULL) cout<<"Stack is empty";
        else{
            node*t=s;
            s->top=s->top->next;
            x=t->top->data;
            delete(t);
        }
        return x;
    }
    void push(int d,node &s){
        node*t=new node;
        if(t==NULL) cout<<"Stack is full";
        else{
            t->data=d;
            if(s.top==NULL) s.top=t;
            else{
                t->next=s.top;
                s.top=t;
            }
        }
    }
    /*int pop(node*s){
        int x=-1;
        if(s->top==NULL) cout<<"Stack is empty";
        else{
            node*t=s;
            s->top=s->top->next;
            x=t->top->data;
            delete(t);
            
        }
        return x;
    }*/
    int dequeue(node& S2,node& S1){
        if(S2.top==NULL){
            if(S1.top==NULL) cout<<"Queue is empty";
            else{
                while(S1.top!=NULL){
                    push(pop(&S1),S2);
                }
                return pop(&S2);
            }
        }
        return pop(&S2);
    }
    void display(node S){
        node*t=S.top;
        while(t->top!=NULL){
            cout<<t->top->data<<" ";
            t->top=t->top->next;
        }
        cout<<endl;
    }

int main(){
    node S1;
    node S2;
    push(10,S1);
    push(9,S1);
    push(8,S1);
    push(7,S1);
    dequeue(S2,S1);
    display(S1);
    return 0;
}
