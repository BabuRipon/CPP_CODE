#include<iostream>
using namespace std;

int first_index(int arr[],int size,int x){
    if(size==0){
        return -1;
    }
    if(arr[0]==x){
        return 0;
    }

    int ans=first_index(arr+1,size-1,x);
    if(ans==-1){
        return ans;
    }else{
        return ans+1;
    }
}

int main(){
    int arr[]={1,2,3,2,5};
    int ans=first_index(arr,5,5);
    cout<<ans<<endl;
}