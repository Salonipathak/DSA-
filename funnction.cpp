#include<iostream>
using namespace std;//prototypr of function then definition of function
int add(int a,int b){//Formal parameters
    int c=a+b;
    return c;
}
int main(){
    int num1=90,num2=17,sum;
    sum=add(num1,num2);//Actual parameters and fuction call
    cout<<"Sum is "<<sum;
    return 0;
}