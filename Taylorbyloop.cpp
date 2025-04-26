#include<iostream>
using namespace std;
double e(int x,int n){
    static double num=1;
    static double dem=1;
    double sum=1;
    
    for(int i=1;i<=n;i++){
        dem=dem*i;
        num=num*x;
        sum=sum+num/dem;
    }
    return sum;
}
int main(){
    printf("%1f ",e(4,15));
return 0;
}