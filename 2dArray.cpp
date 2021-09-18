#include<iostream>
using namespace std;


int main(){
    int arr[20][20], n,m;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            count+=arr[j][i];
        }
        cout<<count<<' ';
    }

    // for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }
    
}