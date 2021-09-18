#include<iostream>
using namespace std;

//rotate array by taken reverse method
void reverseArray(int arr[],int i,int j){
     for(;i<j;i++,j--){
         int temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
     }
}
void Rotate(int arr[],int n,int d){
    reverseArray(arr,0,n-1);
    reverseArray(arr,0,n-1-d);
    reverseArray(arr,n-d,n-1);
}

// rotate array by taken an extra temp array
// void Rotate(int arr[],int n,int d){
//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i]=arr[i];
//     }
//     int k=0;
//     for(;k<n-d;k++){
//         arr[k]=arr[k+d];
//     }
//     for(int i=0;k<n;k++,i++){
//         arr[k]=temp[i];
//     }
// }

//Rotate array by sifting arr[0] element by every round
// void Rotate(int arr[],int n,int d){
//     for(int i=0;i<d;i++){
//         int temp=arr[0],j;
//         for( j=0;j<n-1;j++){
//             arr[j]=arr[j+1];
//         }
//         arr[j]=temp;
//     }
// }

int main(){
    int arr[]={1,2,3,5,4,6};
    Rotate(arr,6,2);
    for(int i=0;i<6;i++){
       cout<<arr[i]<<' ';
    }
}