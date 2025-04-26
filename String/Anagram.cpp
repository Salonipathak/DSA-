#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    char A[]="medical";
    char B[]="decimal";
    int H[26]={0};//Hashing by initializing all element as 0
    for(int i=0;A[i]!='\0';i++){
        H[A[i]-97]++;
    }
    for(int i=0;B[i]!='\0';i++){
        H[A[i]-97]--;
    }
    for(int i=0;A[i]!='\0';i++){
        if(H[A[i]-97]<0){
            cout<<"Its not an anagram";
            break;
        }
        if(B[i]=='\0'){
            cout<<"Its an anagram";
        }
    }
    return 0;
}