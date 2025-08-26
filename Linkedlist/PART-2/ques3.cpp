/*MERGE SORT ON LINKEDLIST*/

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
      data = value;
      next = NULL;
    }
};
class List{
      public:
    Node*head;
    Node*tail;
  
    List(){
        head =NULL;
        tail = NULL;
    }
    void push_back(int value){
        Node*temp = NULL;
        if(head==NULL){
             temp = new Node(value);
             head = tail = temp;
        }
        else{
            tail->next = new Node(value);
            tail = tail->next;
            
        }
    }
        void print(){
        Node*temp = head;
        while(temp){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        }
    };
Node*spiltAtMid(Node* head){
    Node*slow = head;
    Node*fast = head;
    Node*prev = NULL;
    while(fast && fast->next!=NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if(prev !=NULL){
        prev ->next =NULL;  // split at mid
    }
    return slow; // righthead

}
Node* merge(Node*left ,Node*right){
    List ans;
    Node* i= left;
    Node* j = right;
    while(i!=NULL && j!=NULL){
          if(i->data <= j->data){
               ans.push_back(i->data);
               i++;
          }
          else{
            ans.push_back(j->data);
            j++;
          }
    }
    while(i!=NULL){
       ans.push_back(i->data);
       i = i->next;
    }
    while(j!=NULL){
        ans.push_back(j->data);
        j = j->next;
    }
    return ans.head;
}
Node* mergSort(Node*head){
    if(head ==NULL || head->next ==NULL){
        return head;
    }
    Node* rightHead = spiltAtMid(head);
    Node*left = mergSort(head);   // left head  
    Node* right = mergSort(rightHead);  // right head
    return merge(left, right);
}

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.print();
    return 0;
}