#include<iostream>
using namespace std;

int binary(int arr[],int n,int x){
  for(int i=0,j=n-1;i<=j;){
      int mid=(i+j)/2;
      if(arr[mid]==x){
          return mid;
      }
      else if(arr[mid]<x){
          i=mid+1;
      }
      else{
        j=mid-1;
      }
  }

  return 0;
}

int main(){
    int arr[50],n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int index=binary(arr,n,x);
    cout<<index;

}
