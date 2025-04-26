#include<stdio.h>
#include<stdlib.h>
struct Array{
    int n;
    int top;
    int*A;
};
void create(struct Array*B){
    printf("Enter the number of elements:");
    scanf("%d",&B->n);
    B->A=(int*)malloc(B->n*sizeof(int));
    B->top=-1;
}
void Display(struct Array*B){
    for(int i=B->top;i>=0;i--){
        printf("%d ",B->A[B->top--]);
    }
}
void push(struct Array*B,int x){
    if(B->top==B->n-1) printf("Stack is Overflow");
    else{
        B->top++;
        B->A[B->top]=x;
    }
}
int pop(struct Array *B){
    int x=-1;
    if(B->top==-1) printf("Stack is underflow");
    else{
        x=B->A[B->top];
        B->top--;
    }
    return x;
}
int peek(struct Array*B,int index){
    int x=-1;
    if(B->top-index+1<0) printf("Invalid Index");
    else{
        x=B->A[B->top-index+1];
    }
    return x;
}
int Isempty(struct Array B){
    if(B.top==-1) return 1;
    else return 0;
}
int Isfull(struct Array B){
        if(B.top==B.n-1) return 1;
        else return 0;
}
int main(){
    struct Array a;
    create(&a);
    push(&a,10);
    push(&a,20);
    push(&a,30);
    push(&a,40);
    push(&a,50);
    //pop(&a);
    printf("\n%d\n",Isfull(a));
    Display(&a);
    return 0;
}