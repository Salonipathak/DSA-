#include<stdio.h>
#include<string.h>
int main(){
    char A[]="shopping";
    char H[26]={0,0};
    int i;
    for(i=0;A[i]!='\0';i++){
        H[A[i]-97]++;
    }
    for(i=0;i<26;i++){
        if(H[i]>1){
            printf("%c is repeating %d times",i+97,H[i]);
        }
    }
    return 0;
}