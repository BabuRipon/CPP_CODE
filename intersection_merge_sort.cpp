#include<iostream>
using namespace std;


void mergeTwoSortedArray(int input[],int input1[],int input2[],int size1,int size2){
    int temp[size1+size2];
    int j=0,k=0,i=0;
    for(;i<size1;i++){
        for(;j<size2;j++){
          if(input1[i]<=input2[j]){
              temp[k]=input1[i];
              k++;
              break;
          }
          else{
              temp[k]=input2[j];
              k++;
          }
        }
        if(j>=size2){
            break;
        }
    }

    while(i<size1){
        temp[k]=input1[i];
        i++;
        k++;
    }

    while(j<size2){
        temp[k]=input2[j];
        k++;
        j++;
    }

    for(int l=0;l<size2+size1;l++){
        input[l]=temp[l];
    }
   
}


void merge_sort(int input[],int si,int ei){
   if(si>=ei){
       return;
   }
   int mid=(si+ei)/2;
   merge_sort(input,0,mid);
   merge_sort(input,mid+1,ei);
   int temp1[mid+1];
   int temp2[ei-mid];
   for(int i=0;i<=mid;i++){
      temp1[i]=input[i];
   }
   for(int j=mid+1,k=0;j<=ei;j++,k++){
       temp2[k]=input[j];
   }
   

  mergeTwoSortedArray(input,temp1,temp2,mid+1,ei-mid);

}

void intersection(int input1[],int input2[],int size1,int size2){
   merge_sort(input1,0,size1-1);
   merge_sort(input2,0,size2-1);

  int i=0,j=0;
  for(;i<size1 && j<size2;){
      if(input2[j]==input1[i]){
          cout<<input1[i]<<endl;
          i++;
          j++;
      }else if(input1[i]>input2[j]){
          j++;
      }else{
          i++;
      }
  }
    
}

int main(){
    int  arr1[]={2 ,6 ,8 ,5 ,4 ,3};
    int arr2[]={2, 3, 4 ,7 };
    intersection(arr1,arr2,6,4);
   
}