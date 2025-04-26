#include<stdio.h>
void merge(int A[],int l,int h, int mid){
    int B[h+1];
    int i=l,j=mid+1,k=l;
    while(i<=mid && j<=h){
        if(A[i]<A[j])
        B[k++]=A[i++];
        else
        B[k++]=A[j++];
    }
    for(;i<=mid;i++){
        B[k++]=A[i];
    }
    for(;j<=h;j++){
        B[k++]=A[j];
    }
    for(int i=l;i<=h;i++){
        A[i]=B[i];
    }
}
void IMergeSort(int A[],int n){
    int p;
    for(p=2;p<n;p=p*2){
        for(int i=0;i+p-1<n;i=i+p){
            int l=i;
            int h=i+p-1;
            int mid=(l+h)/2;
            merge(A,l,h,mid);
        }
    }
    if(p/2<n){
        merge(A,0,n-1,p/2-1);
    }
}
void RMergeSort(int A[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        RMergeSort(A,l,mid);
        RMergeSort(A,mid+1,h);
        merge(A,l,h,mid);
    }
}
int main(){
    int A[]={23,12,34,89,65,32,11,21,24};
    RMergeSort(A,0,8);
    for(int i=0;i<9;i++){
        printf("%d ",A[i]);
    }
    return 0;
}