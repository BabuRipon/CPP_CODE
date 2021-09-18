#include<iostream>
using namespace std;

 void pairStar(char str[]){
     int len=0;
     for(;str[len];len++){};
     if(len==1){
         return ;
     }
     pairStar(str+1);
     len=0;
     for(;str[len];len++){};
     if(str[0]==str[1]){
         for(;len>=1;len--){
             str[len+1]=str[len];
         }
         str[1]='*';
     }
 }

int main(){
    char str[50];
    cin>>str;
    pairStar(str);
    cout<<str<<endl;
}