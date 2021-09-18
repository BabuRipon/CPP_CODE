#include<iostream>
using namespace std;

int main(){
    int res=0,a=1,b=0;
    int n;
    cin>>n;
    if(n==0||n==1){
        cout<<n;
    }else{
        for(int i=0;i<n;i++){
            res=a+b;
            b=a;
            a=res;
            // cout<<res<<" ";//for n fibonaci number
        }
        cout<<res;
    }
}