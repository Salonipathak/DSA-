#include<stdio.h>
#include<string.h>
int main(){
    char A[]="shopping";
    int i,j;
    //To check the duplicates
    for(i=0;A[i]!='\0';i++){

    }int n=i-2, count;
    for(i=0;i<n;i++){
        count=1;
        if(A[i]!=-1){
        for(j=i+1;j<n+1;j++){
        if(A[i]==A[j])
        count++;
    
        }
        }
        if(count>1){
             printf("%c is repeating %d times",A[i],count);
             A[i]=-1;
    }
    }
    
    return 0;
}