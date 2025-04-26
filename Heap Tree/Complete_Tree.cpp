#include<stdio.h>
void Create(int A[],int n){
    int t=A[n];
    int i=n;
    while(i>1 && t>A[i/2]){
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=t;
}
int Delete(int A[],int n){
    int val=A[1];
    int x=A[n];
    A[1]=A[n];
    A[n]=val;
    int i=1;
    int j=2*i;
    while(j<n-1){
        if(A[j+1]>A[j]){
            j=j+1;
        }
        if(A[i]<A[j]){
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i=j;
            j=2*j;
        }else{
            return val;
        }
        return val;
    }
}
int main(){
    int H[]={0,30,25,40,35,80,70,66};
    for(int i=2;i<=7;i++){
        Create(H,i);
    }
   //Create(H,4);
    for(int i=1;i<=7;i++){
        printf("%d ",H[i]);
    }
    printf("\n");
    for(int i=7;i>1;i--){
        Delete(H,i);
    }
   
    for(int i=1;i<=7;i++){
        printf("%d ",H[i]);
    }
    printf("\n");

    return 0;
}