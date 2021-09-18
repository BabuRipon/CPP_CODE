#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minDistFind(int* distance,bool* visited,int n){
    int minIndex=-1;
    for(int i=0;i<n;i++){
        if(!visited[i]&&(minIndex==-1 || distance[i]<distance[minIndex])){
            minIndex=i;
        }
    }

    return minIndex;
}

void dijkstra(int** edges,int n){
    bool* visited=new bool[n];
    int* distance=new int[n];

    for(int i=0;i<n;i++){
        visited[i]=false;
        distance[i]=INT_MAX;
    }

    distance[0]=0;

    for(int i=0;i<n;i++){
        int minDist=minDistFind(distance,visited,n);
        visited[minDist]=true;

        for(int i=0;i<n;i++){
            if(!visited[i]&&edges[minDist][i]!=0){
                int CalminDist=edges[minDist][i]+distance[minDist];
                if(CalminDist<distance[i]){
                    distance[i]=CalminDist;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<i<<" "<<distance[i]<<endl;
    }

    delete []visited;
    delete []distance;
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

  dijkstra(edges,n);

    for(int i=0;i<n;i++){
        delete []edges[i];
    }

    delete []edges;
}