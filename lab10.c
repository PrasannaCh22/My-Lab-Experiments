//Nested Structure
#include<stdio.h>
#include<string.h>
struct Student{
    int rollno;
    char name[20];
    float cgpa;
    struct Address{
        char vname[20];
        int pincode; 
    }addr;

};
void display(struct Student s[],int n){
for(int i=0;i<n;i++){
    printf("Student details: %d\n",i);
    printf("Name:%s\n",s[i].name);
    printf("Roll Number:%d\n",s[i].rollno);
    printf("Cgpa:%0.2f\n",s[i].cgpa);
    printf("Village name:%s\n",s[i].addr.vname);//a1.vname
    printf("Pincode:%d\n",s[i].addr.pincode);//a1.pincode

}}
int main(){
    int n;
    printf("Enter no of students details needed:");
    scanf("%d",&n);
    struct Student s[n];
    //struct Address a1;
    for(int i=0;i<=n;i++){
        printf("Student details:%d\n",i);
    printf("Enter the name:");
    scanf("%s",s[i].name);
    printf("\nEnter the rollno:");
    scanf("%d",&s[i].rollno);
    printf("\nEnter the cgpa:");
    scanf("%f",&s[i].cgpa);
    printf("\nEnter the location:");
    scanf("%s",s[i].addr.vname);
    printf("\nEnter the pincode:");
    scanf("%d",&s[i].addr.pincode);
}

}

//Struct Node
#include<stdio.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
struct Node node1,node2,node3;
node1.data=10;
node1.next=&node2;
node2.data=20;
node2.next=NULL;
node3.data=30;
node2.next=&node3;
node3.next=NULL;
printf("The data of node 1:%d\n",node1.data);
printf("The data of node 2:%d\n",node2.data);

printf("The data of node 2 from node 1:%d\n",node1.next->data);

printf("The data of node 3 from node 2:%d\n",node2.next->data);
printf("The data of node 3 from node 1:%d\n",node1.next->next->data);



}


//Using Union
#include<stdio.h>
#include<string.h>
union Student{
    int Dormno;
    char name[10];
};
int main(){
    union Student s1;
strcpy(s1.name,"RAM");
    printf("Name.:%s\n",s1.name);
    s1.Dormno=1;
    printf("Dorm No.:%d\n",s1.Dormno);
    
  
    


}
