#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int A []={1,3,5,7,9,4,6,8,12};
    int*H;
    int k=10;
    H=new int[13]();
    for(int i=0;i<8;i++){
        H[A[i]]++;
        if(H[k-A[i]]!=0){
            printf("%d, %d \n",A[i],k-A[i]);
        }
    }
    return 0;
}