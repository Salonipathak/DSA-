#include<iostream>
using namespace std;
class uppertri{
    private:
    int*A;
    int n;
    public:
    uppertri(int sz){
        A=new int[sz*(sz+1)/2];
        n=sz;
    }
    ~uppertri(){
        delete []A;
    }
    void set(int i,int j,int x){
        if(i<=j){
            A[n*(i-1)-(i-1)*(i-2)/2+j-i]=x;
        }
    }
    int get(int i,int j){
        if(i<=j){
            return A[n*(i-1)-(i-1)*(i-2)/2+j-i];
        }else return 0;
    }
    void display(){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i<=j){
                cout<<A[n*(i-1)-(i-1)*(i-2)/2+j-i]<<" ";
            }else{
                cout<<"0 ";
            }
            }
            cout<<endl;
        }
    }
};
int main(){
    int d;
    cout<<"Enter the dimensions:";
    cin>>d;
    int x;
    uppertri a(d);
    for(int i=1;i<=d;i++){
        for(int j=1;j<=d;j++){
            cin>>x;
            a.set(i,j,x);
        }
    }
    a.display();
    return 0;
}