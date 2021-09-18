#include<iostream>
using namespace std;

int main(){
    // int a=10;
    // a+=5;
    // a/=5;
    // int b=a++;//post inc
    // int c=++a;//pre inc
    // int d=a--;
    // int e=--a;
    // cout<<a<<endl;//5
    // cout<<b<<endl;//3
    // cout<<c<<endl;//5
    // cout<<a++<<endl;//3
    // cout<<d<<endl;//5
    // cout<<e<<endl;//3
    // cout<<a<<endl;//4
    for(int i = 0; i < 5; i = i + 1) {
     if(i == 2) 
           break;//if break run run out of loop if continue then run loop but below code will not exec for that condintion
    cout << i << " ";
 } 
}