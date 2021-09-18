#include<bits/stdc++.h>
using namespace std;

int findMinIndex(int* weight,bool* visited,int n){
    int minIndex=-1;
    for(int i=0;i<n;i++){
        if(!visited[i]&& (minIndex==-1||weight[i]<weight[minIndex])){
           minIndex=i; 
        }
    }

    return minIndex;
}

void prims(int** edges,int n){
    int* weight=new int[n];
    int* parent=new int[n];
    bool* visited=new bool[n];

    for(int i=0;i<n;i++){
        weight[i]=INT_MAX;
        visited[i]=false;
    }
    parent[0]=-1;
    weight[0]=0;

    for(int i=0;i<n;i++){
        int minIndex=findMinIndex(weight,visited,n);
        visited[minIndex]=true;
        for(int j=0;j<n;j++){
            if(!visited[j]&&edges[minIndex][j]!=0){
                if(edges[minIndex][j]<weight[j]){
                    weight[j]=edges[minIndex][j];
                    parent[j]=minIndex;
                }
            }
        }
    }
cout<<" --------------------"<<endl;
    for(int i=1;i<n;i++){
       cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;

    }

    delete []weight;
    delete []visited;
    delete []parent;
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
        int f,s,w;
        cin>>f>>s>>w;
        edges[f][s]=w;
        edges[s][f]=w;
    }

prims(edges,n);

// free dynamic space
    for(int i=0;i<n;i++){
        delete []edges[i];
    }

    delete []edges;
}