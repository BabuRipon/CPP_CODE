#include <iostream>
using namespace std;
#include<unordered_map>

int pairSum(int *arr, int n) {
    unordered_map<int,int> ourmap;
    int count=0;
    for(int i=0;i<n;i++){
        if(ourmap.count(-arr[i])>0){
            count+=ourmap[-arr[i]];
        }
        if(ourmap.count(arr[i])>0){
            ourmap[arr[i]]+=1;
            continue;
        }
        
        ourmap[arr[i]]=1;
    }
    
    return count;
}


int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}