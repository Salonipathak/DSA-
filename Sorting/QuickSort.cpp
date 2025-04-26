#include<stdio.h>
void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int A[],int l,int h){
    int pivot=A[l];
    int i=l;
    int j=h;
    do{
        do{
            i++;
        }while(A[i]<=pivot);
        do{
            j--;
        }while(A[j]>pivot);
        if(i<j) swap(&A[i],&A[j]);
    }while(i<j);
    swap(&A[l],&A[j]);
    return j;
}
void QuickSort(int A[],int l,int h){
    if(l<h){
        int j=partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}
int main(){
    int A[]={99,66,21,23,45,78,54,32};
    QuickSort(A,0,7);
    for(int i=0;i<8;i++){
        printf("%d ",A[i]);
    }
    return 0;
}