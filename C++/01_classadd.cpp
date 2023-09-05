#include<iostream>
using namespace std;
class Book{
    public:
    void  message(){
        cout<<"Hello User!";
    }
     int  add(int a, int b){
        cout<<"Sum of"<<a<<"+"<<b<<"="<<a+b;
    }
};
int main(){
   Book B1;
   B1.message();
   B1.add(2,4);
}