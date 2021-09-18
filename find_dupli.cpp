#include<iostream>
using namespace std;

int findDulpicate(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
 
   int n_2_sum=((size-1)*(size-2))/2;

   return sum-n_2_sum;

}

int main(){
    int arr[]={0,1,2,3,4,5,5};
    int dupli=findDulpicate(arr,7);
    cout<<dupli;
}