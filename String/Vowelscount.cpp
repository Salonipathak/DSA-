#include<stdio.h>
#include<string.h>
int main(){
    char s[]="How are you";
    //to count vowels and consonents
    int ccount=0,vcount=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            vcount++;
        }else if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
            ccount++;
        }

    }
    printf("The number of vowels are %d\n",vcount);
    printf("The number of consonents is %d\n",ccount);
    //To count the number of words a string have
    int space=1;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' ') space++;
    }
    printf("The number of words are :%d\n",space);
    return 0;
}