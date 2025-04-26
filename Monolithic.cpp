#include<iostream>
#include<stdio.h>
using namespace std;
//Monolithic style of coding
int main(){
    int length=0,breadth=0;
    printf("Enter the length and breadth of rectangle :");
    cin>>length>>breadth;

    int area=length*breadth;
    int peri=2*(length+breadth);

    printf("Area is %d\n Breadth is %d",area,peri);
    return 0;

}