// #include<iostream>
#include"BinarySearchTree.h"
using namespace std;

int main(){
    BST b;
    b.insert(10);
    b.insert(20);
    b.insert(7);
    b.insert(6);
    b.insert(9);
    b.insert(15);

    b.printTree();

    cout<<b.hasData(15)<<endl;
    cout<<b.hasData(16)<<endl;

    b.deleteData(10);

    b.printTree();
    
}