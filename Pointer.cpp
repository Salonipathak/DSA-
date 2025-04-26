#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};
int main(){
    int a=10;
    int *p;
    p=&a;//store the address of a
    cout<<*p<<endl;//derefrencing
    cout<<p<<endl;

    int b[5]={1,2,3,4,5};
    int *x;
    x=b;//or x=&b[0];
    cout<<x<<endl;
    cout<<*x<<endl;//Derefrencing

    int *a1;
    float*a2;
    char*a3;
    struct rectangle*a4;
    double*a5;

    cout<<sizeof(a1)<<endl;
    cout<<sizeof(a2)<<endl;
    cout<<sizeof(a3)<<endl;
    cout<<sizeof(a4)<<endl;
    cout<<sizeof(a5)<<endl;
    //the size of a pointer is same irrespective of its datatype


    return 0;
}