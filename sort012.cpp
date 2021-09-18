#include<iostream>
using namespace std;
//this is just by counting one zero then replace one zero and two to array
// void SortArray(int arr[],int n){
//    int one=0,zero=0,two=0;
//    for(int i=0;i<n;i++){
//        if(arr[i]==0){
//            zero++;
//        }else if(arr[i]==1){
//            one++;
//        }
//    }
//    for(int i=0;i<n;i++){
//        if(zero){
//            arr[i]=0;
//            zero--;
//        }else if(one){
//           arr[i]=1;
//           one--;
//        }else{
//            arr[i]=2;
//        }
//    }
// }

//this is method two first complete zero and two by the both side then in middle fill the 1
// void SortArray(int arr[],int n){
//     int i=0,j=n-1;
//     for(int k=0;k<n;k++){
//         if(arr[k]==0){
//             arr[i]=0;
//             i++;
//         }
//         else if(arr[k]==2){
//             arr[j]=2;
//             j--;
//         }
//     }
//     while(i<=j){
//         arr[i]=1;
//         i++;
//     }
// }

void SortArray(int arr[],int n){
     int i=0,nz=0,nt=n-1;
     for(;i<=nt;){
       if(arr[i]==0){
           int temp=arr[i];
           arr[i]=arr[nz];
           arr[nz]=temp;
           i++;
           nz++;
       }else if(arr[i]==2){
            int temp=arr[i];
           arr[i]=arr[nt];
           arr[nt]=temp;
           nt--;
       }
       else{
           i++;
       }
     }
}

int main(){
    int arr[]={0,1,2,1,0,2,0};
    SortArray(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<' ';
    }
}