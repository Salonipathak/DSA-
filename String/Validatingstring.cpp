#include<stdio.h>
#include<string.h>
int valid(char s[]){
    for(int i=0;s[i]!='\0';i++){
        if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122)||(s[i]>=48&&s[i]<=57)){
            return 1;
        }
    } 
    return 0;
}
int main(){
    char name[]="Hello &&World";
    int t=valid(name);
    if(t){
        printf("The string is valid");
    }else{
        printf("The string is not valid");
    }
    return 0;
}