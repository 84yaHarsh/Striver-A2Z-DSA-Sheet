/*MAXIMUM PATH SUM  */
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
      this->data = data;
      left = right = NULL;
    }
};
int pathSum(Node*root,int &sum){
   if(root == nullptr){
    return 0;
   }
   // leaf Node
   if(!root->left && !root->right){
    return root->data;
   }
    int left = pathSum(root->left,sum);
    int right = pathSum(root->right,sum);

   // if both left and right node is exist
   if(root->left && root->right){
     sum = max(sum,left+right+root->data);
     return root->data + max(left,right);
   }
   // if left node is not exist
   if(!root->left){
      return root->data +right;
   }
   // if right node is not exist
   if(!root->right){
     return root->data + left;
   }
   return sum;
}
   int maximumPathSum(Node* root){
    int sum = INT_MIN;
    int ans = pathSum(root,sum);
    if(root->left && root->right) return sum;
    else 
         return max(sum,ans);
   }
int main(){
    Node* root = new Node(-10);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    cout<< maximumPathSum(root);
    return 0;
}