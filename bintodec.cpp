#include<iostream>
using namespace std;

int main(){
    int n,num=0,pv=1;
    cin>>n;
   for(;n!=0;n/=10,pv*=2){
       num=num+pv*(n%10);
   }
   cout<<num;

}