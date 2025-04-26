#include<iostream>
using namespace std;
class queue{
    private:
    int size;
    int rear;
    int front;
    int*A;
    public:
    queue(){
        front=rear=-1;
        cout<<"Enter the size :";
        cin>>size;
        A=new int[size];
    }
    void enqueue(int data){
        if(rear==size-1) cout<<"Queue is full";
        else{
            rear++;
            A[rear]=data;
        }
    }
    int dequeue(){
        int x=-1;
        if(rear==front) cout<<"Queue is empty";
        else{
            front++;
            x=A[front];
        }
        return x;
    }
    void display(){
        for(int i=front+1;i<=rear;i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    queue s;
    s.enqueue(10);
    s.enqueue(20);
    s.enqueue(30);
    s.display();
    cout<<s.dequeue();
    return 0;
}