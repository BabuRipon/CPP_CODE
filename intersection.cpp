#include<iostream>
#include<climits>
using namespace std;


void createArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void intersection(int input1[],int input2[],int size1,int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(input1[i]==input2[j]){
                cout<<input1[i];
                input2[j]=INT_MIN;
                break;
            }
        }
    }
}

int main(){
    int arr1[50],arr2[50];
    int n1,n2;
    cin>>n1;
    createArray(arr1,n1);
    cin>>n2;
    createArray(arr2,n2);
    intersection(arr1,arr2,n1,n2);

}