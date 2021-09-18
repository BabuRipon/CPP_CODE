#include<iostream>
using namespace std;

int main(){
    string* sp=new string;
    *sp="hello";
    // cin>>*sp;
    cout<<sp<<endl;
    cout<<*sp<<endl;
    string s1="abc";
    cout<<s1[0]<<endl;
    s1="bc";
    cout<<s1<<endl;
    string s2=s1+"hi";
    cout<<s2<<endl;
    getline(cin,s1);
    cout<<s1<<endl;
    cout<<s1.length()<<endl;
    cout<<s1.size()<<endl;
    s1[3]='r';
    cout<<s1<<endl;
    string newStr=s1.substr(2,3);
    cout<<newStr<<endl;
    cout<<s1.find("rbc")<<endl;
    cout<<s1.find("rbcac");
}