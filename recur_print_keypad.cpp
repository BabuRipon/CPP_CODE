#include<iostream>
using namespace std;

void recur(int n,string str[],string output){
  if(n==0){
      cout<<output<<endl;
      return ;
  }
  int num=n%10;
  string s=str[num-1];
  for(int i=0;i<s.size();i++){
      recur(n/10,str,s[i]+output);
  }
}

void print_sub_sequence(int n){
  string arr[]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  string output="";
  recur(n,arr,output);
}

int main(){
    int n;
    cin>>n;
    print_sub_sequence(n);
}