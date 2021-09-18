#include<iostream>
using namespace std;

int main(){
    int inc=0,dec=0;
    int n,a,b;
    bool flag=true;
    cin>>n>>a;
    n--;
    while(n!=0){
        cin>>b;
        if(a==b){
            flag=false;
            break;
        }
        else if(a>b){
            if(dec > 1){
                flag=false;
                break;
            }else if(inc==1){
                inc++;
            }
            dec=1;
        }
        else{
            if(inc > 1){
                flag=false;
                break;
            }else if(dec==1){
                dec++;
            }
            inc=1; 
        }
        a=b;
        n--;
    }

    if(!flag){
      cout<<"false";
    }else{
        cout<<"true";
    }
    
}