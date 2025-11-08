//1D Array programs
#include<stdio.h>
int main(){
    int n,a[25];
    printf("\nEnter the no.of elements in the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe array elements are:");
   for(int i=0;i<n;i++){
    printf("%d\t",a[i]);
   }return 0;
}
#include<stdio.h>
int  main(){
    int a[]={44,55,22,66,11},n=5;
    
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);}
        int temp;
        for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }}

            printf("Elements after sorting:");
            for(int i=0;i<n;i++){
            printf("%d\t",a[i]);
        }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the n:");
    scanf("%d",&n);
    printf("Enter elements till n:");
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    
    for(int i=0;i<n;i++){
        int flag=0;
         int c=1;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
              flag=1;
              break;
        }
    }
    if(flag)
        continue;
    
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c++;
            }
        
    }

        printf("\ncount of %d is %d",a[i],c);
        }
    return 0;
}
