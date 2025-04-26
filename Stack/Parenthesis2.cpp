#include<iostream>
#include<string.h>
using namespace std;
class stack{
    stack*next;
    char data;
    public:
    stack*top=NULL;
    stack(){
    }
    void push(char s){
        stack*t;
        t=new stack;
        t->data=s;
        if(t==NULL) cout<<"Stack is overflow";
        else{
            t->next=top;
            top=t;
        }
    }
    char pop(){
        stack*t=top;
        char s='/';
        if(top==NULL) return s;
        else{
            top=top->next;
            s=t->data;
            delete(t);
            return s;
        }
    }
    int Isempty(){
        if(top==NULL) return 1;
        else return 0;
    }
    void display(){
        stack*s=top;
        while(s!=NULL){
            printf("%c ",s->data);
            s=s->next;
        }
    }
    int Parenthesis(char exp[]){
        for(int i=0;exp[i]!='\0';i++){
            if(exp[i]=='('||exp[i]=='{'||exp[i]=='[') push(exp[i]);
            else if(exp[i]==')'){
                int x=top->data;
                if(Isempty()==0 || x==40 ) pop();
                else return 0;
            }else if(exp[i]=='}'){
                int x=top->data;
                if(Isempty()==0 || x==123 ) pop();
                else return 0;
            }else if(exp[i]==']'){
                int x=top->data;
                if(Isempty()==0 || x==91) pop();
                else return 0;
            }
        }
        if(Isempty()) return 1;
        else return 0;
    }
};
int main(){
    stack st;
    char s[]="[{(a+b)+c}]";
    
    cout<<st.Parenthesis(s);
    return 0;
}
