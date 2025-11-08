//looping patterns
include<stdio.h>
int main(){
    int n;
    printf("Enter the no:");
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
       for(j=0;j<i;j++){
         printf("*");
    }
    printf("\n");
}}
#include<stdio.h>
int main(){
    int n;
    //char c='A';
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){

    char c='A';
        for(int j=1;j<=i;j++){
       printf("%2c",c+i-1);
        }
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int num=1;
    for(int i=1;i<=n;i++){
        for(int space=n;space>=i;space--)
{
    printf("  ");
}for(int j=1;j<=i;j++){
            printf("%4d",num);
            num++;
            }
            printf("\n");
}
}
