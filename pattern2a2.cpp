#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int i=1;
    while(i<=n){
       int space=1;
       while(space<=n-i){
           cout<<' ';
           space++;
       }
       int j=1;
       int value=i;
       while(j<=i){
           cout<<value;
           value++;
           j++;
       }
        j=1;
       value=value-2;
    //    while(j<=i-1){
    //      cout<<value;
    //      value--;
    //      j++;
    //    }
    while(value>=i){
        cout<<value;
        value--;
    }
       cout<<endl;
       i++;
    }
}