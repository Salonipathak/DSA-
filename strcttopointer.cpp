#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
    rectangle r1 ={10,5};
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;

    rectangle *p=&r1;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
}