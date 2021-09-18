#include<iostream>
using namespace std;

int length(char arr[]){
    int i=0;
    for(;arr[i]!='\0';i++){
    }
    return i;
}

int main(){
   char name[20];
   cin>>name;
   cout<<"length : "<<length(name);
}