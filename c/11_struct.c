#include<stdio.h>
#include<string.h>
//   declaration 
 struct My
    {
       int a;
       char  b;
       char str1[50];
    };
int main(){
   struct My S1;
    //  struct My S2;
   S1.a =12;
   S1.b= 'C';
//    S1.str1= "Parth";
   strcpy(S1.str1,"Parth is good");
//    S2.a= 13;
//    S2.a = 14;
//    S2.b = 'b';
    //   struct My S1 ={12,'c'};
    //    struct My S2 ={102,'P'};
   printf("%d %c %s\n",S1.a,S1.b,S1.str1);
    // printf("%d %c\n",S2.a,S2.b);
    // printf("%c ",S1.b);
    // string printf 
//      struct My S1 ={12,'c',"Parth is god"};
//    printf("%d %c %s\n",S1.a,S1.b,S1.str1);

 
   
    
    
}