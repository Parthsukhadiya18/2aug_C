#include<stdio.h>
int main(){
    // file make 
    FILE *parth;
    // parth = fopen("parth.c","w");
     // print file
    // fprintf(parth,"Hello Parth!");
    //file append 
    //  parth = fopen("parth.c","a");
    //  fprintf(parth,"\nHello Parth!");
    // file read 
      parth = fopen("parth.c","r");
      char str1[100];
     fgets(str1,100,parth);
     printf("%s",str1);
    fclose(parth);
}