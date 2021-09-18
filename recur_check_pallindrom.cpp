#include<iostream>
#include<cstring>
using namespace std;

bool checkPallindrom(char str[]){
    if(strlen(str)==1){
        return true;
    }
    if(str[0]!=str[strlen(str)-1]){
        return false;
    }
    str[strlen(str)-1]='\0';
    bool ans=checkPallindrom(str+1);
    return ans;
}

int main(){
    char str[100];
    cin>>str;
    // cout<<strlen(str);
    bool ans=checkPallindrom(str);
    cout<<ans;
    }