#include<stdio.h>
struct MyStr{
   int a;
   char b;
   char parth[30];
};

int main(){
    struct MyStr S1;
    S1.parth = "Hello Parth";
    printf("%s\n",S1.parth);
    S1.a = 13;
    printf("%d\n",S1.a);
    S1.b ='P';
      printf("%c\n",S1.b);
     
     return 0;
}