#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;

    public:
    rectangle(){
        length=0;
        breadth=0;
    }
    rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int area(){
        return breadth*length;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    void setlength(int l){
        length=l;
    }
    void setbreadth(int b){
        breadth=b;
    }
    int getlength(){
         
        return length;
    }
    int getbreadth(){
        
        return breadth;
    }
    ~rectangle(){
        cout<<"Destructor";
    }
};
int main(){
    rectangle r(5,10);
    cout<<"Area is "<<r.area()<<endl;
    cout<<"Perimeter is "<<r.perimeter()<<endl;
    cout<<"The length is "<<r.getlength()<<endl;
    return 0;
}