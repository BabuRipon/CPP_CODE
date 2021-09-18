#include<iostream>
using namespace std;

int main(){
    int al=0,ch=0,num=0;
    char c;c=cin.get();
    while(c!='$'){
        if(c>=97&&c<=122){
            al++;
        }else if(c>=48 && c<=57){
            num++;
        }else if(c==10 || c==32){
            ch++;
        }else if(c=='\t')
        {
            ch++;
        }
        c=cin.get();
    }
   cout<<al<<' '<<num<<' '<<ch;
}