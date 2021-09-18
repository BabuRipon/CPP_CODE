#include<iostream>
using namespace std;

template<typename T>
class Node{
    public:
        Node<T>* next;
        T data;
    Node(T d){
      this->data=d;
      this->next=NULL;
    }
};

template<typename T>
class Queue{

    Node<T>* head;
    Node<T>* tail;
    int size;

    public:

    Queue(){
        head=NULL;
        tail=NULL;
        size=0;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size==0;
    }

    T front(){
        if(head==NULL){
            cout<<"front doesn't exist cause queue is empty"<<endl;
            return 0;
        }

        return head->data;
    }

    void enque(T elemValue){
        Node<T>* newnode=new Node<T>(elemValue);

        if(head==NULL){
            head=newnode;
            tail=newnode;
            size++;
            return;
        }

        tail->next=newnode;
        tail=newnode;
        size++;
    }

    T dequeue(){
        if(size==0){
            cout<<"queue is empty already"<<endl;
            return 0;
        }
       T result=head->data;
       Node<T>* temp=head;
       head=head->next;
       delete []temp;
       size--;
       return result;
    }


};

int main(){
   Queue<int> q;

   q.enque(10);
   q.enque(20);
   q.enque(30);
   q.enque(40);

   cout<<q.dequeue()<<endl;
   cout<<q.front()<<endl;
   cout<<q.isEmpty()<<endl;
   cout<<q.getSize()<<endl;
}