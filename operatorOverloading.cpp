#include<iostream>
using namespace std;

class student{
   
   public:
     int salary;
     student(int salary){
       this->salary=salary;
     }

     student operator+(student s){
         student s1(this->salary+s.salary);
         return s1;
     }
};

int main(){
    
    student s1(3);
    student s2(4);
    student s3=s1+s2;

    cout<<s3.salary;

}