#include<stdio.h>
void my(int number[4]){
    for(int i=0;i<4;i++){
        printf("%d\t",number[i]);
    }
}
main(){
   int num[]={1,2,3,4};
    my(num);
}