#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    char A[]="Hello";
    int H=0,x=0;
    for(int i=0;A[i]!='\0';i++){
        x=1;
        x=x<<(A[i]-97);
        if((x&H)>0){//Masking
            printf("%c is a duplicate",A[i]);
        }else{
            H=H|x;//Merging
        }
    }
    return 0;
}