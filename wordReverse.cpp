#include<iostream>
using namespace std;

void reverse(char str[],int i,int j){
   for(j=j-1;i<j;i++,j--){
       char temp=str[i];
       str[i]=str[j];
       str[j]=temp;
   }
}

void reverseWord(char str[]){
      int start=0,end=0,i=0;
      for(;str[i]!='\0';i++){
          if(str[i]==' '){
              end=i;
              reverse(str,start,end);
          }
          start=end+1;
      }
      end=i;
      reverse(str,start,end);
}

int main(){
    char str[20];
    cin.getline(str,20);
    reverseWord(str);
    cout<<str;
}