#include<iostream>
using namespace std;

class stack{
        int head;
        int *arr;
        int capacity;
    public:
       stack(int s){
         arr=new int[s];
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

      int top(){
          return arr[head-1];
      }

      int size(){
           return head;
      }

      bool isEmpty(){
          return head==0;
      }

    int pop(){
        if(head==-1){
            cout<<"stack is empty you can not pop value"<<endl;
            return 0;
        }
        head--;
        return arr[head];
    }

      

};

int main(){
   stack s1(5);
   s1.push(10);
   s1.push(5);
   s1.push(23);
   s1.push(45);
   s1.push(55);
   s1.push(65);
   cout<<s1.pop()<<endl;
   cout<<s1.pop()<<endl;
   cout<<s1.pop()<<endl;
   cout<<s1.isEmpty()<<endl;
   cout<<s1.size()<<endl;

}