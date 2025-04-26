#include<iostream>
using namespace std ;
int fact(int n){
    if(n==0) return 1;
    else
    return n*fact(n-1);
}
int ncr(int a,int b){
    int num,den;
    num=fact(a);
    den=fact(b)*fact(a-b);
    return num/den;
}
//By pascals triangle for producing the recursive method to find ncr
int rncr(int n,int r){
    if(n==r || r==0) return 1;
    else return rncr(n-1,r-1)+rncr(n-1,r);
}
int main(){
    printf("%d ",rncr(5,1));
    return 0;
}