#include<iostream>
using namespace std;

void  bubleSort(int arr[],int n){
   for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
   }
}

int main(){
    int arr[50]={7,2,3,9,15,1};
    bubleSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<' ';
    }
}
