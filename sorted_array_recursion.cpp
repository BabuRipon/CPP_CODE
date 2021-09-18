#include<iostream>
using namespace std;

// second option
bool is_sorted2(int arr[],int size){
   if(size==1){
       return true;
   }

  bool smallOutput=is_sorted2(arr+1,size-1);
  if(!smallOutput){
      return false;
  }

  if(arr[0]<arr[1]){
      return true;
  }else{
      return false;
  }

}



//first option
bool is_sorted1(int arr[],int size){
    if(size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    bool smallOutput=is_sorted1(arr+1,size-1);
    return smallOutput;
}

int main(){
    int arr[]={1,2,3,4,5};
    // bool ans=is_sorted1(arr,5);
    bool ans=is_sorted2(arr,5);
    if(ans){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
}