#include<iostream>
using namespace std;
#define pi 2
int i=10;//call golbal variable you should not use it.it is vary risky.
#define MULTIPLY(a, b) a/b

int main(){
//    int r;
//    cin>>r;
//    cout<<pi*r*r;
  cout << MULTIPLY(5+3, 5+5);//10(5+3/5+5)
    return 0;

}