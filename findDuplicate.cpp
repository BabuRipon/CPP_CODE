#include<iostream>
using namespace std;

int findUnique(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }      
        }

        if(flag){
            return arr[i];
        }
    }
}

int main(){
    int n;cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int number=findUnique(arr,n);
    cout<<number<<endl;
}