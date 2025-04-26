#include<iostream>
using namespace std;
//recursion
int sum(int n){
    int s=0;
    if(n==0) return 0;
    else return sum(n-1)+n;
}
//Iteration/Loop
int Isum(int a){
    int s=0,i;
    for(i=1;i<=a;i++){
        s=s+i;
    }
    return s;
}
int main(){
    int r;
    r=Isum(5);
    printf("%d ",r);
    return 0;
}