#include<iostream>
// single inhrtance
using namespace std;
class add{
     public:
     
     
     int sum(int a, int b){
       return a+b;
     }
};
class Cal: public add{
    public:
    int sub(int a, int b){
        cout<<a-b;
     }

};

int main(){
    Cal c1;
   cout<< c1.sum(10,35)<<" ";
   c1.sub(50,25);
    

}