#include<iostream>
using namespace std;

void SortArray(int arr[],int n){
   int one=0,zero=0,two=0;
   for(int i=0;i<n;i++){
       if(arr[i]==0){
           zero++;
       }else if(arr[i]==1){
           one++;
       }
   }
   for(int i=0;i<n;i++){
       if(zero){
           arr[i]=0;
           one--;
       }else if(one){
          arr[i]=1;
          one--;
       }else{
           arr[i]=2;
       }
   }
}

int main(){
    int arr[]={0,1,2,1,0,2,0};
    SortArray(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<' ';
    }
}