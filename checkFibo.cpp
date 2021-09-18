// #include<iostream>
// using namespace std;

// bool checkFibo(int n){
//     int a=0,b=1;
//     if(n==0||n==1){
//         return true;
//     }
//     int fibo=0;
//     while(fibo<=n){
       
//         fibo=a+b;
//         b=a;
//         a=fibo;
        
//         if(fibo==n){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
// //    int n;cin>>n;
// //    bool cf=checkFibo(n);
// //    if(cf){
// //        cout<<"yes";
// //    }else{
// //        cout<<"no";
// //    }

// }

#include<iostream>
using namespace std;

int sum(int a,int n){
    
    int total=0;
    for(int i=0;i<n;i++){
        cout<<a[i];
        // total=total+a[i];
    }
    return total;
}

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<sum(arr,n);
    
}