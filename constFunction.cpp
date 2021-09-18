#include<iostream>
using namespace std;

class student{
    int age;
    static int totalStudent;
    public:
      student(int age){
          this->age=age;
          totalStudent++;
      }
      void print() const{
          cout<<this->age<<endl;
      }

      static int getTotalStudent(){
           return totalStudent;
      }
};

int student::totalStudent=0;

int main(){
   const student s(12);
   s.print();
   student s1(2),s2(23);
   cout<<student::getTotalStudent()<<endl;
}