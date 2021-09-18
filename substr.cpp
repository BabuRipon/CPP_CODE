#include<iostream>
using namespace std;

void substr(char str[]){
    int len=0;
    for(;str[len]!='\0';len++){};
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
           for(int k=i,l=j;k<=l;k++){
               cout<<str[k];
           }
           cout<<endl; 
        }
    }
}

int main(){
    char str[50];
    cin>>str;
    substr(str);
}