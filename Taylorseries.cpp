#include<iostream>
using namespace std;
double taylor(int x,int n){
    static double f=1,p=1;
    double r;
    if(n==0) return 1;
    else{ 
        r=taylor(x,n-1);
        p=x*p;
        f=f*n;
        return r+p/f;
    }
    
}
int main(){
    
    printf("%1f ",taylor(4,15));
    return 0;
}