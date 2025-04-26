#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;

    public:
    rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int area(){
        return length*breadth;
    }
    void changelength(int r){
        length=r;
        return;
    }
};
int main(){
    rectangle r1(5,10);
    r1.area();
    r1.changelength(20);
    return 0;
}
