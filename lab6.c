//2D Arrays
#include<stdio.h>
int main(){
    int r1,r2,c1,c2,i,j;
    printf("Enter the rows and columns:");
    scanf("%d%d",&r1,&c1);
    printf("Enter the rows and columns:");
    scanf("%d%d",&r2,&c2);
    int mat1[r1][c1];
    int mat2[r2][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&mat1[i][j]);
        }
    }  printf("MAT1:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
          
           printf("%3d",mat1[i][j]);
        }printf("\n");
    }
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }printf("MAT2:\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            
           printf("%3d",mat2[i][j]);
        }printf("\n");
    }
    if(r1==r2 && c1==c2){
        int add[i][j];
          printf("Addition of matrixes\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                add[i][j]=mat1[i][j]+mat2[i][j];
                printf("%3d",add[i][j]);
            }printf("\n");
        }
    }return 0;
}
#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("enter rows:");
    scanf("%d",&m);
    printf("enter columns:");
    scanf("%d",&n);
    int matrix[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("matrix:");
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            //printf("matrix elements are:");
            printf("%3d",matrix[i][j]);
        }printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a[10][10];
    int r,c;
    printf("Enter the rows and columns:");
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 || j==0 || i==r-1 || j==c-1){
                a[i][j]=1;
            }
            else{
                a[i][j]=0;
            }
            printf("%3d",a[i][j]);
        }printf("\n");
    }
}
