/*ITERATIVE INORDER TRAVERSAL */
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
vector<int> inOrder(Node* root){
    vector<int>ans;
    stack<Node*>s;
    Node* temp = root;
   
    while(true){
        if(temp != NULL){
           s.push(temp);
           temp = temp->left;
        }
        else{
            if(s.empty()) break;
            temp = s.top();
            s.pop();
            ans.push_back(temp->data);
            temp = temp->right;
        }
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
    vector<int> ans = inOrder(root);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}