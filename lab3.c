//looping statements
#include<stdio.h>
int main(){
    int i=0;
    do{
        printf("Hello World\n");
        i++;    }
        while(i<5);}
//factorial
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    int fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;

    }
    printf("Enter the fatorial %d",fact);
    return 0;
}
//fibonocci series
#include<stdio.h>
int main(){
    int num,a=0,b=1,c;
    printf("Enter the range:");
    scanf("%d",&num);
    printf("%d %d",a,b);
    c=a+b;
    while(c<=num){
    printf("%d",c);
    a=b;
    b=c;
    c=a+b;
    }return 0;
    }
