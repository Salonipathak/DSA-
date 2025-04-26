#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int A[]={1,2,3,3,4,5,6,6,6,7};
    int lastduplicate =0;
    for(int i=0;i<10;i++){
        if(A[i]==A[i+1] && A[i]!=lastduplicate){
            cout<<"The Duplicate element is :"<<A[i]<<endl;;
            lastduplicate=A[i];
        }
    }
    //To count the number of duplicates
    for(int i=0;i<9;i++){
        if(A[i]==A[i+1]){
            int j=i;
            while(A[j]==A[i]) j++;
            printf("%d is repeating %d times\n",A[i],j-i);
            i=j;
        }
    }
    return 0;
}