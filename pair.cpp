#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<pair<int,int>>v;
   int t;cin>>t;
   while(t--){
       int fir,sec;
       cin>>fir>>sec;
       v.push_back(make_pair(fir,sec));
   }

vector<int>lead;
vector<int>win;

for(int i=0;i<v.size();i++){
    int fir=0,sec=0;
    for(int j=0;j<=i;j++){
         fir+=v[j].first;
         sec+=v[j].second;
    }
    if(fir>sec){
      lead.push_back(fir-sec);
      win.push_back(1);
    }else{
        lead.push_back(sec-fir);
        win.push_back(2);
    }
}

vector<int>check=lead;
sort(check.begin(),check.end());
for(int i=0;i<lead.size();i++){
    if(lead[i]==check[check.size()-1]){
        cout<<win[i]<<" "<<lead[i];
        break;
    }
}

}