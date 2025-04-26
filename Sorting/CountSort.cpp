#include<stdio.h>
#include<stdlib.h>
int findmax(int A[],int n){
    int max=-1;
    for(int i=0;i<n;i++){
        if(max<A[i])
        max=A[i];
    }
    return max;
}
void CountSort(int A[],int n){
    int*c;
    int max=findmax(A,9);
    c=(int*)malloc(sizeof(int)*(max+1));
    for(int i=0;i<max+1;i++){
        c[i]=0;
    }
    for(int i=0;i<n;i++){
        c[A[i]]++;
    }
    int j=0; 
    int i=0;
    while(i<max+1){
        if(c[i]>0){
            A[j]=i;
            c[i]--;
            j++;
        }
        else
        i++;
    }
}
int main(){
    int A[]={21,15,12,11,8,43,22,35,34,41};
    CountSort(A,9);
    for(int i=0;i<9;i++){
        printf("%d ",A[i]);
    }
    return 0;
}