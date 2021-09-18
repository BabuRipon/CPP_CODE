#include<iostream>
using namespace std;

void AddArray(int arr1[],int n1,int arr2[],int n2,int ans[],int n3){
    int i=n1-1,j=n2-1,carry=0,k=n3-1;
    for(;i>=0&&j>=0;i--,j--){
            int res=arr1[i]+arr2[j]+carry;
            int num=res%10;
            carry=res/10;
            ans[k]=num;
            k--;
    }

    for(;i>=0;i--){
            int res=arr1[i]+carry;
            int num=res%10;
            carry=res/10;
            ans[k]=num;
            k--;
        }

     for(;j>=0;j--){
            int res=arr2[j]+carry;
            int num=res%10;
            carry=res/10;
            ans[k]=num;
            k--;
        }
ans[k]=carry;
   
}

int main(){
    int arr1[]={6 ,2 ,4},arr2[]={7 ,5 ,6};
    int ans[4];
    AddArray(arr1,3,arr2,3,ans,4);
    for(int i=0;i<4;i++){
        cout<<ans[i];
    }
}