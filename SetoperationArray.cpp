#include<iostream>
#include<stdio.h>
using namespace std;
struct array{
   int A[20];
   int size;
   int length;
};
void display(struct array a){
    for(int i=0;i<a.length;i++){
        cout<<a.A[i]<<" ";
    }
}
struct array *Union(struct array*a1,struct array*a2){
    struct array*a3;
    a3=(struct array*)malloc(sizeof(struct array));
    int i=0,j=0,k=0;
    while(i<a1->length && i<a2->length){
        if(a1->A[i]<a2->A[j]){
            a3->A[k++]=a1->A[i++];
        }
        else if(a1->A[i]>a2->A[j]){
            a3->A[k++]=a2->A[j++];
        }
        else if(a1->A[i]==a2->A[j]){
            a3->A[k++]=a1->A[i++];
            j++;
        }
    }
    for(;i<a1->length;i++){
        a3->A[k++]=a1->A[i];
    }
    for(;j<a2->length;j++){
        a3->A[k++]=a2->A[j];
    }
    a3->length=k;
    a3->size=20;
    return a3;
} 
struct array *Intersection(struct array*a1,struct array*a2){
    int i=0,j=0,k=0;
    struct array*a3;
    a3= (struct array*)malloc(sizeof(struct array));
    while(i<a1->length && j<a2->length){
        if(a1->A[i]<a2->A[j]){
            i++;
            
        }else if(a2->A[j]<a1->A[i]){
            
            j++;
        }else if(a1->A[i]==a2->A[j]){
            a3->A[k++]=a1->A[i++];
            j++;
        }
    }
    for(;i<a1->length;i++) i++;
    for(;j<a2->length;j++) j++;
    a3->length=k;
    a3->size=20;
    return a3;
}
struct array*Difference(struct array*a1,struct array*a2){
    struct array*a3;
    a3=new struct array;
    int i=0,j=0,k=0;
    while(i<a1->length && j<a2->length){
        if(a1->A[i]<a2->A[j]){
            a3->A[k++]=a1->A[i++];
        }else if(a1->A[i]>a2->A[j]){
            j++;
        }else{
            i++;
            j++;
        }
    }
    a3->length=k;
    a3->size=20;
    return a3;
}
int main(){
    struct array a1;
    printf("Enter the size of array :");
    scanf("%d",&a1.size);
    a1.A=(int*)malloc(sizeof(a1.size));
     printf("\nMenu:\n");
     printf("1 : Insert\n");
     printf("2 : Delete \n");
     printf("3 : Sum\n");
     printf("4 : Max \n");
     printf("5 : Min \n");
     printf("")

    return 0;
}