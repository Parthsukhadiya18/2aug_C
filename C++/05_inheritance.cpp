#include<iostream>
using namespace std;

class Perent{
    public:
    int c=12;
};
class Child:public Perent{
    public:
    string ab;
};
int main(){
//   Perent P1;
 Child C1;
//  C1.c;
 cout<<C1.c;
}


