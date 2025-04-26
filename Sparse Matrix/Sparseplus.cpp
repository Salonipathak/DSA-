#include<iostream>
using namespace std;
class element{
    public:
    int i;
    int j;
    int x;
};
class sparse{
    private:
    int m;
    int n;
    int num;
    element *ele;
    public:
    sparse (int m,int n,int num){
        this->m=m;
        this->n=n;
        this->num=num;
        ele=new element[num];
    }
    ~sparse(){
        delete []ele;
    }
    void read(){
        cout<<"Enter non-zero element :";
        for(int i=0;i<num;i++){
            cin>>ele[i].i>>ele[i].j>>ele[i].x;
        }
    }
    void display(){
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ele[k].i==i && ele[k].j==j){
                    cout<<ele[k++].x<<" ";
                }else{
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
    }
    sparse operator+(sparse &s){
        int i,j,k;
        sparse *sum;
            sum=new sparse(m,n,num+s.num);
            sum->ele=new element[sum->num];
        if(m!=s.m && n!=s.n){
            cout<<"The matrices do not match"<<endl;
            return sparse(0,0,0);
        }
            i=j=k=0;
            while(i<num && j<s.num){
                if(ele[i].i>s.ele[j].i){
                    sum->ele[k++]=s.ele[j++];
                }if(ele[i].i<s.ele[j].i){
                    sum->ele[k++]=ele[i++];
                }if(ele[i].j>s.ele[j].j){
                        sum->ele[k++]=s.ele[j++];
                }if(ele[i].j<s.ele[j].j){
                        sum->ele[k++]=ele[i++];
                }if(ele[i].i==s.ele[j].i && ele[i].j==s.ele[j].j){
                        sum->ele[k]=ele[i];
                        sum->ele[k++].x=ele[i++].x+s.ele[j++].x;
                    }
                }
                for(;i<num;i++){
                    sum->ele[k++]=ele[i];
                }
                for(;j<s.num;j++){
                    sum->ele[k++]=s.ele[j];
                }
            
        
        sum->num=k;
        return *sum;
    }
};
int main(){
    sparse s1(5,5,5);
    sparse s2(5,5,2);
    sparse s3=s1+s2;
    s1.read();
    s2.read();
    cout<<"The first matrix is:"<<endl;
    s1.display();
    cout<<"The second matrix is:"<<endl;
    s2.display();
    cout<<"The sum is :"<<endl;
    s3.display();
    return 0;
}