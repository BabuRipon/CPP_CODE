#include<iostream>
#include<queue>
using namespace std;

void printDFS(int** edges,int n,int sv,bool *visited){
    cout<<sv<<" ";
    visited[sv]=true;

    for(int i=0;i<n;i++){
        if(sv==i){
            continue;
        }

        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }

            printDFS(edges,n,i,visited);
        }
    }
}

void printBFS(int** edges,int n,int sv,bool* visited){
     queue<int> q;
     q.push(sv);
     while (!q.empty())
     {
        cout<<q.front()<<" ";
        visited[q.front()]=true;
        for(int i=0;i<n;i++){
            if(edges[q.front()][i]==1){
                if(visited[i]){
                    continue;
                }
               
                if(q.back()!=i){
                    q.push(i);
                }
              
            }
        }
        q.pop();
     }
     
}

void DFS(int** edges,int n,bool* visited){
   for(int i=0;i<n;i++){
       if(!visited[i]){
           printDFS(edges,n,i,visited);
       }
   }
}

void BFS(int** edges,int n,bool* visited){
  for(int i=0;i<n;i++){
      if(!visited[i]){
          printBFS(edges,n,i,visited);
      }
  }
}

bool hasPath(int** edges,int n,int sv,int ev,bool* visited){
   visited[sv]=true;
   for(int i=0;i<n;i++){
       if(edges[sv][i]==1 && !visited[i]){
           if(i==ev){
               return true;
           }
           bool ans=hasPath(edges,n,i,ev,visited);
           if(ans){
               return ans;
           }
       }
   }
   return false;
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

    // DFS(edges,n,visited);
    // cout<<endl;
    // BFS(edges,n,visited);

    cout<<hasPath(edges,n,3,2,visited);

    delete []visited;
    for(int i=0;i<n;i++){
        delete []edges[i];
    }

    delete []edges;
}