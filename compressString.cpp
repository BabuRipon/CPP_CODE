#include<iostream>
using namespace std;

void removeConDuplicate(char str[]){
    int i,k,count=1;
    char current;
    for(i=1,k=1;str[i]!='\0';i++){
        current=str[k-1];
        if(current!=str[i]){
            if(count!=1){
                str[k]=48+count;
                count=1;
                k++;
            }
            str[k]=str[i];
            k++;
            continue;
        }  
        count++; 
    }
    str[k]='\0';
}

int main(){
    char str[20];
    cin>>str;
    removeConDuplicate(str);
    cout<<str;
}