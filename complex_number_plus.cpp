#include<iostream>
using namespace std;

class complex{
private:
   int real,imaginary;

public:
   complex(int real,int imaginary){
       this->real=real;
       (*this).imaginary=imaginary;
   }
   void add(complex c2){
       this->real=real+c2.real;
       this->imaginary=imaginary+c2.imaginary;
   }

   void print(){
       cout<<real<<'+'<<imaginary<<'i'<<endl;
   }

};

// int main{
//   complex *c1=new complex(1,2);

// //    (*c1).add(*c2);
// //    cout<<c1->print()<<endl;

// //    delete c1;
// //    delete c2;
// }

int main(){
    complex *c1=new complex(1,2);
    complex *c2=new complex(2,3);

    (*c1).add(*c2);
    c1->print();

   delete c1;
   delete c2;
}