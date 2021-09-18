#include<iostream>
using namespace std;

int main(){
    int n;long num=0,pv=1;
    cin>>n;
   for(;n!=0;n/=2,pv*=10){
       num=num+pv*(n%2);
   }
   cout<<num;

}