#include<iostream>
using namespace std;
int fab(int n){
    int r=0;
    if(n==0) return 0;
    if(n==1) return 1;
    return fab(n-1)+fab(n-2);
}
int main(){
    printf("%d ",fab(5));
    return 0;
}//this is an excessive recursion as it makes the numerous call for the same value
//the time taken for this recursion is order of 2 to the power n