#include <iostream>
#include <string>
using namespace std;

void recur(string input,string output){
    if(input.empty()){
        cout<<output<<endl;
        return ;
    }

    for(int i=1;i<=input.length();i++){
        string s=input.substr(0,i-1)+input.substr(i);
        recur(s,output+input.substr(i-1,1));
    }
}

void printPermutations(string input){
    string output="";
    recur(input,output);
}

int main(){
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}
