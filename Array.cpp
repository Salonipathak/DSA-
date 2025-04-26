#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    int A[n]={0,1,2,3,4,5};
    //for each loop in c++
    for(int x:A){
        cout<<x<<endl;
    }

    cout<<sizeof(A);//Display the size of array
    return 0;
}