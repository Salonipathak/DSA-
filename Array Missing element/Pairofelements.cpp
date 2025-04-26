#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int A[]={4,3,8,9,10,6,8,7,1,12};
    int k=10;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(A[j]+A[i]==k){
                printf("The required pair is :%d,%d\n",A[i],A[j]);
            }
        }
    }
    return 0;
}