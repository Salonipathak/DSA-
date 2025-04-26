#include<iostream>
using namespace std;
int main(){
    int A[]={12,10,9,4,6,3,2,7,1};
    int B[13]={0};//This is konown as Hash table as it hash the element with the index
    //As it takes the size of the highest number of array for searching otherwise its the best method 
    for(int i=0;i<10;i++){
        B[A[i]]++ ;  //int index=A[i];
        //B[index]++;
    }
    for(int i=1;i<13;i++){
        if(B[i]==0) {
        cout<<"The missing element is :"<<i;
        }
    }
    return 0;
}