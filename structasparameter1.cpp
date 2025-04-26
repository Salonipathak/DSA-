//call by value
#include<iostream>
#include<stdio.h>
using namespace std ;
struct rectangle{
    int length;
    int breadth;
};
int area(struct rectangle a){
    int c=a.length*a.breadth;
    return c;
}
int main(){
    struct rectangle r={5,10};
    int a=area(r);
    cout<<"Area is" <<a;
//as it is call by value we cant change the actual struct parameters
    return 0;
}