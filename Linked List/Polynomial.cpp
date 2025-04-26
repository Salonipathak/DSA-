#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
struct term{
    int exp;
    int coeff;
    struct term*next;
};
struct term*poly;
void create(){
    int num;
    cout<<"Enter the number of terms :";
    cin>>num;
    struct term *last,*t;
    for(int i=0;i<num;i++){
        t=(struct term*)malloc(sizeof(struct term));
        cout<<"Enter each term with coefficient and exponent :";
        cin>>t->coeff>>t->exp;
        if(poly==NULL){
            poly=last=t;
        }else{
            last->next=t;
            last=t;
        }
    }
}
void Display(){
    struct term*t=poly;
    while(t!=NULL){
        cout<<t->coeff<<"x"<<t->exp<<"+";
        t=t->next;
    }
}
long sum(struct term*p,int x){

    long sum=0;
    while(p!=NULL){
        sum+=p->coeff*pow(x,p->exp);
        p=p->next;
    }
    return sum;
}
int main(){
    create();
    Display();

printf("\nThe sum is %ld",sum(poly,2));
    return 0;
}