#include<stdio.h>
#include<string.h>
void perm(char s[],int k){
    static int h[10];
    static char res[10];
    int i;
    if(s[k]=='\0'){
        res[k]='\0';
        printf("%s\n",res);
    }else{
        for(i=0;s[i]!='\0';i++){
            if(h[i]!=1){
            res[k]=s[i];
            h[i]++;
            perm(s,k+1);
            h[i]=0;
            }
    }
}
}
int main(){
    char a[]="ABC";
    perm(a,0);
    return 0;
}