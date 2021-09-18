#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int num=0;
    for(;n!=0;n/=10){
        num=num*10+(n%10);
    }
    cout<<num;
}