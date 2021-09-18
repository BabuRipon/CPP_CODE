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

Node* takeInput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *temp=NULL;
    while(data!=-1){
        Node *n=new Node(data);
        if(head==NULL){
           head=n;
           temp=n;
        }else{
            // Node *temp=head;
            // while(temp->next!=NULL){
            //     temp=temp->next;
            // }

            // temp->next=n;
            temp->next=n;
            temp=n;
        }
        cin>>data;
    }

    return head;
}

Node* insertIthNode(Node *head,int pos,int data){
    Node *temp=head;
    Node *n=new Node(data);
    if(pos==0){
       n->next=head;
       head=n;
       return head;
    }

    for(int i=0;i<pos-1 && temp->next!=NULL;i++){
         temp=temp->next;
    }

   if(temp->next!=NULL){
       n->next=temp->next;
       temp->next=n;
   }

   return head;

}

 void print(Node *head){
       while (head!=NULL)
       {
           cout<<head->age<<" ";
           head=head->next;
       }
       
    }

int main(){
   Node *head=takeInput();
   head=insertIthNode(head,0,10);
   print(head);
}