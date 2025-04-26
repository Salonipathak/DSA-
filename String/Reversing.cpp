
#include<stdio.h>
#include<string.h>

int main(){
    char A[]="Python";
    //char B[7];
    int i,j;
    char temp;
     for(j=0;A[j]!='\0';j++){
     }
     j=j-1;//As the last index of A will be \0
    // j=0;
    // while(i>=0){
    //     B[j]=A[i];
    //     i--;
    //     j++;
    // }
    // B[j]='\0';
    // printf("%s\n",B);
    for(i=0;i<j;i++,j--){
        temp=A[i];
         A[i]=A[j];
         A[j]=temp;
     }
     printf("%s",A);
    return 0;
}