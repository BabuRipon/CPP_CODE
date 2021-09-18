#include<iostream>
using namespace std;

int findLength(char str[]){
    if(str[0]=='\0'){
        return 0;
    }
    int ans=findLength(str+1);
    return ans+1;
}

int main(){
    char str[100];
    cin>>str;
    int ans=findLength(str);
    cout<<ans;
}