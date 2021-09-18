#include<iostream>
using namespace std;

void mergeTwoArray(int arr1[],int n1,int arr2[],int n2,int ans[]){
    int i=0,j=0,count=0;
    for(;i<n1;i++){
        
        for(;j<n2;j++){
            if(arr1[i]<arr2[j]){
                ans[count]=arr1[i];
                count++;
                break;
            }else{
                ans[count]=arr2[j];
                count++;
                continue;
            }
        }

        if(j>=n2){
            ans[count]=arr1[i];
            count++;
        }
      
    }
    
    for(;j<n2;j++){
        ans[count]=arr2[j];
        count++;
    }
   
}

int main(){
    int arr2[]={1,2,3,4};
    int arr1[]={2,3,7,9,15};
    int ans[20];
    mergeTwoArray(arr1,5,arr2,4,ans);
    for(int i=0;i<9;i++){
        cout<<ans[i]<<' ';
    }
}