//Double Ended Queue
//DEQueue

#include<iostream>
using namespace std;
class Queue{
    private:
    struct node{
        int data;
        node*next;
    }*front,*rear;
    public:
    Queue(){
      front=NULL;
      rear=NULL;  
    }
    void enqueuefr(int data){
        node*t=new node;
        if(t==NULL) cout<<"Queue is full";
        else{
            t->data=data;
            t->next=NULL;
            if(front==NULL) front=rear=t;
            else{
                rear->next=t;
                rear=t;
            }
        }
    }
    int dequeueff(){
        int x=-1;
        if(front==NULL) cout<<"Queue is Empty";
        else{
            node*s=front;
            x=s->data;
            front=front->next;
            delete(s);
        }
        return x;
    }
    void enqueueff(int data){
        node*t=new node;
        if(t==NULL) cout<<"Queue is full";
        else{
            t->data=data;
            if(front==NULL) front=rear=t;
            else{
            t->next=front;
            front=t;
            }
        }
    }
    int dequeuefr(){
        int x=-1;
        if(front==NULL) cout<<"Queue is empty";
        else{
            node*s=rear;
            x=s->data;
            node*t=front;
            while(t->next!=rear){
                t=t->next;
            }
            t->next=NULL;
            rear=t;
            delete(s);
        }
        return x;
    }
    void display(){
        node*s=front;
        while(s!=NULL){
            cout<<s->data<<" ";
            s=s->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.enqueuefr(9);
    q.enqueuefr(10);
    q.enqueueff(8);
    cout<<q.dequeuefr()<<endl;
    q.display();
    return 0;
}