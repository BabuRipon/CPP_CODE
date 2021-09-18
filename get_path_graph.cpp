#include<iostream>
#include<queue>
#include<map>
#include<vector>
using namespace std;

void getPathBfs(int** edges,int n,int sv,int ev,vector<int>* arr,bool* visited){
    queue<int> q;
    map<int,int> m;
    int finalans;
    int sIndex=sv;
    q.push(sv);
    visited[sv]=true;
    while(!q.empty()){
        if(q.front()==ev){
            finalans=ev;
            arr->push_back(ev);
            break;
        }
        
        sv=q.front();
        q.pop();
        for(int i=0;i<n;i++){
            if(edges[sv][i]&&!visited[i]){
                q.push(i);
                m[i]=sv;
                visited[i]=true;
            }
        }

    }

   if(m.count(finalans)){
        
        while(m[finalans]!=sIndex){
        finalans=m[finalans];
        arr->push_back(finalans);
        }
        arr->push_back(sIndex);
   }
}

void getPath(int** edges,int n,int sv,int ev,vector<int>* arr,bool* visited){
   visited[sv]=true;
   for(int i=0;i<n;i++){
       if(edges[sv][i]==1 && !visited[i]){
           if(i==ev){
               arr->push_back(i);
               arr->push_back(sv);
               return;
           }

           getPath(edges,n,i,ev,arr,visited);
           if(arr->size()){
               arr->push_back(sv);
               return;
           }
       }
   }
} 

int main(){
    int n,e;
    cin>>n>>e;

    int** edges=new int*[n];

    for(int i=0;i<n;i++){
       edges[i]=new int[n];
       for(int j=0;j<n;j++){
           edges[i][j]=0;
       }
    }

    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }

   bool *visited=new bool[n];
   for(int i=0;i<n;i++){
       visited[i]=false;
   }

  vector<int>* arr=new vector<int>();

//    getPath(edges,n,0,6,arr,visited);
        getPathBfs(edges,n,4,1,arr,visited);

   vector<int>::iterator it;

   vector<int> v;

   for(it=arr->begin();it!=arr->end();it++){
    v.push_back(*it);
   }

   for(int i=v.size()-1;i>=0;i--){
       cout<<v[i]<<" ";
   }

    delete []visited;
    for(int i=0;i<n;i++){
        delete []edges[i];
    }

    delete []edges;
}

