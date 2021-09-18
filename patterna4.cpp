#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int k=i-1;
        while(j<=i){
            cout<<char('A'+j+k-1);
            j++;
        }
        cout<<endl;
        i++;
    }
}