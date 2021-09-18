#include<iostream>
#include<vector>
using namespace std;

int main(){
//    vector<int> v;

//    v.push_back(10);
//    v.push_back(20);
//    v.push_back(30);

//    cout<<v[1]<<endl;//20

//    v[1]=15;

//    for(int i=0;i<v.size();i++){
//        cout<<v.at(i)<<endl;//10 15 30
//    }

//    v.pop_back();

//    cout<<v.capacity()<<endl;//4

vector<int> *v=new vector<int>();

v->push_back(10);
v->push_back(20);

for(int i=0;i<v->size();i++){
    cout<<v->at(i)<<endl;
}

   

}