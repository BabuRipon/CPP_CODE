#include<iostream>
using namespace std;

bool check_AB(char arr[]){
    if(arr[0]=='\0'){
        return true;
    }
     bool ans;
    if(arr[0]=='a'){
      if(arr[1]=='a'||arr[1]=='\0'){
          ans=check_AB(arr+1);
      }
      else if(arr[1]=='b'&&arr[2]=='b'){
          ans=check_AB(arr+3);
      }
    }else{
        return false;
    }

    return ans;

}

int main(){
    char arr[1000];
    cin>>arr;
    bool ans= check_AB(arr);
    cout<<ans;
}