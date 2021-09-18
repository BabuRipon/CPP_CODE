#include<iostream>
using namespace std;

int findMinElement(int arr[],int i,int j){
    int minElement=arr[i],minIndex=i;
    i++;
    while(i<j){
        if(minElement>arr[i]){
            minElement=arr[i];
            minIndex=i;
        }
        i++;
    }
    return minIndex;
}

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=findMinElement(arr,i+1,n);
        // swap
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
}

int main(){
    // int n;cin>>n;
    int arr[50]={3,48,21,1,66,7};
    selectionSort(arr,6);
   
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}