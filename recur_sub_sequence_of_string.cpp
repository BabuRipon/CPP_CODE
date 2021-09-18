#include<iostream>
#include<cmath>
using namespace std;

int subSequence(string s,string output[]){
    if(s.empty()){
        output[0]="";
        return 1;
    }
    int sizeOfArray=subSequence(s.substr(1),output);
    for(int i=0;i<sizeOfArray;i++){
        output[i+sizeOfArray]=s[0]+output[i];
    }
    return 2*sizeOfArray;
}

int main(){
    string s;
    cin>>s;
    int size=pow(s.size(),2);
    string *output=new string[size];
    int sizeOfArray=subSequence(s,output);
    cout<<"output of subsequence are :"<<endl;
    for(int i=0;i<sizeOfArray;i++){
        cout<<output[i]<<endl;
    }

}