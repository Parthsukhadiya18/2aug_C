#include <stdio.h>
//    create function
void messege()
{
    printf("Hello!\n");
}

 int sum(int a){
    return 5+a;
 }
 int add(int a ,int  b){
    return b+a;
 }


 int myNumber(int Number[5]){
    for(int i=0;i<5;i++){
        printf("%d\t",Number[i]+Number[i]);
    }
    return 0;
 }
int main()
{
    messege();
     printf("sum  one number %d \n",sum(2));
      printf("sum  two number %d \n ",add(5,8));
      int num[5] = {1,2,3,4,5};
      myNumber(num[5]);
    return 0;
}