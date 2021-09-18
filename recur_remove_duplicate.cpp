#include<iostream>
using namespace std;

void removeDuplicate(char str[]){
  if(*str=='\0'){
      return ;
  }
  if(str[0]!=str[1]){
     removeDuplicate(str+1);
  }
  else{
      int i=1;
      for(;str[i]!='\0';i++){
          str[i-1]=str[i];
      }
      str[i-1]=str[i];
      removeDuplicate(str);
  }
}

int main(){
    char str[50];
    cin>>str;
    removeDuplicate(str);
    cout<<str;
}