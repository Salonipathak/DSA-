#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main(){
    int x=10,y=20;
    swap(&x,&y);
    cout<<x<<endl;
    cout<<y<<endl;
    //call by address means the actual parameters will be modified by formal parameter
    //it will be called by pointers which pointed towards the actual parameters
    return 0;
}