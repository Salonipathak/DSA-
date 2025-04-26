//Modular or procedural style of typing
#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
void initialise(struct rectangle *r,int l,int b){
    r->length=l;
    r->breadth=b;
    return;
}
int area(rectangle r){
    return r.length*r.breadth;
}
int perimeter(rectangle r){
    int p=2*(r.length+r.breadth);
    return p;
}
int main(){
    struct rectangle r;
    printf("Enter the length and breadth :");
    cin>>r.length>>r.breadth;

    initialise(&r,r.length,r.breadth);
    int a=area(r);
    int peri=perimeter(r);
    return 0;
}