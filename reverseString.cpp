#include<iostream>
using namespace std;

void reverseSentence(char name[]){
    int len=0;
    for(;name[len]!='\0';len++){}
    for(int i=0,j=len-1;i<j;i++,j--){
        char temp=name[i];
        name[i]=name[j];
        name[j]=temp;
    }
}
int main(){
    char name[100];
    cin.getline(name,100);
    reverseSentence(name);
    cout<<name;
}