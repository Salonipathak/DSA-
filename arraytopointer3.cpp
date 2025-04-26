#include<iostream>
using namespace std;
int * fun(int size){
    int *p;
    p=new int[size];
    for(int i=0;i<size;i++){
    p[i]=i+1;}
    return p;
}
int main(){
    int *a,n=5;
    a=fun(n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
   return 0; 
}