#include<stdio.h>

void create(int A[],int n){
    int t=A[n];
    int i=n;
    while(i>1 && t>A[i/2]){
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=t;
}
void display(int A[],int n){
    for(int i=1;i<=n;i++){
        printf("%d ",A[i]);
    }
}
int main(){
    int A[]={0,80,40,70,25,35,30,66};
    create(A,7);
    display(A,7);
    return 0;
}