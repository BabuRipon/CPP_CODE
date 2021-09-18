#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(14);
    s.push(16);

    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.size()<<endl;
    // cout<<s.empty()<<endl;

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}