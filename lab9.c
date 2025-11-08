//Sum of pointer
#include<stdio.h>
int main(){
int a[]={10,20,30,40};
int *p=a;
int sum=0;
for(int i=0;i<4;i++){
    printf("The address of a[%d]:%p\n",i,p+i);
}

for(int i=0;i<4;i++){
    printf("The values of a[%d]:%d\n",i,*(p+i));
}
   
    for(int i=0;i<4;i++){
        sum=sum+*(p+i);
    }
    printf("sum %d",sum);
}
//swap using function
#include<stdio.h>
void swap(int *a,int *b ){//call by reference
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=10,b=20;
    printf("Before swap:a=%d\tb=%d.",a,b);
    swap(&a,&b);
    printf("\nAfter swap:a=%d\tb=%d\n",a,b);//call by reference
    
}
//Pointer to string
#include<stdio.h>
int main(){
    char str[]="Hello Cse";
    char *pstr;
    pstr=str;
    printf("\nThe string is:");
    while(*pstr!='\0'){
        printf("%c",*pstr);
        pstr++;
}
return 0;}
