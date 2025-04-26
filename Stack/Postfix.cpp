#include<iostream>
#include<string.h>
using namespace std;
class Stack{
    private:
    struct node{
    char data;
    node*next;
    }*top;
    public:
    Stack(){
        top=NULL;
    }
    void push(char d){
        node*t;
        t=new node;
        if(t==NULL) cout<<"Stack is Full";
        else{
            t->data=d;
            t->next=top;
            top=t;
        }
    }
    void display(){
        node*t=top;
        while(t!=NULL){
            cout<<t->data;
            t=t->next;
        }
    }
    char pop(){
        node*p=top;
        char s='o';
        if(p==NULL) return s;
        else{
            top=top->next;
            s=p->data;
            delete(p);
            return s;
        }
    }
    int Isempty(){
        if(top==0) return 1;
        else return 0;
    }
    int Isoperand(char s){
        if(s=='+' || s=='-' || s=='*' ||s=='/' ) return 0;
        else return 1;
    }
    int Operator(char s){
            if(s=='+' || s=='-') return 2;
            else if(s=='*' || s=='/') return 3;
        
        return -1;//Non valid Operator
    }
    char*Postfix(char str[]){
        char*pf=new char[strlen(str)+2];
        int i=0,j=0;
        while(str[i]!='\0'){
            if(Isoperand(str[i])){
                pf[j++]=str[i++];
            }else{
                if(Operator(str[i])>Operator(top->data)){
                    push(str[i++]);
                }else{
                    pf[j++]=pop();
                }
            }
    }while(top!=NULL){
            pf[j++]=pop();
        }
        pf[j]='\0';
        return pf;
    }
};
int main(){
    Stack s;
    char str[]="a+b*c";
    s.push('#');
    char*st=s.Postfix(str);
    cout<<st;
    return 0;
}