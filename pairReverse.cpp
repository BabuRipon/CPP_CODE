#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

void reverseArray(int arr[],int n){
   for(int i=0,j=1;i<n-1;i+=2,j+=2){
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
   }
}

int main(){
    int arr[10]={1,2,3,4,5};//rest of the element will be 0
    reverseArray(arr,5);
    printArray(arr,5);
}