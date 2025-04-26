#include<iostream>
using namespace std;
class matrix{
    private:
    int *A;
    int n;
    public:
    matrix(int sz){
        A=new int[sz];
        n=sz;
    }
    void set(int i,int j,int value){
                if(i==j){
                    A[i]=value;
                }
    }
    int get(int i,int j){
                if(i==j){
                    cout<<A[i];
                }else{
                    cout<<"0";
        }
    }
    void Display(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    cout<<A[i]<<" ";
                }else{
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
    }
    ~matrix(){
        //Destructor
        delete []A;
        }
};
int main(){
    matrix m(5);
    m.set(0,0,1);m.set(1,1,2);m.set(2,2,3);m.set(3,3,4);m.set(4,4,5);
    m.Display();
    return 0;
}