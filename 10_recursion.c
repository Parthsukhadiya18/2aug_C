#include<stdio.h>
int sum(int a){

    int b =0;
    if(a>0){
        
       b = a + sum(a-1) ;
    }else{
        return 0;
    }
}
int main(){
  printf("%d",sum(10));
    return 0;
}