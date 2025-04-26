#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void Selection_sort(int A[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            int k=i;
            if(A[j]<A[k]){
                k=j;
            }
            swap(&A[i],&A[k]);
        }
    }
}
int main(){
    int A[]={21,12,34,23,67,54};
    Selection_sort(A,6);
    for(int i=0;i<6;i++){
        printf("%d ",A[i]);
    }
    return 0;
}