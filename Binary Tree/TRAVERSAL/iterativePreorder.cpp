/*ITERATIVE PREORDER TRAVERSAL */
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};
vector<int> preOrder(Node* root){
    vector<int>ans;
    if(root == nullptr) return ans;
    stack<Node*>s;
    s.push(root);
    Node*temp;
    while(!s.empty()){
        temp = s.top();
        s.pop();
        ans.push_back(temp->data);
        if(temp->right) s.push(temp->right);
        if(temp->left) s.push(temp->left);
    }
    return ans;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<int> ans = preOrder(root);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}