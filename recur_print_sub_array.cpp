#include<iostream>
using namespace std;

void print_sub_array(int arr[],int n,int output[],int k){
    if(n==0){
        for(int i=0;i<k;i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    print_sub_array(arr+1,n-1,output,k);
    output[k]=arr[0];
    k++;
    print_sub_array(arr+1,n-1,output,k);

}

void sub_array(int arr[],int n){
    int output[100];
    int k=0;
    print_sub_array(arr,n,output,k);
}

int main(){
    int arr[]={1,2,3};
    sub_array(arr,3);

    return 0;
}