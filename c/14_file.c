#include<stdio.h>
int main(){
//    create flie 

FILE *par;
//    par = fopen("Krunal.c","w");
//    fclose(par);
// write  text 
//    par = fopen("Krunal.c","w");
//    fprintf(par,"Welcome");
//    fclose(par);

// add text
//  par = fopen("Krunal.c","a");
//    fprintf(par,"Parth");
//    fclose(par);

// read data
par = fopen("Krunal.c","r");
char c[100];
fgets(c,100,par);
printf("\n %s",c);
    return 0;
}