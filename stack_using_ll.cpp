#include<iostream>
using namespace std;

class Node{
    int  data;
    Node *next;

    public:

    Node(int data,Node *pt){
        this->data=data;
        next=pt;
    }

    int getData(Node *n){
          return n->data;
    }

    Node* getPreviousNode(Node* n){
        return n->next;
    }

};

class Stack{
    Node *head;
    int count;

    public:

        Stack(){
            this->head=NULL;
            this->count=0;
        }
       
       void push(int data){
           if(head==NULL){
               head=new Node(data,NULL);
               this->count++;
               return ;
           }

           Node *h=new Node(data,head);
           head=h;
           count++;
       }

       int top(){
           if(head==NULL){
               return 0;
           }

           return head->getData(head);
       }

     int pop(){
         if(head==NULL){
             return 0;
         }
         Node *temp=head->getPreviousNode(head);
         int data=head->getData(head);
         delete []head;
         head=temp;
         count--;
         return data;
     }

     int getSize(){
         return count;
     }

     bool isEmpty(){
         return head==NULL;
     }

 
};

int main(){
    Stack st;
    st.push(100);
    st.push(500);
    st.push(32);
    cout<<st.top()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.isEmpty()<<endl;
    cout<<st.top()<<endl;
    cout<<st.getSize()<<endl;
}