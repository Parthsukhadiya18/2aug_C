#include<stdio.h>
int add(int a,int b){
       int c = a+b ;
    return c;
}
int sub(int a,int b){
       int c = a-b ;
    return c;
}
int mul(int a,int b){
       int c = a*b ;
    return c;
}
int main(){
    // printf("%d",add(5));
    printf("%d\n",add(5,10));
    printf("%d\n",add(10,10));
    printf("%d\n",sub(10,10));
    printf("%d\n",mul(10,7));
    


}