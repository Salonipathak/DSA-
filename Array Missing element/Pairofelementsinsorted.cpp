#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int A[]={1,3,4,5,6,7,8,9};
    int i=0,j=7;
    int k=10;
    while(i<j){
        if(A[i]+A[j]==k){
            printf("%d + %d = %d\n",A[i],A[j],k);
            i++;
            j--;
        }else if(A[i]+A[j]<k){
            i++;
        }else{
            j--;
        }
    }
    return 0;
}