#include<iostream>
using namespace std;
class My{
    public:
    // int a;
    // char b;
    // string C;
   int parth(int a,int b,int c){
    int z= a+b-c;
    return z;
    }
};
int main(){
    // objets 
    My M1;
    // M1.a = 12;
    // M1.b ='a';
    // M1.C ="Hello Parth";
    cout<< M1.parth(2,3,1);
    // cout<<M1.a<<" "<<M1.b<<" "<<M1.C;
}