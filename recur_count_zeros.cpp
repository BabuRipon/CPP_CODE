#include<iostream>
using namespace std;

int countZeros(int n){
    if(n==0){
        return 0;
    }
    int ans=countZeros(n/10);
    if(n%10==0){
        return ans+1;
    }else{
        return ans;
    }
}

int main(){
    int n;
    cin>>n;
    int ans=countZeros(n);
    cout<<ans;
}