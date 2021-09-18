#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei){
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[si]>=arr[i]){
            count++;
        }
    }

   int pi=si+count;

   int temp=arr[pi];
   arr[pi]=arr[si];
   arr[si]=temp;

   for(;si<pi&&ei>pi;){
       if(arr[si]<=arr[pi]){
           si++;
       }
       else if(arr[pi]<arr[ei]){
           ei--;
       }
       else{
           int temp=arr[si];
           arr[si]=arr[ei];
           arr[ei]=temp;
           si++;
           ei--;
       }
   }

   return pi;

}

void quickSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int pi=partition(arr,si,ei);
    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);
}

int main(){
    int arr[]={44,5,8,6,2,1,5};
    quickSort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<' ';
    }
}