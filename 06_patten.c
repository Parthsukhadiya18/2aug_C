#include<stdio.h>
 main(){
    int i,j;

    // for(i=0;i<5;i++){
    //     printf("*");
    // }
    // printf("\n");
    //  for(i=0;i<5;i++){
    //     printf("*");
    // }
//   row 
    // for(i = 1; i <=5; i++)
    // {
    //     // column 
    //     for ( j = 1; j <=5; j++)
    //     {
    //      printf("*");
    //     }
    //     printf("\n");
      
    // }

    // // number 
    //  for(i = 1; i <=5; i++)
    // {
    //     // column 
    //     for ( j = 1; j <=5; j++)
    //     {
    //      printf("%d",i);
    //     }
    //     printf("\n");
        
      
    // }
    // // number j  
    //  for(i = 1; i <=5; i++)
    // {
    //     // column 
    //     for ( j = 1; j <=5; j++)
    //     {
    //      printf("%d",j);
    //     }
    //     printf("\n");
        
      
    // }
    //  // number 1 12 123 1234 12345
    //  for(i = 1; i <=5; i++)
    // {
    //     // column 
    //     for ( j = 1; j <=i; j++)
    //     {
    //      printf("%d",j);
    //     }
    //     printf("\n");
        
      
    // } 

    // // number 5 54 543 5432 54321 
    //  for(i = 5; i>=1; i--)
    // {
    //     // column 
    //     for ( j = 5; j>=i; j--)
    //     {
    //      printf("%d",j);
    //     }
    //     printf("\n");
        
      
    // }
  int k;
    // number 1 12 123 1234 12345
     for(i = 1; i <=5; i++)
    {
        for (k = 5; k>i; k--)
        {
           printf(" ");
        }
        
        // column 
        for ( j = 1; j <=i; j++)
        {
            printf("%d",j);
            if(j=2){
                break;
            }
         
        }
        printf("\n");
        
      
    } 
    
 }
