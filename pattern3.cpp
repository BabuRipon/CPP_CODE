#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    int value=1;
    while(i<=n){
      int j=1;
      int s=1;
      while(s<=n-i){
         cout<<" ";
         s++;
      }
      while(j<=i){
          cout<<value;
          value++;
          j++;
      }
      cout<<endl;
      i++;
    }
}