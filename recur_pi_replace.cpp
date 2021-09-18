#include<iostream>
using namespace std;

void  changePi(char str[]){
    int len=0;
    for(;str[len]!='\0';len++){};
    if(len==1){
        return ;
    }
    changePi(str+1);
    if(str[0]=='p'&&str[1]=='i'){
         int len=0;
         for(;str[len]!='\0';len++){};
        for(;len>=2;len--){
           str[len+2]=str[len] ;
        }
        str[0]='3';
        str[1]='.';
        str[2]='1';
        str[3]='4';
    }
}

int main(){
    char str[100];
    cin>>str;
    changePi(str);
    cout<<str;
}