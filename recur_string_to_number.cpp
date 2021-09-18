#include<iostream>
#include<cstring>
using namespace std;

int stringToNumber(char str[]){
    int len=0;
    for(;str[len]!='\0';len++){}
    if(len==0){
        return 0;
    }
    int ans=stringToNumber(str+1);
    int num=str[0]-48,pos=1;
    // cout<<num<<endl;
    for(;len>=2;len--){
        pos*=10;
    }
    num=num*pos+ans;
    return num;

}

int main(){
    char str[10];
    cin>>str;
//    int pos=1,ans=0;
//     for(int i=strlen(str)-1;i>=0;i--){
//         int num=str[i]-48;
//         ans=num*pos+ans;
//         pos*=10;
//     }
   int ans=stringToNumber(str);
    cout<<ans;
}