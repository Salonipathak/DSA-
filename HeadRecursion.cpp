//Head Recursion means there should be no statement before funvcion calling
#include<iostream>
using namespace std;
void fun(int n){
    if(n>0){
    fun(n-1);
    printf("%d ",n);
    return;
    }
}
int main(){
    int a=4;
    fun(a);
    return 0;
}
//Head Recursion can not be directly converted in loop