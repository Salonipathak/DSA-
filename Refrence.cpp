#include<iostream>
using namespace std;
int main(){
    int a=90;
    int &r=a;//declaration of reference (reference is just a an another name of variable)
    //the address of reference is same as variable
    cout<<r<<endl;

    int b=20;
    r=b;//it means assigning not declaring 
    //it means the value of b will be stored in a and r
    cout<<r;
    return 0;
}