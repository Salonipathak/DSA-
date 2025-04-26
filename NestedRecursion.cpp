//In nested recursion,there is a function inside the same function like fun(fun(n+11))
#include<iostream>
using namespace std;
int fun(int n){
    if(n>100){
    return n-10;
    }else{
        fun(fun(n+11));
    } 
}
int main(){
    int x=fun(95);
    printf("%d",x);
    return 0;
}