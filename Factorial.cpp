#include<iostream>
using namespace std;
//Recursion
int fun(int n){
    if(n==0) return 1;
    else return fun(n-1)*n;
}
//Iteration
int Ifun(int a){
    int f=1,i;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int m;
    m=Ifun(5);
    printf("%d ",m);
    return 0;
}