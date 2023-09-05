#include<stdio.h>
#include<string.h>
struct MyStr{
   int a;
   char b;
   char parth;
   char C[10];
};

int main(){
    struct MyStr S1;
      struct MyStr S2;
        struct MyStr S3;

    // strcpy(S1.C,"HEllo");
    // printf("%s",S1.C);
    
    // strcpy(S2.C,"Parth");
    // printf("%s",S2.C);
    // S1.parth = 'H';
    // printf("%c\n",S1.parth);
    // S1.a = 13;
    // printf("%d\n",S1.a);
    // S1.b ='P';
    //   printf("%c\n",S1.b);
     
     struct MyStr s4 ={2,'p','a',"Parth"};
      struct MyStr s5 ={3,'W','R',"Earth"};
     printf("%d %c %c %s \n",s4.a,s4.b,s4.parth,s4.C);
      printf("%d %c %c %s \n",s5.a,s5.b,s5.parth,s5.C);
     return 0;
}