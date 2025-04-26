#include<iostream>
using namespace std;
//Simple recursive method
int power(int m,int n){
    if(n==0) return 1;
    else return m*power(m,n-1);
}
//Complex but Faster recursive method
int power1(int m,int n){
    if(n==0) return 1;
    if(n%2==0){
        return power(m*m,n/2);
    }else{
        return m*power(m*m,(n-1)/2);
    }
}
//Loop method
int Ipower(int m,int n){
    int p=1,i;
    for(i=1;i<=n;i++){
        p=p*m;
    }
    return p;
}
int main(){
    int r,s,t;
    r=power(2,9);
    s=Ipower(9,2);
    t=power1(5,2);
    printf("%d %d %d",r,s,t);
}