#include<iostream>
using namespace std;
void swap(int a ,int b){
    int temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
    int x=10;
    int y=20;
    swap(x,y);
    cout<<x<<endl;
    cout<<y<<endl;
    //call by value means the actual parframeter will not be modified 
    //The changes made in formal parameters will not reflect on actual parameter
    return 0;
}