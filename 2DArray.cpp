#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    //To allocate array in stack
    int A[3][4]={{1,2,3,4},
             {5,6,7,8},
             {9,1,2,3}};//Declaration and initialization
    

    //Partially creating array in heap
    int*Arr[3];
    Arr[0]=new int[4];
    Arr[1]=new int[4];
    Arr[2]=new int[4];
    Arr[1][2]=15;

    //Fully creating a 2D array in heap
    int**a;
    a=new int*[3];//Rows are also allocated in heap
    a[0]=new int[4];
    a[1]=new int[4];
    a[2]=new int[4];
    return 0;
}