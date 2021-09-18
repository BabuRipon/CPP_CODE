#include<iostream>
using namespace std;

int main(){
    // int *p=new int;//dynamic allocation
    // *p=20;
    // cout<<p<<endl;
    // cout<<*p<<endl; 
    // delete p;
    // cout<<p<<endl;
    // cout<<*(&p)<<endl;
    // cout<<*p<<endl;

    // int n;cin>>n;
    // int *arr=new int[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // delete []arr;

    // cout<<arr[0];

    int m,n;
    cin>>m>>n;
    int **p=new int*[m];
    for(int i=0;i<m;i++){
       p[i]=new int[n];
       for(int j=0;j<n;j++){
           cin>>p[i][j];
       }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<p[i][j]<<' ';
        }
        cout<<endl;
    }

    for(int i=0;i<m;i++){
        delete []p[i];
    }
    // cout<<*p[0];//0
    delete []p;
}