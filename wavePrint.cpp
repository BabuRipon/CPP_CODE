#include<iostream>
using namespace std;

void printWave(int arr[][20],int m,int n){
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<arr[j][i]<<' ';
            }
        }else{
            for(int j=m-1;j>=0;j--){
                cout<<arr[j][i]<<' ';
            }
            
        }
    }
}

int main(){
     int arr[20][20],m,n;
      cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    printWave(arr,m,n);
}