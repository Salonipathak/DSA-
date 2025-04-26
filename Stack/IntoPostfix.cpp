#include<iostream>
#include<string.h>
using namespace std;
class stack{
    private:
    struct node{
        int data;
        node*next;
    }*top;
    public:
    stack(){
        top=NULL;
    }
    void push(int s){
        node*t;
        t=new node;
        if(t==NULL) cout<<"Stack is full";
        else{
            t->data=s;
            t->next=top;
            top=t;
        }
    }
    int pop(){
        node*t=top;
        int s=0;
        if(t==NULL) return s;
        else{
            s=t->data;
            top=top->next;
            delete(t);
            return s;
        }
    }
    void Display(){
        node*t=top;
        while(t!=NULL){
            cout<<t->data;
            t=t->next;
        }
    }
    int Isoperand(char s) {
    if (s == '+' || s == '-' || s == '*' || s == '/' || s == '^' || s == '(' || s == ')'){
        return 0;
    }
    else return 1;
    }
    int pre(char s){
        if(s == '+' || s=='-') return 1;
        else if(s == '*' || s == '/') return 4;
        else if(s == '^') return 6;
        else if(s=='(') return 7;
        else if(s==')') return 0;
        return -1;//Invalid Operator
    }
    char*Intopost(char str[]){
        char*pf;
        pf=new char[strlen(str)+2];
        int i=0,j=0;
        while(str[i]!='\0'){
        if(Isoperand(str[i])){
             pf[j++]=str[i++];
        }
        else{
            if(pre(str[i])>pre(top->data)){
                push(str[i++]);
                /*if(pre(str[i])==1){
                     pre('+')=2;
                     pre('-')=2;
                }
                else if(pre(str[i])==3) pre('*')=pre('/')=4;
                else if(pre(str[i])==6) pre('^')=5;
                else if(pre(str[i])==7) pre('(')=0;
                else {
                    pre(')')=0;
                }*/
            }else{
                if(top->data=='('|| top->data==')'){
                    pop();
                }else{
                pf[j++]=pop();
                }
            }
        }
        }
        while(top!=NULL){
            pf[j++]=pop();
        }
        pf[j]='\0';
        return pf;
    }
    int eval(char str[]){
        int i=0;
        int x1,x2;
        int res;
        for(int i=0;str[i]!='\0';i++){
            if(Isoperand(str[i])){
                push(str[i]-'0');//ASCII value of 0 is 48 after substraction it will convert the char value in integer
            }else{
              x2=pop();
              x1=pop();
              switch(str[i]){
                case '+':
                res=x1+x2;
                break;
                case '-':
                res=x1-x2;
                break;
                case '*':
                res=x1*x2;
                break;
                case '/':
                res=x1/x2;
                break;
              }  
              push(res);
            }
        }
        return top->data;
    }
};
int main(){
    //char str[]="(3+5)+8*9";
    char postfix[]="234*+82/-";
    stack s;
    //s.push('#');
    //char*st=s.Intopost(str);
    int r=s.eval(postfix);
    //cout<<st<<endl;
    cout<<r;
    return 0;
}