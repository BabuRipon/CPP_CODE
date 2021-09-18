#include<iostream>
using namespace std;

void merge(int arr[],int si,int ei){

   int mid=(si+ei)/2;
   int j=mid+1;
   int temp[ei-si+1];
   int k=0,i=si;
   for(;si<=mid;){
       for(;j<=ei;){
           if(arr[si]<=arr[j]){
               temp[k]=arr[si];
               k++;
               si++;
               break;
           }else{
              temp[k]=arr[j];
              j++;
              k++;
           }
       }
       if(j>ei){
           break;
       }
   } 

  while(j<=ei){
      temp[k]=arr[j];
      k++;
      j++;
  }

  while(si<=mid){
      temp[k]=arr[si];
      si++;
      k++;
  }

  for(int k=0;i<=ei;i++,k++){
      arr[i]=temp[k];
  }
  

}

void merge_sort(int arr[],int si,int ei){
    if(si>=ei){
        return ;
    }
    int mid=(si+ei)/2;
    merge_sort(arr,si,mid);
    merge_sort(arr,mid+1,ei);
    merge(arr,si,ei);
}

int main(){
    int arr[]={100,7,7,1,68,3};
    merge_sort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}