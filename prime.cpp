#include <iostream>
using namespace std;


void genFactor(int a,int b){
	while(a<=b){
		int count=0;
		for(int i=2;i<a-1;i++){
			if(a%i==0){
				count++;
				break;
			}
		   	
		}
		
		if(count==0){
		   cout<<a<<endl;
		}
		
		a++;
	}
}

int main() {
	
	int t;
	cin>>t;
    while(t--){
      int a,b;
      cin>>a>>b;
      genFactor(a,b);
    }
	return 0;
}