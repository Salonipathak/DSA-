#include<iostream>
using namespace std;
class lowertri{
    private:
    int*A;
    int n;
    public:
    lowertri(int e){//dimension
        A=new int[e*(e+1)/2];//The number of element in lower triangular matrix
        n=e;
    }
    void set(int i,int j,int x){
        if(i>=j){
            A[i*(i-1)/2+j-1]=x;
        }
    }
    int get(int i,int j){
        if(i>=j){
            cout<<A[i*(i-1)/2+j-1];
        }else return 0;
    }
    void display(){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i>=j){
                    cout<<A[i*(i-1)/2+j-1]<<" ";
                }else {
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
    }
    ~lowertri(){
        delete []A;
    }
};
int main(){
    int d;
    cout<<"Enter dimensions:";
    cin>>d;
    lowertri t(d);
    int x;
    for(int i=1;i<=d;i++){
        for(int j=1;j<=d;j++){
            cin>>x;
            t.set(i,j,x);
        }
    }
    t.display();

    return 0;
}