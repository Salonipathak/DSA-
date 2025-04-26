#include<stdio.h>
#include<stdlib.h>
typedef struct dia{
    int *A;
    int n;
}dia;
void Display(struct dia a){
    
    for(int i=0;i<a.n;i++){
        for(int j=0;j<a.n;j++){
            if(i==j){
                printf("%d ",a.A[i]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int main(){
    int a;
    printf("Enter the dimensions of array :");
    scanf("%d",&a);
    struct dia b;
    b.n=a;
    b.A=(int*)malloc(a*(sizeof(int)));
    for(int i=0;i<a;i++){
        printf("Enter the element :");
        scanf("%d",&b.A[i]);
    }
    
    Display(b);
    return 0;
}