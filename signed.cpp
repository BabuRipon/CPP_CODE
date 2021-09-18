#include<iostream>
using namespace std;

int main(){
    // int a=-5;
    // unsigned int a=-5;;
    // char a=114;
    // cout<<a;
    // cout<<char(90)<<endl;
    // cout<<char(122)<<endl;

    char c;
    cout<<"enter a char"<<endl;
    cin>>c;
    int i=0;
    bool flag=false;
    while(i<26){
       
       if(char(65+i)==c){
           cout<<1;
           flag=true;
           break;
       }
       else if(char(97+i)==c){
          cout<<0;
          flag=true;
          break;
       }

       i=i+1;
    }

    if(!flag){
        cout<<-1;
    }

}