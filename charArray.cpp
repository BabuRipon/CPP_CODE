#include<iostream>
using namespace std;

int main(){
    char name[20];
    cin>>name;
    cout<<name<<endl;
    name[2]='\0';
    cout<<name<<endl;
}