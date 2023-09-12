#include<iostream>
using namespace std;
class My{
public:
int a;
// private:
// int s;
protected:
int no;
};
int main(){
My M1;
M1.a=12;
cout<<M1.a;
// M1.s;
// cout<<M1.s;
M1.no =123;
cout<<M1.no;
}