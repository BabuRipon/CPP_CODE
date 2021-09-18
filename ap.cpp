#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int num=0;
    for(int i=1,x=1;x<=n;i++){
       num=3*i+2;
       if(num%4==0){
          continue;
       } 
        cout<<num<<' ';
        x++;
    }
}