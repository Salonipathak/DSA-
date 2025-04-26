#include<iostream>
using namespace std;
class queue{
    private:
    int size;
    int front;
    int rear;
    int*A;
    public:
    queue(){
        cout<<"Enter the size:";
        cin>>size;
        front=rear=0;
        A=new int[size];
    }
    void enqueue(int data){
        if((rear+1)%size==front) cout<<"Queue is full";
        else{
            rear=(rear+1)%size;
            A[rear]=data;
        }
    }
    int dequeue(){
        int x=-1;
        if(front==rear) cout<<"Queue is empty";
        else{
            front=(front+1)%size;
            x=A[front];
        }
        return x;
    }
    void display(){
        int i=front+1;
        do{
            cout<<A[i]<<" ";
            i++;
        }while(i!=(rear+1)%size);
        cout<<endl;
    }
};
int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.display();
    cout<<q.dequeue();
    return 0;
}