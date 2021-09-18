#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};



BinaryTreeNode<int> *takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}

BinaryTreeNode<int>* buildTreeHelper(int *post,int *in,int postS,int postE,int inS,int inE){
    if(inS>inE){
        return NULL;
    }

    int rootindex=-1;
    for(int i=inS;i<=inE;i++){
       if(in[i]==post[postE]){
           rootindex=i;
       }
    }

    int LinS=inS;
    int LinE=rootindex-1;
    int LpostS=postS;
    int LpostE=LinE-LinS+LpostS;

    int RinS=rootindex+1;
    int RinE=inE;
    int RpostS=LpostE+1;
    int RpostE=postE-1;

    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(post[postE]);

    BinaryTreeNode<int> *left=buildTreeHelper(post,in,LpostS,LpostE,LinS,LinE);
    BinaryTreeNode<int> *right=buildTreeHelper(post,in,RpostS,RpostE,RinS,RinE);

    root->left=left;
    root->right=right;

    return root;

}

BinaryTreeNode<int>* buildTree(int *post,int size1,int *in,int size2){

    return buildTreeHelper(post,in,0,size1-1,0,size2-1);
}

int main() {
    int size;
    cin >> size;
    int *post = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++) cin >> post[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(post, size, in, size);
    printLevelATNewLine(root);
}