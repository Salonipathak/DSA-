#include<iostream>
using namespace std ;
double e(int x,int n){
    static double s=1;
    if(n==0) return s;
    else{
        s=1+x*s/n;
        return e(x,n-1);
    }
}
int main(){
    printf("%1f ",e(4,15));
    return 0;
}