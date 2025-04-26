#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct array {
   int A[10];
   int size;
   int length;
};
void display(struct array a){
    for(int i=0;i<a.length;i++){
        printf("%d ",a.A[i]);
    }
}
void rightshift(struct array*a){
    for(int i=a->length-1;i>=0;i--){
        a->A[i]=a->A[i-1];
    }
    a->A[0]=0;
}
void leftshift(struct array*a){
    for(int i=1;i<a->length;i++){
        a->A[i-1]=a->A[i];
    }
    a->A[a->length-1]=0;
}
void leftrotate(struct array*a){
    int t=a->A[0];
    for(int i=1;i<a->length;i++){
        a->A[i-1]=a->A[i];
    }
    a->A[a->length-1]=t;
}
void rightrotate(struct array*a){
    int t=a->A[a->length-1];
    for(int i=a->length-2;i>=0;i--){
        a->A[i+1]=a->A[i];
    }
    a->A[0]=t;
}
int main(){
    struct array arr{{1,2,3,4,5},10,5};
    rightrotate(&arr);
    display(arr);
    return 0;
}