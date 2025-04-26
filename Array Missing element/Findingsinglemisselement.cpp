#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,3,4,5,7,8,9};
    //To find the missing element in sorted array
    //By using the formula
    //as the sum of first n natural no. its (n(n+1))/2
    int s=(9*(9+1))/2;
    int sum=0;
    for(int i=0;i<8;i++){
        sum=sum+A[i];
    }
    int m=s-sum;
    cout<<"The missing element is :"<<m;
    //Another method is by using the index value as the difference between the i and A[i] will remain constant 
    int diff=A[0]-0;
    int l=1,h=9;
    for(int i=0;i<8;i++){
        if(diff!=(A[i]-i)){
            cout<<"The  missing element is :"<<i+diff;
            break;
        }
    }
    return 0;
}