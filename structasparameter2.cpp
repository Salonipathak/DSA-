//call by address
#include<stdio.h>
#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
void changelength(struct rectangle*a,int l){
    a->length=l;
    return;
}
int main(){
    struct rectangle r={10,5};
    changelength(&r,130);
    cout<<r.length;
    //as it is pass by address the modifications can be made in the actual parameter by using pointer
   return 0;
}