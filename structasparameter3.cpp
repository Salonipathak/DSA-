#include<stdio.h>
#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
struct rectangle* fun(){//for the dynamic allocation of structure in heap using function
    struct rectangle*p;
    p=new struct rectangle;
    p->length=50;
    p->breadth=40;
    return p;
}
int main(){
    struct rectangle*ptr;
    ptr=fun();
    cout<<"Length is "<<ptr->length<<endl<<"Breadth is "<<ptr->breadth;
}