#include<iostream>
using namespace std;

int findIndex(int arr[],int x,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
  int t;
  cin>>t;
  while(t--){
      int n,arr[100],x;
      cin>>n;
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      cin>>x;
      int index=findIndex(arr,x,n);
      cout<<index<<endl;
  }
}