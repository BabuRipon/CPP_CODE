#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

bool isIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    queue<TreeNode<int>*> queue1;
    queue<TreeNode<int>*> queue2;
    queue1.push(root1);
    queue2.push(root2);
    bool ans = true;
    for(int i=0;i<root1->children.size();i++)
    {
        queue1.push(root1->children[i]);
    }
    for(int i=0;i<root2->children.size();i++)
    {
        queue2.push(root2->children[i]);
    }
    if(queue1.size()!=queue2.size())
        return false;
    for(int i=0;i<queue1.size();i++)
    {
        if(queue1.front()->data == queue2.front()->data && ans!= false)
            ans = true;
    }
    return ans;
}

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    TreeNode<int>* root1 = takeInputLevelWise();
    TreeNode<int>* root2 = takeInputLevelWise();
    cout << (areIdentical(root1, root2) ? "true" : "false");
}