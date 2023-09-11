#include<iostream>
using namespace std;
class Emp{
    private:
    int salary;
    string email;
    public:
    void person(int a, string e){
          this->salary=a;
          this->email=e;

    }
    void setSalary(int a){
        this->salary = a;
    }
    int getsalary(){
        return salary;
    }
    void setEmail(string e){
         this->email = e;
    }
     string getEmail(){
        return email;
     }

};
int main(){
Emp E1;

E1.person(1000,"Parth@");
cout<<""<<E1.getsalary()<< " "<< E1.getEmail();

}