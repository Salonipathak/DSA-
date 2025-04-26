#include<iostream>
#include<math.h>
using namespace std;
struct term{
    int coeff;
    int exp;
};
struct polynomial{
    int n;//Number of terms
    struct term *t;
};
int evaluation(struct polynomial p,int x){
    //x=5 then what wil be a single answer
    int sum=0;
    for(int i=0;i<p.n;i++){
        sum=sum + p.t[i].coeff*pow(x,p.t[i].exp);
    }
    return sum;
}
struct polynomial *sum(struct polynomial *p1,struct polynomial *p2){
    struct polynomial *s3=new polynomial;
    s3->t=new term [p1->n+p2->n];
    int i,j,k;
    i=j=k=0;
    while(i<p1->n && j<p2->n){
        if(p1->t[i].exp == p2->t[j].exp){
            s3->t[k]=p1->t[i];
            s3->t[k++].coeff=p1->t[i++].coeff+p2->t[j++].coeff;
            }else if(p1->t[i].exp>p2->t[j].exp){
                s3->t[k++]=p1->t[i++];
            }else if(p1->t[i].exp<p2->t[j].exp){
                s3->t[k++]=p2->t[j++];
            }
    }
    for(;i<p1->n;i++){
        s3->t[k++]=p1->t[i];
    }
    for(;j<p2->n;j++){
        s3->t[k++]=p2->t[j];
    }
    s3->n=k;
    return s3;
}
void display(struct polynomial p){
    for(int i=0;i<p.n;i++){
        cout<<p.t[i].coeff<<" x"<<p.t[i].exp<<"+";
    }
}
int main(){
    struct polynomial p1;
    struct polynomial p2;
    cout<<"Enter the number of terms:";
    cin>>p1.n;
    p1.t=new term[p1.n];
    for(int i=0;i<p1.n;i++){
        cout<<"The term is :"<<i+1;
        cin>>p1.t[i].coeff>>p1.t[i].exp;
    }
    cout<<"Enter the number of terms:";
    cin>>p2.n;
    p2.t=new term[p2.n];
    for(int i=0;i<p2.n;i++){
        cout<<"The term is :"<<i+1;
        cin>>p2.t[i].coeff>>p2.t[i].exp;
    }
    //cout<<"The sum is :"<<evaluation(p,2);
    struct polynomial *s;
    s=sum(&p1,&p2);
    for(int i=0;i<s->n;i++){
        cout<<"The"<<i+1<<"Term's coeffiecient and exponent is:"<<s->t[i].coeff<<" "<<s->t[i].exp;
    }
    display(p1);
    cout<<endl;
    display(p2);
    cout<<endl;
    display(*s);
    return 0;
}