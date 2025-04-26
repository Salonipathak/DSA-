#include<stdio.h>
void ShellSort(int A[],int n){
    int gap;
    for(gap=n/2;gap>=1;gap=gap/2){
        for(int i=gap;i<n;i++){
            int temp=A[i];
            int j=i-gap;
            while(j>=0 && A[j]>temp){
                A[j+gap]=A[j];
                j=j-gap;
            }
            A[j+gap]=temp;
        }
    }
}
int main(){
    int A[]={21,5,64,32,17,98,44,23};
    ShellSort(A,8);
    for(int i=0;i<8;i++){
        printf("%d ",A[i]);
    }
    return 0;
}