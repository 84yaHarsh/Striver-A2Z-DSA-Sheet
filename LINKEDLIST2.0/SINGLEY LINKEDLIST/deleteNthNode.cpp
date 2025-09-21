#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next ;
  
    Node(int value){
        data = value;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = NULL;
        tail = NULL;
    }
    
      void push_back(int value){
        Node*temp = new Node(value);
        if(head==NULL){
            head = tail = temp;
        }
        else{
           tail->next = temp;
           tail = temp;
        }
      }
     int size(){
      Node*temp = head;
      int count=0;
      while(temp){
        count++;
        temp = temp->next;
      }
      return count;
     }
     void removeNthNode(int key){
        if(head==NULL){
            cout<<"linkedlist is empty"<<endl;
            return;
        }
        else if(head->next ==NULL){
            Node*temp = head;
            head = head->next;
            delete temp;
            return;
        }
        else{
            Node*curr = head;
            Node*prev = NULL;
            for(int i=1; i<key; i++){
                prev = curr;
                curr = curr->next;
            }
          prev ->next = curr->next;
          delete curr;
        }
     }
     void print(){
        Node*temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
     }
};
int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
   
    ll.print();
    cout<<ll.size()<<endl;
    ll.removeNthNode(3);
    ll.print();
    return 0;
}