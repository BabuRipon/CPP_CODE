#include<iostream>
#include<string.h>
using namespace std;

class student{
    int age;
    char *name;

    public:
       student(int age,char *name){
           this->age=age;
           //this is shallow copy
        //    this->name=name;

           //deep copy
           (*this).name=new char[strlen(name)+1];
           strcpy(this->name,name);
       }

       student(student const &s){
          age=s.age;
          this->name=new char[strlen(s.name)+1];
          strcpy(this->name,s.name);
       }

       void print(){
           cout<<age<<" "<<name<<endl;
       }

   

};


int main(){



//   char name[10]="ripon";
//   student *s1=new student(25,name);

//   s1->print();
//   student s(*s1);
//   s.name[0]='b';
  
//   s.print() ;
//   s1->print();

//   s1->print();

//   name[3]='r';

//   student *s2=new student(12,name);

//   (*s2).print();
//   (*s1).print();
  
//   cout<<&name<<endl;
//   cout<<&s1->name<<endl;
//   cout<<&s2->name<<endl;

//   delete s1;
//   delete s2;

}
