#include<iostream>
using namespace std;
class Paa{
    public:
    int Manny=100000;
};
class Mom{
    public:
    string Gold ="chain";
};
class Child:public Mom,public Paa {
  
    
};
int main(){
Child C1;
cout <<C1.Gold <<" "<<C1.Manny;
}