#include<iostream>
using namespace std;

int findUnique(int arr[],int size){
   int result=arr[0];
   for(int i=1;i<size;i++){
       result=result^arr[i];
   }
   return result;
}

int main(){
    int arr[]={1,2,3,3,4,2,1};
    int element=findUnique(arr,7);
    cout<<element;
    cout<<(3^7);
}