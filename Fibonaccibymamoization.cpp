//mamoization means to store the results so that we can reduce calls and time
#include<iostream>
using namespace std;
//global array
int f[10];
int fib(int n){
    if(n==0 || n==1){
        f[n]=n;
        return n;
    }else{
    if(f[n-1]==-1){
        f[n-1]=fib(n-1);
    }
    if(f[n-2]==-1){
        f[n-2]=fib(n-2);
    }
    f[n]=f[n-1]+f[n-2];
    return fib(n-2)+fib(n-1);
    }
}
int main(){
    for(int i=0;i<10;i++){
        f[i]=-1;
    }
    printf("%d ",fib(5));
    return 0;
}