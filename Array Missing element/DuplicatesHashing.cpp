#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int A[]={2,3,5,5,5,7,8,9,9,11,12,12,15};
    int*B;
    B=new int[16]();//To initialize every element to zero
    B[0]=0;
    for(int i=0;i<13;i++){
        B[A[i]]++;
    }
    for(int i=0;i<16;i++){
        if(B[i]>1){
            printf("%d is repeating %d times\n",i,B[i]);
        }
    }
}