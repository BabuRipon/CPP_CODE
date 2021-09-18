#include<iostream>
using namespace std;

int intConvert(string s){
    int num=0;
    for(int i=0;i<s.length();i++){
        num=num*10+(s[i]-'0');
    }
  return num;
}

int allCode(string s,string output[]){
 
 if(s.length()==0){
     output[0]="";
     return 1;
 }

 if(s.length()==1){
     int num=s[0]-'0';
     char ch='a'+num-1;
     output[0]=ch;
     return 1;
 }

string o1[50],o2[50];

 int ans1=allCode(s.substr(1),o1);
 int ans2=allCode(s.substr(2),o2);

    int num1=intConvert(s.substr(0,1));
    char ch1='a'+num1-1;

int k=0;

 for(int i=0;i<ans1;i++){
    output[k]=ch1+o1[i];
    k++;
 }

int num2=intConvert(s.substr(0,2));
if(num2<=26){
char ch2='a'+num2-1;
for(int i=0;i<ans2;i++){
    output[k]=ch2+o2[i];
    k++;
}
}

return k;

}


int main(){
    string s="35";
    string output[100];
    
    int count=allCode(s,output);

    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }

}