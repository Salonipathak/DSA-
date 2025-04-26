#include<stdio.h>
#include<iostream>
using namespace std;
//for dynamic allocation of structure in heap memory of main memory
struct rectangle{
    int length;
    int breadth;
};
int main(){
    rectangle *p;
    p=new rectangle;
    p->length=15;
    p->breadth=10;

    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
}