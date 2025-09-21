#include<bits/stdc++.h>
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
    Node*head;
    Node*tail;
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
      else{
        temp->next = head;
        head = temp;
      }
    }
    void reverse(){
        Node*curr = head;
        Node*prev = NULL;
        Node*fut = NULL;
        while(curr!=NULL){
            fut = curr->next;
            curr->next = prev;
            prev  = curr;
            curr = fut;
        }
        prev = head;
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
    ll.reverse();
    ll.print();
    return 0;
}