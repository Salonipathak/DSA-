//Tree Recursion there is more than one calling of function
#include<iostream>
using namespace std ;
void fun(int n){
    if(n>0){
    printf("%d ",n);
    fun(n-1);
    fun(n-1);
        return ;
    }
}
int main(){
    fun(3);
    return 0;
}