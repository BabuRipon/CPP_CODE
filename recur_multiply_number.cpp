#include<iostream>
using namespace std;

//using only addtion operator;
int multiply(int m,int n){
    if(n==1){
        return m;
    }
    int ans=multiply(m,n-1);
    return m+ans;
}

int main(){
    int n,m;
    cin>>m>>n;
    int ans=multiply(m,n);
    cout<<ans;
}