#include<iostream>
using namespace std;

double geometricSum(int n){
    if(n==0){
        return 1.0;
    }

    double ans=geometricSum(n-1);

    int mul=1;
    for(int i=0;i<n;i++){
        mul*=2;
    }

    return ans+(1.0/mul);

}

int main(){
    int n;
    cin>>n;
    double ans=geometricSum(n);
    cout<<ans;
}