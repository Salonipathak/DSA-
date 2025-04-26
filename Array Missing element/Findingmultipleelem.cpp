#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,3,5,8,9};
    int diff=A[0]-0;
    for(int i=0;i<6;i++){
        if(diff!=A[i]-i){
            while(diff<A[i]-i){
                cout<<"The misiing element is :"<<i+diff<<endl;
                diff++;
            }
        }
    }
    return 0;
}