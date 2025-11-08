//Conditional statements
#include<stdio.h>
int main(){
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if (age>=18){
        printf("he/she is eligible to vote");
    }
    else{
        printf("you are not eligible to vote");
    }
}
#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
        if(marks>=90){
            printf("Ex");
        }else if(marks>=80){
            printf("A");
        }else if(marks>=70){
            printf("B");
        }else if(marks>=60){
            printf("C");
        }
        else if(marks>=50){
            printf("D");
        }else if(marks>=40)
        {
            printf("E");
        }
        
    else{
        printf("Failed");
    }
}
#include<stdio.h>
int main(){
   int num;
   printf("Enter a number between 1 to 7:");
   scanf("%d",&num);
   switch(num){
    case1:
      printf("Monday");
      break;
    case2:
       printf("Tuesday");
      break;
      case3:
       printf("Wednesday");
      break;
   
   case 4:
       printf("Thursday");
       break;

   case 5:
       printf("Friday");
       break;
   
   case 6:
        printf("Saturday");
        break;
   case7:
      printf("Sunday");
      break;
    default:
      printf("Enter valid digit");

   }
}  
