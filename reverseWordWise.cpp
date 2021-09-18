#include<iostream>
using namespace std;

void reverse(char name[],int i,int j){
     for(j=j-1;i<j;i++,j--){
         char temp=name[i];
         name[i]=name[j];
         name[j]=temp;
     }
     cout<<name<<endl;
}

void reverseWordWise(char name[]){
    int len=0,start=0,end=0;
    for(;name[len]!='\0';len++){}
    reverse(name,0,len);
    for(int i=0;i<len;i++){
        if(i==len-1){
            end=i+1;
           reverse(name,start,end);
        }
        if(name[i]==' '){
            end=i;
            reverse(name,start,end);
            start=i+1;
        }
        
    }
   
}

int main(){
    char name[50]="Welcome to Coding Ninjas";
    reverseWordWise(name);
    cout<<name;
}