#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
//Eventually p of size 5 converted into larger array of 10 size via q
int main(){
    int *p,*q;
    p=(int *)malloc(5*sizeof(int));
    p[0]=2;
    p[1]=4;
    p[2]=6;
    p[3]=8;
    p[4]=10;
    q=(int *)malloc(10*sizeof(int));
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;
    for(int i=0;i<5;i++){
        printf("%d ",p[i]);
    }

    return 0;
}