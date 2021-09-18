#include<iostream>
using namespace std;

void findMaxSum(int arr[][20],int m,int n){
      int max=0,index;char status;
     
      for(int i=0;i<m;i++){
          int sum=0;
          for(int j=0;j<n;j++){
              sum+=arr[i][j];
          }
          if(sum>max){
              max=sum;
              index=i;
              status='r';
          }
      }

       for(int i=0;i<n;i++){
          int sum=0;
          for(int j=0;j<m;j++){
              sum+=arr[j][i];
          }
          if(sum>max){
              max=sum;
              index=i;
              status='c';
          }
      }
    if(status=='c'){
        cout<<"column"<<' ';
    }
    else{
        cout<<"row"<<' ';
    }
    cout<<index<<' '<<max;
}

int main(){
    int arr[20][20],m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    findMaxSum(arr,m,n);
}