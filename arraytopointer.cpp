#include<iostream>
using namespace std;
void fun(int *a){
    cout<<sizeof(a)/sizeof(int);//it will only get the size of pointer which is 4
    return;
}
int main(){
    int a[]={1,2,3,4,5};
    fun(a);
    cout<<endl<<sizeof(a)/sizeof(int);//it will get the size of whole array
    return 0;
}