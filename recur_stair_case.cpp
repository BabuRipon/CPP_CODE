#include<iostream>
using namespace std;

int stairCase(int n){
    if(n==0||n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }

    int one=stairCase(n-1);
    int two=stairCase(n-2);
    int three=stairCase(n-3);

    return one+two+three;
}

int main(){
    int n;
    cin>>n;
    int ans=stairCase(n);
    cout<<ans;
}