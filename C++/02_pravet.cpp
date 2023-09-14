#include<iostream>
using namespace std;
class Car{
    private:
    int balence;
    public:
    void  setData(int b){
         balence = b;
    }
    int getData(){
        return balence;
    }



};
int main(){
Car C1;
C1.setData(1000);
C1.getData();
cout<<C1.getData();
}
