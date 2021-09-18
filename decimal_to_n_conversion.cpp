#include<iostream>
using namespace std;

char* decimal_to_n(int n,int num){
   char arr[]={49,50,'a'};
    string s="";
   for(int i=0;i<3;i++){
       s=s+arr[i];
   }
   return s;
}

int main(){
    char* finalAns=decimal_to_n(12,123);
    cout<<finalAns;
}