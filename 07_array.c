#include <stdio.h>
int main()
{
    // array
    // int a[10] = {100, 1, 3};
    int a[10];
    int b[10];
    // printf("%d\n",a[0]);
    // printf("%d\n",a[1]);
    //   printf("%d\n",a[2]);

    //   for(int i=0;i<3;i++){
    //     printf("%d \t",a[i]);
    //   }
    printf("enter Array a and b:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
     for (int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");
     for (int i = 0; i < 5; i++)
    {
        printf("%d \t", b[i]);
    }
      printf("\n");
      int c[10];
      
     for (int i = 0; i < 5; i++)
    {
        printf("%d \t",  c[i] = a[i]+b[i]);
    }

    return 0;
}