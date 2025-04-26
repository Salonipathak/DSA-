#include<stdio.h>
#include<string.h>
int main(){
    char s[]="WelCoMe";//for changing the case
    int j=0;
    for(int j=0;s[j]!='\0';j++){
        if(s[j]>=65 && s[j]<=90){
            s[j]=s[j]+32;
        }else if(s[j]>='a' && s[j]<=122){
            s[j]=s[j]-32;
        }
    }
    puts (s);
    int i;
    for(i=0;s[i]!='\0';i++){

    }
    printf("The length of string is :%d",i);
    return 0;
}