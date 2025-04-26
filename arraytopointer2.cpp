#include<iostream>
using namespace std;
void fun(int *a,int n){//here the reference parameter will take the pointer of actual array
    //for each loop will not work on pointer 
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return;
}
int main(){
    int a[]={2,4,6,8,10};
    fun(a,5);
    for(int x:a){
        cout<<x<<" ";//here the for each loop can work
    }
    return 0;
}//array always called by address never value