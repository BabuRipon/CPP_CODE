#include<iostream>
using namespace std;

//inline and deault variable both are present
inline int findMax(int a=0,int b=0){
    return a>b?a:b ;
}

int main(){
    cout<<findMax(4,3);
}