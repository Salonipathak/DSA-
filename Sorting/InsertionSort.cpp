#include<stdio.h>
void Insertion_sort(int A[],int n){
    for(int i=1;i<n;i++){
        int x=A[i];
        int j=i-1;
        while(j>-1 && A[j]>x){
        A[j+1]=A[j];
        j--;
        }
        A[j+1]=x;
    }
}
int main(){
    int A[]={23,57,43,68,21,12,19,20};
    Insertion_sort(A,8);
    for(int i=0;i<8;i++){
        printf("%d ",A[i]);
    }
    return 0;
}