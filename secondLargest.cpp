#include<iostream>
using namespace std;

int FindElement(int arr[],int n){
    int s=-2147483648,f=-2147483648;
    for(int i=0;i<n;i++){
        if(arr[i]>=f){
            int temp=f;
            f=arr[i];
            if(temp>s&&temp!=f){
                s=temp;
            }
        }else{
            if(s<arr[i]){
                s=arr[i];
            }
        }
    }
    return s;
}

int main(){
 int arr[]={9,3,6 ,2 ,9};
   int Element=FindElement(arr,5);
   cout<<Element;
 }