#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,N,S;
    cin>>T;
    while(T--){
        vector<int>p,j;
        cin>>N>>S;
        for(int i=0;i<N;i++){
            int k;
            cin>>k;
            p.push_back(k);
        }
        for(int i=0;i<N;i++){
            int k;
            cin>>k;
            j.push_back(k);
        }

      vector<int>sum;

    for(int i=0;i<N-1;i++){
        for(int k=i+1;k<N;k++){
           if(j[i]!=j[k])
               sum.push_back(p[i]+p[k]);
                
        }
    }
 
    for(int i=0;i<sum.size();i++){
        if(sum[i]<10){
            cout<<"yes"<<endl;
            break;
        }
        if(i==sum.size()-1){
            cout<<"no"<<endl;
        }
    }

        
    }
 
}