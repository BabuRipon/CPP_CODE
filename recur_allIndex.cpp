#include<iostream>
using namespace std;

//last element divide
int allIndex2(int input[],int size,int x,int output[]){
   if(size==0){
       return 0;
   }
   int ans=allIndex2(input,size-1,x,output);
   if(input[size-1]==x){
       output[ans]=size-1;
       return ans+1;
   }else{
       return ans;
   }
   
}

//first element divide
int allIndex1(int input[],int size,int x,int output[]){
   if(size==0){
       return 0;
   }
   int ans=allIndex1(input+1,size-1,x,output);
   for(int i=0;i<ans;i++){
       output[i]+=1;
   }
   if(input[0]==x){
       for(int i=ans-1;i>=0;i--){
           output[i+1]=output[i];
       }
       output[0]=0;
       return ans+1;
   }else{
       return ans;
   }
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    int *output=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    // int ans=allIndex1(arr,n,x,output);
    int ans=allIndex2(arr,n,x,output);
    for(int i=0;i<ans;i++){
        cout<<output[i]<<" ";
    }
    delete []arr;
    delete []output;
}