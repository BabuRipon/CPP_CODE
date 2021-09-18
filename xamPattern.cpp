#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    int value=1;
    int k=1;
    while(i<=n){
       int j=1;
       int counter=0;
       bool enter=false;
       while(j<=k){
          
          if(!enter){
              cout<<value;
          value++;
          j++;
          counter++;
          }
          if(value>=10){
              enter=true;
              value=1;
              while(value<10 && j<=k){
                  cout<<value;
                  value++;
                  counter++;
                  j++;
              }
            
          }
       }
       k=counter*2;
       cout<<endl;
       i++;
    }
}