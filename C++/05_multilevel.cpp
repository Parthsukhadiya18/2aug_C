#include<iostream>
using namespace  std;
class GrandPaa{
  public:
    void car(){
    cout<<"Your New BMW \n";
  }
};
class Perent:public GrandPaa{
  public:
  void Home(){
    cout<<"4BHK ";
  }
};
class Child:public Perent{
  public:
  int book;
};
int main(){
Child c1;
c1.book = 12;
cout<<c1.book<<"\n";
c1.car();
c1.Home();
}

