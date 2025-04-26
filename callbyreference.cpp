#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10;
    int y=20;
    swap(x,y);
    cout<<x<<endl;
    cout<<y<<endl;
    //call by reference mean we are giving another name to the actual parameter via formal parameter
    //it make the code monolithic as the function swap becomes the part of main function
    return 0;
}