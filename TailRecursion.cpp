#include<iostream>
using namespace std;
void fun(int n){
    printf("%d ",n);
    fun(n-1);//even fun(n-1)+n cant be the tail recursion as +n is the last step in recorsion instead of function recalling
}
int main(){
    int r=5;
    fun(5);
    return 0;
}//In Tail Recursion the recalling of function is done as the very last task in the function
//Tail Recursion can be easily converted into loop 
//and in this case loop is more efficient than tail recursion as it takes more space than loop