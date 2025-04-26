#include<stdio.h>
#include<string.h>
int main(){
    char A[]="MADAM";
    int i,j;
    for(i=0;A[i]!='\0';i++){

    }
    //coz at i '\0' is stored
    
    for(i=i-1,j=0;i>j;i--,j++){
        if(A[i]!=A[j]){
            printf("The string is not a palindrome");
            puts(A);
            break;
        }
    else {
        printf("The string is a palindrome");
        puts(A);
    }
    }
    return 0;
}