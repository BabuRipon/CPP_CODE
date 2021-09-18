#include<iostream>
using namespace std;

void printSubSequence(string s,string output){
  if(s.empty()){
      cout<<output<<endl;
      return ;
  }
  printSubSequence(s.substr(1),output);
  printSubSequence(s.substr(1),output+s[0]);
}

int main(){
    string s,output="";
    cin>>s;
    printSubSequence(s,output);
}