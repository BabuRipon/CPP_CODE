#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int j=1;
        int t=i;
        while(j<=i){
            cout<<t;
            t++;
            j++;
        }
        cout<<endl;
        i++;
    }
}