#include <iostream>
using namespace std;


void recur(int arr[],int n,int k,int output[],int count){
    if(n==0){
        if(k==0){
           for(int i=0;i<count;i++){
               cout<<output[i]<<" ";
           } 
           cout<<endl;
        }
        return ;
    }

  recur(arr+1,n-1,k,output,count);
  output[count]=arr[0];
  count++;
  recur(arr+1,n-1,k-arr[0],output,count);

}


void printSubsetSumToK(int input[], int size, int k) {
    int output[1000];
    int count=0;
    recur(input,size,k,output,count);
}


int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}