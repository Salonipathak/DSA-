#include<iostream>
using namespace std;
class lowertri{//using column major
    private:
    int *A;
    int n;
    public:
    lowertri(int e){
        A=new int[e*(e+1)/2];
        n=e;
    }
    ~lowertri(){
        delete []A;
    }
    void set(int i,int j,int x){
        if(i>=j){
            A[n*(j-1)-(j-1)*(j-2)/2+i-j]=x;
        }
    }
    int get(int i,int j){
        if(i>=j){
            return A[n*(j-1)-(j-1)*(j-2)/2+i-j];
        }else return 0;
    }
    void display(){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i>=j){
                    cout<<A[n*(j-1)-(j-1)*(j-2)/2+i-j]<<" ";
                }else{
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
    }

};
int main(){
    int b;
    cout<<"Enter dimensions :";
    cin>>b;
    lowertri d(b);
    int x;
    for(int i=1;i<=b;i++){
        for(int j=1;j<=b;j++){
            cin>>x;
            d.set(i,j,x);  
        }
    }
    d.display();
    return 0;
}