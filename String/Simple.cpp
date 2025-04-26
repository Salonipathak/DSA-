#include<stdio.h>
#include<string.h>
int main(){
    //char s[]={'W','E','L','C','O','M','E','\0'};//Here you have to write \0 as a string delimeter,string termination,end of string
    //printf("%s",s);     OR
    //char s[]="WELCOME";//here you dont have to mention \0 as compiler will take it as its own 
    //puts(s);//To print multiple words    OR
    char s[20];
    printf("Enter the word:\n");
    gets(s);
    //To find the length of string
    int i;
    for(i=0;s[i]!='\0';i++){

    }
    printf("The length of the string is %d\n",i);
    puts(s);
    return 0;
}