#include<iostream>
using namespace std;

template<typename T>

class stack{
        int head;
        T *arr;
        int capacity;
    public:
       stack(int s){
         arr=new T[s];
         head=0;
         capacity=s;
       }

       void push(int a){
           if(head==capacity){
               cout<<"stack is full now you can not enter value into the stack"<<endl;
               return;
           }
          arr[head]=a;
          head++;

       }

      T top(){
          return arr[head-1];
      }

      int size(){
           return head;
      }

      bool isEmpty(){
          return head==0;
      }

    T pop(){
        if(head==-1){
            cout<<"stack is empty you can not pop value"<<endl;
            return 0;
        }
        head--;
        return arr[head];
    }

      

};

int main(){
//    stack<int> s1(5);
     stack<char> s1(5);
   s1.push(100);
   s1.push(101);
   s1.push(102);
   s1.push(103);
   s1.push(104);
   cout<<s1.pop()<<endl;
   cout<<s1.pop()<<endl;
   cout<<s1.pop()<<endl;
   cout<<s1.pop()<<endl;
   string result=s1.isEmpty()?"empty":"not empty";
   cout<<result<<endl;
   cout<<s1.size()<<endl;

}