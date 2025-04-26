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
            if(exp[i]=='(') push(exp[i]);
            else if(exp[i]==')'){
                if(Isempty()==1) return 0;
                else pop();
            }
        }
        if(Isempty()) return 1;
        else return 0;
    }
};
int main(){
    stack st;
    char s[]="((a+b)+c)";
    
    cout<<st.Parenthesis(s);
    return 0;
}
