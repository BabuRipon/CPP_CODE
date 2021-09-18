#include<iostream>
using namespace std;

int main(){
    int num;
    int sum=0;
    while(cin>>num){
        if(num==113){
            break;
        }
       sum+=num;
    }
    cout<<sum/3;
}