#include<iostream>
using namespace std;

class stack{
        int head;
        int *arr;
        int capacity;
    public:
       stack(){
         capacity=4;
         arr=new int[capacity];
         head=0;
       }

       void push(int a){
           if(head==capacity){
              capacity=capacity*2;
              int *newArray=new int[capacity];
              for(int i=0;i<capacity;i++){
                  newArray[i]=arr[i];
              }
              delete []arr;
              arr=newArray;
           }
          arr[head]=a;
          head++;

       }

      int top(){
          return arr[head-1];
      }

      int getCapacity(){
          return capacity;
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
   stack s1;

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
   cout<<s1.getCapacity()<<endl;

}