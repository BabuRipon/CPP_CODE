#include<iostream>
using namespace std;

void  changePi(char str[]){
    int len=0;
    for(;str[len]!='\0';len++){};
    if(len==0){
        return ;
    }
    changePi(str+1);
    if(str[0]=='x'){
        int len=0;
       for(;str[len]!='\0';len++){}; 
       for(int i=0;i<=len;i++){
          str[i]=str[i+1];
       }
    }
}

int main(){
    char str[100];
    cin>>str;
    changePi(str);
    cout<<str;
}