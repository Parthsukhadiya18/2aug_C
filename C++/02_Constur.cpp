#include<iostream>
using namespace std;
class book{
    public:
    string  name;
    int page;
    //  Messege(){
    // cout<<" Hello";

    // }
     book(string n,int p){
       name=n;
       page=p;
    }

    
};
 main(){
book b1("english",200);
cout<<""<<b1.name<<" "<<b1.page;
}