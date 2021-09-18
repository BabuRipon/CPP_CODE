#include<iostream>
using namespace std;

class students{
    public :
      int age;
      students(int age){
          cout<<"constructor"<<endl;
          this->age=age;
      }

      ~students(){
          cout<<"Destructure has called "<<endl;
      }
};

int main(){
   students s1(12);
   cout<<s1.age<<endl;
   students *s2=new students(s1);//copy construtor
   cout<<(*s2).age<<endl;

   students s3=*s2;//copy constructor

   students s4(15);


   *s2=s4;//copy assign operator

    cout<<(*s2).age<<endl;

   cout<<s3.age<<endl;

   delete s2;
}