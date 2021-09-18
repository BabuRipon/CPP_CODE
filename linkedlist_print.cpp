#include<iostream>
using namespace std;

class Node{
    public:

    int age;
    Node *next;

    Node(int age){
         this->age=age;
         this->next=NULL;
      }

};

 void print(Node *head){
       while (head!=NULL)
       {
           cout<<head->age<<" ";
           head=head->next;
       }
       
    }

int main(){
    // Node n1(1);
    // Node n2(2);
    // Node n3(3);
    // Node n4(4);
    Node *n1=new Node(1);
    Node *n2=new Node(2);
    Node *n3=new Node(3);
    Node *n4=new Node(4);

    Node *head=n1;
    // n1.next=&n2;
    // n2.next=&n3;
    // n3.next=&n4;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;

    print(head);

    delete n1,n2,n3,n4;
   
}