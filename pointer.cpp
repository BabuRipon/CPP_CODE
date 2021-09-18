#include<iostream>
using namespace std;

// int fun(int arr[],int n){
//     // cout<<arr[n-2];
// }
int fun(int *arr,int n,int x){
    for(int i=0;i<=n-x;i++){
        cout<<arr[i]<<' ';
    }
}

int main(){
    // int i=10;
    // int *q=0;//if you not assign any value first then you should assign 0; 
    // int *p=&i;
    // cout<<*p<<endl;
    // // cout<<*q<<endl;
    // cout<<i<<endl;
    // *q=i;
    // cout<<*q;
    // int *ptr=&i;
    // cout<<ptr<<endl;
    // ptr=ptr+1;
    // cout<<ptr<<endl;
    // ptr--;
    // cout<<ptr<<endl;
    // int *ptr=&i;
    // cout<<ptr<<endl;
    // ptr=ptr+1;
    // cout<<ptr<<endl;
    // int arr[10]={4};
    // *(arr+3)=23;
    // // cout<<arr[3]<<endl;
    // for(int i=0;i<10;i++){
    //     cout<<*(arr+i)<<' ';
    // }
    // int *ptr=arr;
    // arr[2]=23;
    // int *ptr=&arr[0];

    // cout<<arr<<endl;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<&arr<<endl;

    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(ptr)<<endl;
    // cout<<ptr[2];
// int a[] = {1, 2, 3, 4};
// int *p = a+1;
// cout << *p << endl;
// char str[]="abc";
// char *ptr1=&str[0];
// cout<<str<<endl;//abc
// cout<<ptr1<<endl;//abc

// char a='4';
// char *ptr2=&a;
// cout<<*ptr2<<endl;

//  char ch = 'a';
//  char* ptr = &ch;
//  cout<<&ch;
//  ch++;
//  cout << *ptr ;

// int i=13;
// int *ptr=&i;
// cout<<*ptr;
// int arr[]={1,2,3,4,5};
// fun(arr+1,5,2);


// int i=10;
// int *ptr=&i;
// *ptr = (*ptr) *   -1;
// cout<<i;
// int a=10;
// cout<<(a++ +10);
// cout<<a;
// int arr2[10];
// cout<<arr2;

int arr[]={1,2,3,4,5};
int *ptr1=&arr[0];
int *ptr2=ptr1+3;
cout<<*ptr2;
cout<<ptr2-ptr1;
 
}