#include<stdio.h>
#include<string.h>
int main(){
    char A[]="Painter";
    char B[]="Painting";
    int i,j;
    for(i=0,j=0;A[i]!='\0'&&B[j]!='\0';i++,j++){
        if(A[i]!=B[j]){
            break;
        }else{
            if(A[i]==B[j]){
                printf("Equal");
            }else if(A[i]<B[j]){
                printf("%s is smaller ",A);
            }else{
                printf("%s is smaller",B);
            }
        }
    }   
    return 0;
}