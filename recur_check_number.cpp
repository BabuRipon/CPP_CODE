#include<iostream>
using namespace std;

bool check(int arr[],int size,int x){
    // if(size==0){
    //     return false;
    // }
    if(size==1){
        if(arr[0]==x){
            return true;
        }
        return false;
    }
    bool ans=check(arr+1,size-1,x);
    if(ans){
        return ans;
    }

    if(arr[0]==x){
        return true;
    }else{
        return false;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int ans=check(arr,5,4);
    cout<<ans<<endl;
}