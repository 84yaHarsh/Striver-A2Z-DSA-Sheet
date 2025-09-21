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
     void push_front(int value){
      Node*temp = new Node(value);
      if(head == NULL){
        head = tail = temp;
      }
      else {
        temp->next = head;
        head = temp;
      }
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
      void insertAtPosition(int value,int pos){
        Node*temp = new Node(value);
        Node*curr = head;
        // if insert at head (pos==0)
        if(pos==0){
            temp->next = head;
            head = temp;
            if(tail==NULL){
                tail = temp;
            }
            return;
        }
        for(int i=0; i<pos-1; i++){
           curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
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
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(5);
    ll.insertAtPosition(4,2);
    ll.print();
    return 0;
}