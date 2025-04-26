#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle{
    int length;//size of 1 integer=4 bytes
    int breadth;
    char x;//size of 1 character=1 byte only
};
int main(){
    struct rectangle r1={10,5};

    cout<<sizeof(r1)<<endl;//displaying the size of structure as 12 
//it is allocating 3 extra bytes for character to access it easily
//This is known as padding and padding is done in structure

r1.length=15;
printf("%d",r1.length);
return 0;
}