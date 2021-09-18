#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

int main(){
   vector<int> arr={1,1,2,2,9,1,2,3,4,1,5,3,4};
   vector<int> temp;
   unordered_map<int,bool> ourmap;
  
    for(int i=0;i<arr.size();i++){
        if(ourmap.count(arr[i])==0){
           temp.push_back(arr[i]);
           ourmap[arr[i]]=true;
        }
    }
  
    for(int i=0;i<temp.size();i++){
       cout<<temp[i]<<endl;
    }
}