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

    int temp=arr[si];
    arr[si]=arr[pi];
    arr[pi]=temp;

    for(;si<pi&&ei>pi;){
        if(arr[si]<=arr[pi]){
            si++;
        }
        else if(arr[ei]>arr[pi]){
            ei--;
        }
        else{
            int temp=arr[si];
            arr[si]=arr[ei];
            arr[ei]=temp;
            ei--;
            si++;
        }
    }


    return pi;
}

void quick_sort(int arr[],int si,int ei){
    if(si>=ei){
        return ;
    }
    int pi=partition(arr,si,ei);
    quick_sort(arr,si,pi-1);
    quick_sort(arr,pi+1,ei);
}

int main(){
    int arr[]={4,1,24,2,6,0};
    quick_sort(arr,0,5);
    for(int i=0;i<6;i++){
       cout<<arr[i]<<' ';
    }
}