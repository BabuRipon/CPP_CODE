#include<iostream>
using namespace std;

int binary_search(int arr[],int i,int j,int x){
    if(i>j){
        return -1;
    }

   int mid=(i+j)/2;
    int ans;
   if(arr[mid]==x){
       return mid;
   }


   if(arr[mid]<x){
       i=mid+1;
       ans= binary_search(arr,i,j,x);
   }
   else{
       j=mid-1;
       ans= binary_search(arr,i,j,x);
   }

   return ans;

}

int main(){
    int arr[]={2,3,4,5,6,8};
    int ans=binary_search(arr,0,5,8);
    cout<<ans;
}