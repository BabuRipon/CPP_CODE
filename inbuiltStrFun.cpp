#include<iostream>
#include <cstring>
using namespace std;

int main(){
    char str1[10];
    char str2[10];
    cin>>str1>>str2;
    cout<<strlen(str1)<<endl;
    cout<<strcmp(str1,str2)<<endl;
    // strcpy(str1,str2);
    // cout<<str1<<endl;
    // strncpy(str1,str2,2);
    // cout<<str1<<endl;
    strcat(str1,str2);
    cout<<str1;
}