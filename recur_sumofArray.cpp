#include<iostream>
using namespace std;

int sum(int arr[],int size){
    if(size==1){
        return arr[0];
    }
    int ans=sum(arr+1,size-1);
    return arr[0]+ans;
}

int main(){
    int arr[]={1,2,3,4,5};
    int ans=sum(arr,5);
    cout<<ans<<endl;
}