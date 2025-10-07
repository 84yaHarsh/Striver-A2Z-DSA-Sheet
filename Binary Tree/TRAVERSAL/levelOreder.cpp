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
vector<int>levelOrder(Node* root){
   vector<int>ans;
   if(root == NULL) return ans;
    queue<Node*>q;
   
   q.push(root);
   Node*temp;
   while(!q.empty()){
     temp = q.front();
      q.pop();
      ans.push_back(temp->data);
      if(temp->left)  q.push(temp->left);
      if(temp->right) q.push(temp->right);
   }
   return ans;
}
int main(){
    
    return 0;
}