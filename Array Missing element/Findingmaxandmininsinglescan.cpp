#include<iostream>
using namespace std;
int main(){
    int A[]={5,3,8,7,6,9,-1,10};
    int max=A[0];
    int min=A[0];
    for(int i=0;i<8;i++){
        if(A[i]<min){
            min=A[i];
        }else if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"The max. element is :"<<max<<endl;
    cout<<"The min. element is :"<<min<<endl;;
    return 0;
}