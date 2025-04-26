#include<stdio.h>
#include<string.h>
void swap(char*a,char*b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
void perm(char s[],int l,int h){
    int i;
    if(l==h){
        printf("%s\n",s);
    }else{
        for(i=l;i<=h;i++){
            swap(&s[i],&s[l]);
            perm(s,l+1,h);
            swap(&s[i],&s[l]);
        }
    }
}
int main(){
    char A[]="ABC";
    int l=0,h=2;
    perm(A,l,h);
    return 0;
}