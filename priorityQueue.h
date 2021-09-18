#include<vector>
using namespace std;

class PriorityQueue{

   vector<int> pq;

    public:

    bool isEmpty(){
        return pq.size()==0;
    }

    int getSize(){
        return pq.size();
    }

    int getMin(){
        if(pq.size()==0){
            return 0;
        }

        return pq[0];
    }

    void insert(int data){  
       pq.push_back(data);

       int childIndex=pq.size()-1;
       while(childIndex>0){
           int parentIndex=(childIndex-1)/2;
           if(pq[childIndex]<pq[parentIndex]){
               int temp=pq[childIndex];
               pq[childIndex]=pq[parentIndex];
               pq[parentIndex]=temp;
           }
           else{
               break;
           }
           childIndex=parentIndex;
       }

    }

  int removeMin(){
     if(isEmpty()){
         return 0;
     }
     int ans=pq[0];
     pq[0]=pq[pq.size()-1];
     pq.pop_back();

     int parent=0;
     int left=2*parent+1;
     int right=2*parent+2;
     

     while(left<pq.size()){
           int minIndex=parent;
           if(pq[minIndex]>pq[left]){
               minIndex=left;
           }

           if(right<pq.size() && pq[minIndex]>pq[right]){
              minIndex=right;
           }

           if(minIndex==parent){
               break;
           }

           int temp=pq[minIndex];
           pq[minIndex]=pq[parent];
           pq[parent]=temp;

           parent=minIndex;
           left=2*parent+1;
           right=2*parent+2;
     }

     return ans;
  }


};
