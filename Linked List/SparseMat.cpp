    #include<iostream>
using namespace std;
class node{
    public:
    int col;
    int value;
    node*next;
};
class LinkedList{
    private:
    int row;
    int column;
    node*A[3];
    public:
    LinkedList(int row,int col){
        A[row];
        this->row=row;
        column=col;
        for(int i=0;i<row;i++){
        A[i]=new node;
    }
    }
    void create(){
        node*p;
            for(int i=0;i<row;i++){
                p=A[i];
                for(int j=0;j<column;j++){
                    p->next=p;
                    cout<<"Enter the number and col. number :"<<endl;
                    cin>>p->value>>p->col;
                }
            }
    }
    void Display(){
        node*p;
        cout<<endl;
        for(int i=0;i<row;i++){
            p=A[i];
            for(int j=0;j<column;j++){
                if(j==p->col){
                    cout<<p->value<<" ";
                }else cout<<"0 ";
            }
            cout<<endl;
        }
    }
};
int main(){
    LinkedList l(3,3);
    l.create();
    l.Display();
    return 0;
}