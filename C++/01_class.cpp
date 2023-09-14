#include<iostream>
using namespace std;
class Book{
  public:
  int a;
  

  void page(){
      cout<< "Hello Page!";
   }
   int sum(int a, int b){
       cout<<a+b;
   }

 int sub(int a, int b){
       return a-b;
   }
   private:
   string c;
     protected:
   string d;

};
int main(){
   Book B1;
   B1.a = 12;
   cout<<B1.a<<" " ;
   B1.page();
   B1.sum(70,1);
  cout<< B1.sub(10,5);
  // B1.c={"parth"};
  //   B1.d={"parth"};
}