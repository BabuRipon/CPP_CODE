#include<iostream>
using namespace std;

bool checkPallindrom(char name[]){
    int n=0;
    for(;name[n]!='\0';n++){}
    for(int i=0,j=n-1;i<j;i++,j--){
        if(name[i]!=name[j]){
            return false;
        }
    }
    return true;
}

int main(){
    char name[10];
    // cin>>name;
    // if(checkPallindrom(name)){
    //     cout<<"true";
    // }else{
    //     cout<<"false";
    // };
    // cout<<int('\t');
    // cout<<int(' ');
    // cout<<char(10);
    // cout<<name;
    cin.getline(name,10,'x');
    // name[5]='x';
    cout<<name;
}