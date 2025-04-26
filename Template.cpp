#include<iostream>
using namespace std;
template <class t>
class arithmetic{
    private :
    t a;
    t b;
    public :
    arithmetic (t a,t b);
    t sum();
    t sub();
};
template <class t>
arithmetic <t>:: arithmetic(t a,t b){
    this->a=a;
    this->b=b;
}
template <class t>
t arithmetic <t>:: sum(){
    return a+b;
}
template <class t>
t arithmetic <t>:: sub(){
    return a-b;
}
int main(){
    arithmetic<int> r(50,25);
    cout<<"The sum is :"<<r.sum()<<endl;
    cout<<"The substrfaction is :"<<r.sub()<<endl;
    return 0;
}