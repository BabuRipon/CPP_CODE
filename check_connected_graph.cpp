#include<iostream>
#include<vector>
using namespace std;

void DFS(int** egdes,int n,int sv,bool* visited){
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(egdes[sv][i]==1&&!visited[i]){
            DFS(egdes,n,i,visited);
        }
    }
}

void check_connected_graph(int** edges,int n,int sv,bool* visited){
    DFS(edges,n,sv,visited);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            cout<<"not connected graph";
            return;
        }
    }
    cout<<"connected graph";
}

void connected_component(int** edges,int n,int sv,bool* visited,vector<int>* v){
    visited[sv]=true;
    v->push_back(sv);
    for(int i=0;i<n;i++){
        if(edges[sv][i]==1&&!visited[i]){
           connected_component(edges,n,i,visited,v);
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

  bool* visited=new bool[n];
  for(int i=0;i<n;i++){
     visited[i]=false;
  }

//   check_connected_graph(edges,n,0,visited);

vector<vector<int>*> v;

  for(int i=0;i<n;i++){
      if(!visited[i]){
        vector<int>* nv=new vector<int>();
        connected_component(edges,n,i,visited,nv);
        v.push_back(nv);
      }
  }

  vector<int>::iterator it;

  for(int i=0;i<v.size();i++){
      cout<<"< ";
      for(it=v[i]->begin();it!=v[i]->end();it++){
          cout<<*it<<" ";
      }
      cout<<" >";
      cout<<endl;
  }


delete []visited;
for(int i=0;i<n;i++){
    delete []edges[i];
}
delete []edges;

}