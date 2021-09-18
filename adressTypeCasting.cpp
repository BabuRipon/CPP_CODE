#include<iostream>
using namespace std;

void fun(int i){
   
    i++;
     cout<<i<<" ";
}

int main(){
    int i=65;
//     int *p=&i;
//     char *pc=(char*)p;
//     cout<<p<<endl;
//     cout<<pc<<endl;

//     cout<<*p<<endl;
//     cout<<*pc<<endl;
//     cout<<*(pc+1)<<endl;
// 
int& j=i;//reference variable
// j++;
// cout<<i;
// int k=120;
// j=k;
// cout<<i;
// int k=0;
// fun(k++);//pass by reference
// cout<<k<<endl;
fun(j);
cout<<j<<" "<<i;
}