#include<iostream>
using namespace std;

void removeConDuplicate(char str[]){
    int i,k;
    char current;
    for(i=1,k=1;str[i]!='\0';i++){
        current=str[k-1];
        if(current!=str[i]){
            str[k]=str[i];
            k++;
        }   
    }
    str[k]='\0';
}

int main(){
    char str[20];
    cin>>str;
    removeConDuplicate(str);
    cout<<str;
}