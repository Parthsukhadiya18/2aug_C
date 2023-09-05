#include<iostream>
using namespace std;
// class colletiion of objects 
// objects instance of class 

class MyClass{
    public:
    int a;
    string mystring;
};
int main(){
   MyClass P1;
   MyClass P2;
   P1.a = 12;
   P1.mystring ="Parth";
   P2.a = 14;
   cout<<P1.a <<P1.mystring << '\n';
   cout<<P2.a<< '\n' <<P2.a;
   return 0;
}

