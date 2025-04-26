#include<iostream>
using namespace std;
void fun(int n){
    if(n>0){
    printf("%d ",n);
    fun(n-1);
    return;
    }
}
int main(){
    int n=5;
    fun(5);
    return 0;
}