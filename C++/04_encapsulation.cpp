#include<iostream>
using namespace std;
class Emp{
    private:
    int salary;
    string email;
    public:
    void setSalary(int s){
        salary = s;
    }
    int getsalary(){
        return salary;
    }
    void setData(string e){
         email = e;
    }
     string getData(){
        return email;
     }

};
int main(){
Emp E1;
Emp E2;
// cout<<E1.salary;
E1.setSalary(1000);
E1.getsalary();
cout<<E1.getsalary();
E2.setSalary(2000);
E2.getsalary();
cout<<E2.getsalary();
E1.setData("Parth@gmail.com");
E1.getData();
cout<<"\n"<<E1.getData();
}