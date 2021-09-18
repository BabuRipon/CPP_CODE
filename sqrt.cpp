#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=1;
    while(true){
  
        if(count*count<=n){
           count++;
          continue; 
        }

        break;
    }
    cout<<count-1;
}