#include<stdio.h>
int main(){
  // int a = 12;
  //  a = 13;
  // int* ptr = &a;
  // printf("%d\n",a);
  // printf("%d\n",&a);
  //   printf("%p\n",ptr);
  //    printf("%d\n",*ptr);
     int a[]={1,2,3,4,5};
     int *ptr1 = a;
  // printf("%p\n",&ptr1);
  // printf("%d\n",*ptr1);
  // printf("%d\n",*(ptr1+1));
  for(int i=0;i<5;i++){
    printf("%d \n",*(ptr1+i));

    printf("%p \n",&ptr1+i);
  }



}