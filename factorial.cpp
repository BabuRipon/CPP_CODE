#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	std::vector<int>v;
	int t,n;
    cin>>t;
	while(t--){
	    cin>>n;
	    v.push_back(n);
	}
	sort(v.begin(),v.end());
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++){
	    cout<<*it;
	}
	return 0;
}
