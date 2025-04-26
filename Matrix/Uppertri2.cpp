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
            A[j*(j-1)/2+i-1]=x;
        }
    }
    int get(int i,int j){
        if(i<=j){
            return A[j*(j-1)/2+i-1];
        }else{
            return 0;
        }
    }
    void display(){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i<=j){
                    cout<<A[j*(j-1)/2+i-1]<<" ";
                }else{
                    cout<<"0 ";
                }
            }cout<<endl;
        }
    }
};
int main(){
    int d;
    cout<<"Enter Dimensions :";
    cin>>d;
    uppertri u(d);
    int x;
    for(int i=1;i<=d;i++){
        for(int j=1;j<=d;j++){
            cin>>x;
            u.set(i,j,x);
        }
    }
    u.display();
    return 0;
}