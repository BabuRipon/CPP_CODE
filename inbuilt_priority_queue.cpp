#include<iostream>
#include<queue>
using namespace std;


int main(){
    // priority_queue<int> pq;//max-heap
    priority_queue<int,vector<int>,greater<int> > pq; //min-heap

    pq.push(10);
    pq.push(20);
    pq.push(1);
    pq.push(15);
    pq.push(12);

    cout<<pq.empty()<<endl;
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    while (!pq.empty())
    {
      cout<<pq.top()<<" ";
      pq.pop();
    }
    
}