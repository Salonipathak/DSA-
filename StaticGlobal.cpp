#include<iostream>
using namespace std;
int fun(int n){
    static int a=0;
    if(n>0){
    a++;
    return fun(n-1)+a;
}
}
int main(){
    int r;
    r=fun(5);
    printf("%d",r);
    return 0;
}