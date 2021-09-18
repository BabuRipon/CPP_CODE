#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};



BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

// int minimum(BinaryTreeNode<int> *root){
//     if(root==NULL)return 1000000;
//     return min(root->data,min(minimum(root->left),minimum(root->right)));
// }

// int maximum(BinaryTreeNode<int> *root){
//     if(root==NULL)return -10000;
//     return max(root->data,max(maximum(root->left),maximum(root->right)));
// }

// bool isBST(BinaryTreeNode<int>* root) {  
//     if(root==NULL)return true;
    
//     int min=minimum(root->right);
//     int max=maximum(root->left);

//     return (root->data>max && root->data<=min && isBST(root->left) && isBST(root->right));
// }

class isBstReturn {
    public:
    bool isBST;
    int minimum;
    int maximum;
};

isBstReturn isBST2(BinaryTreeNode<int> *root){
    if(root==NULL){
        isBstReturn output;
        output.isBST=true;
        output.minimum=100000;
        output.maximum=-100000;

        return output;
    }

    isBstReturn leftOutput=isBST2(root->left);
    isBstReturn rightOutput=isBST2(root->right);

    int minimum=min(root->data,min(leftOutput.minimum,rightOutput.minimum));
    int maximum=max(root->data,max(leftOutput.maximum,rightOutput.maximum));
    bool isFinalBST=(root->data >leftOutput.maximum && root->data<=rightOutput.minimum && leftOutput.isBST && rightOutput.isBST);
   
   isBstReturn output;
    output.isBST=isFinalBST;
    output.minimum=minimum;
    output.maximum=maximum;
    
    return output;
}

bool isBST3(BinaryTreeNode<int>*root,int min=-100000,int max=100000){
    if(root==NULL)return true;
    
    if(root->data<min||root->data>max)
       return false;
    bool isLeftOk=isBST3(root->left,min,root->data-1);
    bool isRightOk=isBST3(root->right,root->data,max);

    return isLeftOk && isRightOk;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    // cout << (isBST2(root).isBST ? "true" : "false");
    cout << (isBST3(root)? "true" : "false");
}