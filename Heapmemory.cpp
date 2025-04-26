#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    //if we want to allocate an array in heap memory using pointer then 
    int *p;
    p=(int*)malloc(5*sizeof(int));//(this syntax in c)
    //in c++ p=new int(5);
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;

    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    free(p);//in c language
    //in c++ Delete[]p;
    return 0;
}