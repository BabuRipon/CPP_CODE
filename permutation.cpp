#include<iostream>
using namespace std;

void sort(char arr[],int len){
    for(int i=1;i<len;i++){
       int current=arr[i];
       int j;
       for(j=i-1;j>=0;j--){
           if(current<arr[j]){
               arr[j+1]=arr[j];
           }else{
               break;
           }
       }
       arr[j+1]=current;
    }
}

bool checkPermutation(char str1[],char str2[]){
    int len1=0,len2=0;
    for(;str1[len1]!='\0';len1++){};
    for(;str2[len2]!='\0';len2++){};
    if(len1!=len2){
        return false;
    }
    sort(str1,len1);
    sort(str2,len2);
    for(int i=0;i<len1;i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }
    return true;
} 

int main(){
   char str1[20],str2[20];
   cin>>str1>>str2;
   cout<<checkPermutation(str1,str2);
  
}