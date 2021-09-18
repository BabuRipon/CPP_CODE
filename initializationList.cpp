#include<iostream>
using namespace std;

class student{
  int age;
  int const rollno;
  int &x;

  public:
     student(int age,int rollno):age(age),rollno(rollno),x(this->age){

     }

    void print(){
        cout<<age<<" "<<rollno<<" "<<x<<endl;
        cout<<&age<<" "<<&x<<endl;
    }
};

int main(){
    student s(12,11709535);

    s.print();

}