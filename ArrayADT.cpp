#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
void swap(int *x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

struct array{
      int *A;
      int size;
      int length;
};
void Display(struct array a){
    printf("\nElements are :\n");
    for(int i=0;i<a.length;i++){
        printf("%d ", a.A[i]);
    }
}
void append(struct array*arr,int x){//adding an element ta the end of an array
    if(arr->length<arr->size){
        arr->A[arr->length]=x;
        arr->length++;
    }
}
void insert(struct array *a,int index,int x){
    if(index>=0 && index<a->length){
        for(int i=a->length;i>index;i--){
            a->A[i]=a->A[i-1];
        }
        a->A[index]=x;
        a->length++;
    }
}
int Delete(struct array*a,int index){
     if(index>=0 && index<a->length){
        int x=a->A[index];
        for(int i=index;i<a->length-1;i++){
            a->A[i]=a->A[i+1];
        }
        a->length--;
        return x;
     }
}
int LinearSearch(struct array a,int x){
    for(int i=0;i<a.length;i++){
        if(x==a.A[i]){ return i;
        swap(&a.A[i],&a.A[i-1]); //Tranposition is done so that if we again search that same key then it will process one less step   
     //swap(&a.A[0],&a.A[i]) so that the searched key willmove to the first index known as move to head
     }
    }
    return -1;
}
int BinarySearch(struct array a,int key){
    int l=0,h=a.length-2,mid;
    while(l<h){
        mid=(l+h)/2;
        if(a.A[mid]==key) return mid;
        else if(key<mid) h=mid-1;
        else l=mid+1;
    }
    return -1;
}
int get(struct array a,int index){
    if(index>=0 && index<a.length) return a.A[index];
}
void set(struct array*a,int index,int x){
    if(index>=0 && index<a->length){
        a->A[index]=x;
    }
}
int max(struct array a){
    int max=a.A[0];
    for(int i=0;i<a.length;i++){
        if(max<a.A[i]) max=a.A[i];
    }
    return max;
}
int min(struct array a){
    int min=a.A[0];
    for(int i=0;i<a.length;i++){
        if(min>a.A[i]) min=a.A[i];
    }
    return min;
}
int sum(struct array a){
    int sum=0;
    for(int i=0;i<a.length;i++){
        sum=sum+a.A[i];
    }
    return sum;
}
float average(struct array a){
    float sum=0;
    for(int i=0;i<a.length;i++){
        sum=sum+a.A[i];
    }
    return sum/a.length;
}
void reverse(struct array*a){//Reversing array via taking another array b
    int*b;
    int i,j;
    b=(int*)malloc(a->length*sizeof(int));
    for(i=0,j=a->length-1;j=0;i++,j--){
        b[j]=a->A[i];
    }
    for(int i=0;i<a->length;i++){
        a->A[i]=b[i];
    }
}
void reverse2(struct array *a){
    for(int i=0,j=a->length-1;i<j;i++,j--){
        swap(&a->A[i],&a->A[j]);
    }
}
void insertsort(struct array*a,int value){
    if(a->length==a->size) return;
    int i=a->length-1;
        while(i>=0 && a->A[i]>value){
            a->A[i+1]=a->A[i];
            i--;
     
    }
     a->A[i+1]=value;
     a->length++;
}
int Issorted(struct array a){
    for(int i=0;i<a.length-1;i++){
        if(a.A[i+1]<a.A[i]) return 0;
        else return 1;
    }
}
void Rearrange(struct array *a){//To arrange -ve number on left side
    int i=0,j=a->length-1;
    while(i<j){
    while(a->A[i]<0) i++;
    while(a->A[j]>=0) j--;
    if(j>i)swap(&a->A[i],&a->A[j]);
    } 
}
struct array *merge(struct array*a1,struct array*a2){
    struct array*a3;
    a3=(struct array*)malloc(sizeof(struct array));
    int i=0,j=0,k=0;
    while(i<a1->length && j<a2->length){
        if(a1->A[i]<a2->A[j]){
            a3->A[k++]=a1->A[i++];
        }else{
            a3->A[k++]=a2->A[j++];
        }
    }
    for(;i>a1->length;i++){
        a3->A[k++]=a1->A[i];
    }
    for(;j<a2->length;j++){
        a3->A[k++]=a2->A[j];
    }
    a3->length=a1->length+a2->length;
    a3->size=10;
    return a3;
}
int main(){
    //struct array arr={{1,-2,3,-4,5,-6},20,6};
    // append(&arr,10);
    // insert(&arr,3,11);
    // printf("\n%d",Delete(&arr,4));
    // printf("\n%d\n",BinarySearch(arr,5)); 
    // cout<<arr.length;
    // Display(arr);
    // printf("\n%d \n",get(arr,2));
    // set(&arr,2,12);
    // printf("\n%d\n",get(arr,2));
    // printf("The maximum value is %d\n",max(arr));
    // printf("The minimum value is %d\n",min(arr));
    // printf("The sum is %d\n",sum(arr));
    // printf("The average is %f\n",average(arr));
    
    // reverse2(&arr);
    // insertsort(&arr,9);
    // printf("%d\n",Issorted(arr));
    // Rearrange(&arr);
    // Display(arr);
    // struct array a1={{1,2,3,4,5},10,5};
    // struct array a2={{6,7,8,9,10},10,5};
    // struct array *a3;
    // a3=merge(&a1,&a2);
    // Display(*a3);//as it is declared as a pointer
    
    struct array a1;
    int ch,index,value,i,x,sz;
    printf("Enter the size of array :");
    scanf("%d",&sz);
    a1.A=new int[sz];
    a1.size=sz;
    a1.A[0]=1;
    Display(a1);
    /*do{
     printf("\nMenu:\n");
     printf("1 : Insert\n");
     printf("2 : Delete \n");
     printf("3 : Sum\n");
     printf("4 : Max \n");
     printf("5 : Min \n");
     printf("6 : Average\n");
     printf("7 : Display\n");
     printf("8 : Exit\n");
     printf("Enter your choice :\n");
     scanf("%d",&ch);

     switch(ch){
        case 1:
        printf("Enter the index and number :\n");
        scanf("%d%d",&index,&value);
        insert(&a1,index,value);
        break;

        case 2:
        printf("Enter the index you want to delete:\n");
        scanf("%d",&i);
        x=Delete(&a1,i);
        printf("%d",x);
        break;

        case 3:
        printf("%d ",sum(a1));
        break;

        case 4:
        printf("%d ",max(a1));
        break;

        case 5:
        printf("%d ",min(a1));
        break;

        case 6:
        printf("%d ",average(a1));
        break;

        case 7:
        Display(a1); 
        break;
     }
    }while(ch<=7);*/
    return 0;
}