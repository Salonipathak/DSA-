//In indirect recursion the function is calling another function and the another function is calling that function
#include<iostream>
using namespace std;
void funB(int n);
void funA(int n){
    if(n>0){
    printf("%d ",n);
    funB(n-1);
    }
    return ;
}
void funB(int a){
    if(a>1){
    printf("%d ",a);
    funA(a/2);
    }
    return ;
}
int main(){
    funA(20);
    return 0;
}