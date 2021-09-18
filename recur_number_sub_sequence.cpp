#include<iostream>
using namespace std;

int recur(int n,string alpArr[],string str[] ){
    if(n==1||n==0){
        str[0]="";
        return 1;
    }
    int arrSize=recur(n/10,alpArr,str);

    string *temp=new string[1000];
    for(int i=0;i<arrSize;i++){
        temp[i]=str[i];
    }
    int num=n%10,k=0;
    string s=alpArr[num-1];
    for(int i=0;i<s.size();i++){
        for(int j=0;j<arrSize;j++,k++){
            str[k]=temp[j]+s[i];
        }
    }

    delete []temp;

return k;

}

int sub_sequence(int n,string str[]){
    string arr[]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int ans =recur(n,arr,str);
    return ans;
}

int main(){
    int n;
    cin>>n;
    string *str=new string[100];
    int size_arr=sub_sequence(n,str);
    for(int i=0;i<size_arr;i++){
        cout<<str[i]<<endl;
    }
    delete []str;

}