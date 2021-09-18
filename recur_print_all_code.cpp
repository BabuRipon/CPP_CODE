#include<iostream>
using namespace std;

int intConvert(string s){
    int num=0;
    for(int i=0;i<s.length();i++){
        num=num*10+(s[i]-'0');
    }
  return num;
}

void recur(string s,string output){
  if(s.empty()){
      cout<<output<<endl;
      return ;
  }

    int num1=intConvert(s.substr(0,1));
    char ch='a'+num1-1;
    recur(s.substr(1),ch+output);

    int num2=intConvert(s.substr(0,2));

    if(num2>=10&&num2<=26){
        char ch='a'+num2-1;
        recur(s.substr(2),ch+output);
    }



}

void printAllCode(string input){
    string output="";
    recur(input,output);
}

int main(){
  string s="1123";
  printAllCode(s);
}