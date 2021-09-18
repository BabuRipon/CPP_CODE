#include<iostream>
using namespace std;

/*
void pushZeroToEnd(int arr[],int n){
    int temp[n],k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[k]=arr[i];
            k++;
        }
    }
    for(;k<n;k++){
        temp[k]=0;
    }
   
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }   
}
*/

void pushZeroToEnd(int arr[],int n){
    int i=0,k=0;
    for(;i<n;i++){
        if(arr[i]!=0){
          int temp=arr[i];
          arr[i]=arr[k];
          arr[k]=temp;
          k++;   
        }
    }
}

int main(){
    int arr[10]={1,2,0,0,3,0};
    pushZeroToEnd(arr,6);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<' ';
    }
}