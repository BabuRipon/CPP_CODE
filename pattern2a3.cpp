#include<iostream>
using namespace std;

int main(){
    int n,n1;cin>>n1;
    n=n1/2+1;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<' ';
            space++;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        j=i-1;
        while(j>=1){
            cout<<'*';
            j--;
        }
        cout<<endl;
        i++;
    }
    i=1;
    while(i<n){
       int space=1;
       while(space<=i){
           cout<<' ';
           space++;
       } 
       int j=1;
       while(j<=n-i){
           cout<<'*';
           j++;
       }
       j=1;
       while(j<=n-i-1){
           cout<<'*';
           j++;
       }
       cout<<endl;
       i++;
    }
}