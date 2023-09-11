#include<stdio.h>
struct Emp{
    char E_name[10];
    int E_no;
    char E_address[10];
    int E_Age;

};
int main(){
  struct Emp E1={"parth1",12,"Surat1",1000};
   printf("%s %d %s %d \n",E1.E_name,E1.E_no,E1.E_address,E1.E_Age);

   
  struct Emp E2={"parth2",22,"Surat2",21000};
  struct Emp E3={"parth3",32,"Surat3",3000};
  struct Emp E4={"parth4",42,"Surat4",4000};
  struct Emp E5={"parth5",52,"Surat5",5000};
 
 
   printf("%s %d %s %d \n",E2.E_name,E2.E_no,E2.E_address,E2.E_Age);
    printf("%s %d %s %d \n",E3.E_name,E3.E_no,E3.E_address,E3.E_Age);
     printf("%s %d %s %d \n",E4.E_name,E4.E_no,E4.E_address,E4.E_Age);
      printf("%s %d %s %d \n",E5.E_name,E5.E_no,E5.E_address,E5.E_Age);
  return 0;
  
}