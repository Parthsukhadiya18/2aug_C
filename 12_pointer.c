#include<stdio.h>
int main(){
    // int a = 23;
    // int *ptr= &a;
    // printf(" printf %d\n",a);
    //  printf(" address %d\n",&a);
    //   printf(" ponter %p\n",ptr);
    //     printf(" ponter %d\n",*ptr);
        int c[]={1,2,3,4,5};
        int *ptr = c;
        // for(int i=0;i<5;i++){
        //     printf("%d\n",c[i]);
        // }
        // printf("%d",*ptr);
        //    printf("%d",*(ptr+10));

  for(int i=0;i<5;i++){
            printf("%d\n",*(ptr+i));
              printf("%p\n",(ptr+i));
        }
}