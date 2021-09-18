#include<iostream>
using namespace std;

bool isPermutation(char str1[],char str2[]){
    int arr[256]={0},len1=0,len2=0;
    for(;str1[len1]!='\0';len1++){};//length of str1
    for(;str2[len2]!='\0';len2++){};//length of str2
    
    if(len1!=len2){
        return false;
    }

    for(int i=0;i<len1;i++){
        int n=str1[i];
        arr[n]=arr[n]+1;
    }

    for(int i=0;i<len1;i++){
        int n=str2[i];
        arr[n]=arr[n]-1;
    }

    for(int i=0;i<256;i++){
        if(arr[i]!=0){
            return false;
        }
    }

    return true;


}

int main(){
    char str1[20],str2[20];
    cin>>str1>>str2;
    cout<<isPermutation(str1,str2);
}