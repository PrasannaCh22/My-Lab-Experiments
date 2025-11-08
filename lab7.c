//Strings
#include<stdio.h>
int main(){
   void displayString(char str[]);
    char str[50];
    printf("Enter string:");
    fgets(str,sizeof(str),stdin);
    displayString(str);
    return 0;
}
void displayString(char str[])
{
    printf("String Output:");
    puts(str);
}
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100]="This is ",str2[]="C programming";
    //concatenates str1 and str2
    //resultant stored in str1
    strcat(str1,str2);
    puts(str1);
    puts(str2);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char a[20]="Program";
    char b[20]={'p','r','o','g','r','a','m','\0'};
    //using the %zu format specifier to print_t
    printf("length of string a: %zu\n",strlen(a));
    printf("length of string b: %zu",strlen(b));
    return 0;

}
