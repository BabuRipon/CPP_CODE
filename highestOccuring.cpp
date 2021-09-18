#include<iostream>
using namespace std;

char findOccuring(char str[]){
    int arr[256]={0};
    for(int i=0;str[i]!='\0';i++){
        int num=str[i];
        arr[num]=arr[num]+1;
    }
    int count=0;char ans;
    for(int i=0;str[i]!='\0';i++){
        int num=str[i];
        if(arr[num]>count){
            count=arr[num];
            ans=num;
        }
    }
    return ans;
}

int main(){
    char str[50];
    cin>>str;
    cout<<findOccuring(str);
}