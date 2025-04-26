//Bubble Sort is Adaptive and Stable
#include<stdio.h>
void swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void Bubble_Sort(int A[],int n){
    int flag;
    for(int i=0;i<n-1;i++){
        flag=0;
        for(int j=0;j<n-1-i/*As per pass one omparison will less*/;j++){
            if(A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
                flag=1;
            }
           // if(flag==0) break;//Made it Adaptive
        }
        if(flag==0) break;//Made it Adaptive
    }
}
int main(){
    int A[7]={2,9,3,7,5,0,4};
    Bubble_Sort(A,7);
    for(int i=0;i<7;i++){
        printf("%d ",A[i]);
    }
    return 0;
}