#include <iostream>
#include <algorithm>
using namespace std;

#include <map>
#include<unordered_map>
#include<vector>

void intersection(int *input1, int *input2, int size1, int size2) 
{
    //Write your code here
    unordered_map<int,int> ourmap;
    unordered_map<int,int> ourmap2;
    vector<int> v1;
    vector<int> v2;
    
    
    for(int i=0;i<size1;i++){
        if(ourmap.count(input1[i])>0){
            ourmap[input1[i]]++;
            continue;
        }
        v1.push_back(input1[i]);
        ourmap[input1[i]]=1;
    }
    
    for(int i=0;i<size2;i++){
      if(ourmap2.count(input2[i])>0){
            ourmap2[input2[i]]++;
            continue;
        }
        v2.push_back(input2[i]);
        ourmap2[input2[i]]=1;   
    }
    
    if(size1<size2){
        sort(v1.begin(), v1.end());
        for(int i=0;i<v1.size();i++){
        if(ourmap2.count(v1[i])>0){
            int smallValue=ourmap[v1[i]]<ourmap2[v1[i]]?ourmap[v1[i]]:ourmap2[v1[i]];
            for(int j=0;j<smallValue;j++){
                cout<<v1[i]<<" ";
            }
        }
    }
    }
    else{
        sort(v2.begin(), v2.end());
        for(int i=0;i<v2.size();i++){
        if(ourmap.count(v2[i])>0){
            int smallValue=ourmap2[v2[i]]<ourmap[v2[i]]?ourmap2[v2[i]]:ourmap[v2[i]];
            for(int j=0;j<smallValue;j++){
                cout<<v2[i]<<" ";
            }
        }
    }
    }
    
    
    
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);
		
		delete[] input1;
		delete[] input2;
		
		cout << endl;
	}

	return 0;
}