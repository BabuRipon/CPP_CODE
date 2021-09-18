#include<iostream>
#include<algorithm>

using namespace std;

class Edges{
    public:
        int source;
        int destination;
        int weight;
};

bool comparatorFun(Edges e1,Edges e2){
    return e1.weight<e2.weight;
}

int findParent(int* parent,int v){
    if(parent[v]==v){
        return v;
    }

    return findParent(parent,parent[v]);
}

void kruskal(Edges* input,int n,int e){
    sort(input,input+e,comparatorFun);

    Edges* output=new Edges[n-1];
    int* parent=new int[n];
    for(int i=0;i<n;i++){
        parent[i]=i;
    }

    int count=0;int i=0;

    while(count!=n-1){
        Edges currentEdge=input[i];
        int sp=findParent(parent,currentEdge.source);
        int dp=findParent(parent,currentEdge.destination);
        if(sp!=dp){
            output[count]=currentEdge;
            count++;
            parent[sp]=dp;
        }
        i++;
    }

cout<<"<-------output------>"<<endl;
for(int i=0;i<n-1;i++){
    if(output[i].source <output[i].destination){
        cout<<output[i].source<<" "<<output[i].destination<<" "<<output[i].weight<<endl;
    }else{
       cout<<output[i].destination<<" "<<output[i].source<<" "<<output[i].weight<<endl; 
    }
}

}

int main(){
 int n,e;
 cin>>n>>e;

Edges *input=new Edges[e];

for(int i=0;i<e;i++){
    int s,d,w;
    cin>>s>>d>>w;
    input[i].source=s;
    input[i].destination=d;
    input[i].weight=w;
}

kruskal(input,n,e);

}