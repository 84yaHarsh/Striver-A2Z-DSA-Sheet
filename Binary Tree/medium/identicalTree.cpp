/*identical tree 

RECURSION CALLS

isSameTree(1,1)
 ├─ isSameTree(2,2)
 │   ├─ isSameTree(nullptr,nullptr) → true
 │   └─ isSameTree(nullptr,nullptr) → true
 │   → returns true
 └─ isSameTree(3,3)
     ├─ isSameTree(nullptr,nullptr) → true
     └─ isSameTree(nullptr,nullptr) → true
     → returns true
→ Final result: true ✅

*/
#include<iostream>
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
bool isSame(Node*p,Node* q){
    //if both root are not exist end of the tree
    if(!p && !q ) return true;
    // if only one node is exist
    if(!p && !q) return false;
    // values of both nodes is not equal
    if(p->data != q->data) return false;
    // recursive calls
    return isSame(p->left ,q->left) && isSame(p->right,q->right);
}
int main(){
    Node*root1 = new Node(1);
    root1->left == new Node(2);
    root1->right = new Node(3);

    Node*root2 = new Node(1);
    root2->left == new Node(2);
    root2->right = new Node(3);

    cout<< isSame(root1,root2);
    return 0;
}