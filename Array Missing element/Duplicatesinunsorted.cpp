#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int A[]={5,9,8,7,6,8,9,2,5,9};
    int count;
    for(int i=0;i<9;i++){
        count=1;
        if(A[i]!=-1){
        for(int j=i+1;j<10;j++){
            if(A[i]==A[j]){
            count++;
            A[j]=-1;
            }
        }
        if(count>1) printf("%d is repeating %d times\n",A[i],count);
        }
    }
return 0;
}