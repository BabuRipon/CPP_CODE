#include<iostream>
using namespace std;

void spiralPrint(int input[][20],int m,int n){
     int count=0;
     int rows=0,rowe=m-1,cols=0,cole=n-1;
     while(count<m*n){
         
          for(int i=cols;i<=cole;i++){
              cout<<input[rows][i]<<' ';
              count++;
          }
          rows++;
          for(int i=rows;i<=rowe;i++){
              cout<<input[i][cole]<<' ';
              count++;
          }
          cole--;
          for(int i=cole;i>=cols;i--){
               cout<<input[rowe][i]<<' ';
               count++;
          }
          rowe--;
          for(int i=rowe;i>=rows;i--){
              cout<<input[i][cols]<<' ';
              count++;
          }
          cols++;
     }
}

int main(){
    int m,n,input[20][20];
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>input[i][j];
        }
    }
    spiralPrint(input,m,n);
}