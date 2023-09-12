#include <iostream>
using namespace std;
class car
{
private:
    string thery;
    string petrol;
    int number;

public:
    //  void setThery(string t){
    //   this->thery = t;
    // }
    // string getThery(){
    //     return thery;
    // }
    void Car(string t, string p, int n)
    {
        this->thery = t;
        this->petrol = p;
        this->number = n;
    }
    void setThery(string t)
    {
        this->thery = t;
    }
    string getThery()
    {
        return thery;
    }
    void setFuel(string p)
    {
        this->petrol = p;
    }
    string getFuel()
    {
        return petrol;
    }
    void setNumber(int n)
    {
        this->number = n;
    }
    int getNumber()
    {
        return number;
    }
};
int main()
{
    car c1;
    // c1.setThery("Parth");
    // c1.getThery();
    // cout<<c1.getThery();
    c1.setThery("Engine Detail ");
    c1.setFuel("petrol");
    c1.setNumber(123456);
    c1.getThery();
    c1.getThery();
    c1.getNumber();
    cout << c1.getThery() << c1.getNumber() << c1.getFuel();
}