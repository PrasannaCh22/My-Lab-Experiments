//write a file
#include<stdio.h>
int main(){
    FILE *fs;
   
    fs=fopen("toot.txt","w");
    char name[30];
    printf("File created successfully.");
    while(fgets(name,sizeof(name),fs)){
    printf("%s\n",name);
}
    fclose(fs);

}
//write data in the file
#include<stdio.h>
int main(){
    FILE *fp;
   fp=fopen("toot.txt","w");
   fprintf(fp,"WELCOME TO PSPC");//prints info into the file created.
    printf("File created successfully.\n");

   fclose(fp);
    printf("File Content:\n");

    fp=fopen("toot.txt","r");
    char name[30];
     fgets(name,sizeof(name),fp);
     printf("%s\n",name);
     fclose(fp);
    
}
//Read the data from the file
#include<stdio.h>
int main(){
    FILE *fs;
   
    printf("File Content:\n");
    fs=fopen("toot.txt","r");
    char name[30];
     fgets(name,sizeof(name),fs);
     printf("%s\n",name);
     fclose(fs);
     fs=fopen("toot.txt","a");
     fprintf(fs," O23AIML");
     fclose(fs);
     printf("Updated content:\n");
     fs=fopen("toot.txt","r");
     while(fgets(name,sizeof(name),fs))
     printf("%s\n",name);
     fclose(fs);
}
