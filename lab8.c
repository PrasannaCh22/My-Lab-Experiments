//Recursions
#include<stdio.h>
long int fact(int);
int main(){
    int n;
    long int res;
    printf("Enter a number:");
    scanf("%d",&n);
    res=fact(n);
    printf("Factorial of %d is %ld\n",n,res);
    return 0;
}
long int fact(int n){
    int res;
    if(n==0)//base case
     return 1;
    else
    res=n*fact(n-1);
    return res;
}
#include<stdio.h>
long long int fib(int x);
int main(){
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%llu\t",fib(i));
    }
    return 0;
}
long long int fib(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return(fib(n-1)+fib(n-2));
}

#include<stdio.h>
int sum(int n){
    if(n==0)
    {
        return 0;

    }else{
        return n+sum(n-1);
    }
}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The sum of the first %d natural numbers is:%d\n",num,sum(num));
    return 0;
}
