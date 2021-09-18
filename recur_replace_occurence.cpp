#include<iostream>
using namespace std;

void replaceAtoB(char *str,char a,char b){
  if(*str=='\0'){
      return ;
  }
  replaceAtoB(str+1,a,b);
  if(*str==a){
     *str=b; 
  }
}

int main(){
    char str[50];
    cin>>str;
    replaceAtoB(str,'a','x');
    cout<<str;
}