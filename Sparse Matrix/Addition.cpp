#include<stdio.h>
#include<stdlib.h>
struct element{
    int i;
    int j;
    int x;
};
struct sparse{
    int m;
    int n;
    int num;
    struct element*e;
}; 
void create(struct sparse*s){
    printf("Enter dimensions :");
    scanf("%d%d",&s->m,&s->n);
    printf("Enter the number of non-zero elements:");
    scanf("%d",&s->num);
    s->e=(struct element*)malloc(s->num*sizeof(struct element));
    printf("Enter elements :");
    for(int i=1;i<=s->num;i++){
        scanf("%d%d%d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
    }
}
void display(struct sparse s){
    int k=1;
    for(int i=1;i<=s.m;i++){
        for(int j=1;j<=s.n;j++){
            if(i==s.e[k].i && j==s.e[k].j){
                printf("%d ",s.e[k].x);
                k++;
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
struct sparse *sum(struct sparse *s1,struct sparse *s2){
    if(s1->m==s2->m && s1->n==s2->n){
    int i=1,j=1,k=1; 
    struct sparse *sum;
    sum=(struct sparse*)malloc(sizeof(struct sparse));
    sum->m=s1->m;
    sum->n=s1->n;
    sum->e=(struct element*)malloc(sizeof(struct element)*(s1->num+s2->num));
    while(i<=s1->num && j<=s2->num){
        if(s1->e[i].i>s2->e[j].i){
            sum->e[k++]=s2->e[j++];
        }else if(s1->e[i].i<s2->e[j].i){
            sum->e[k++]=s1->e[i++];
        }else{
            if(s1->e[i].j>s2->e[j].j){
                sum->e[k++]=s2->e[j++];
            }else if(s1->e[i].j<s2->e[j].j){
                sum->e[k++]=s1->e[i++];
            }else if(s1->e[i].j==s2->e[j].j){
                sum->e[k]=s1->e[i];
                sum->e[k++].x=s1->e[i].x+s2->e[j].x;
                j++;
                i++;
            }
        }
        for(;i<s1->num;i++){
            sum->e[k++]=s1->e[i];
        }
        for(;j<s2->num;j++){
            sum->e[k++]=s1->e[j];
        }
        sum->num=k;
        return sum;
    }
    }else{
        return NULL;
    }
    }

int main(){
    struct sparse a,b,*s3;
    create(&a);
    printf("The first matrix is \n");
    display(a);
    
    
    create(&b);
    printf("The second matrix is \n");
    display(b);

    
    s3=sum(&a,&b);
    printf("The result is :\n");
    display(*s3);
    return 0;
}