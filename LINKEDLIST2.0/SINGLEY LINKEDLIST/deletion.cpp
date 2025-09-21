#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

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
        if(head==NULL){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
    }
    void insertAtPosition(int value,int pos){
        Node*temp = new Node(value);
        Node*curr = head;
        for(int i=0; i<pos-1; i++){
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
    void push_back(int value){
        Node*temp = new Node(value);
       if(head == NULL){
         head = tail = temp;
       }
       else{
        tail ->next = temp;
        tail = temp;
       }
    }
    void pop_front(){
        if(head ==NULL){
            cout<<"LinkedList is Empty"<<endl;
            return;
        }
        else{
               Node*temp = head;
               head = head->next;
                // if head becomes empty
               if(head == NULL){
                tail = NULL;
        }
               delete temp;
        }
    }
    void pop_back(){
        // if linkedlist is empty
        if(head == NULL){
            cout<<"LinkedList is empty"<<endl;
            return;
        }
        // if only one node is present
        if(head->next == NULL){
            Node*temp = head;
            head = head->next;
            delete temp;
            head = tail = NULL;
            return;
        }
        
        // if more than one node is present
        Node*curr=head;
        Node*prev = NULL;
        while(curr->next!=NULL){
            prev = curr;
            curr = curr->next; 
        }
        prev->next = NULL; // disconnect last
        tail = prev;   // update tail  
        delete curr;  // delete last
    }
    
    void print(){
        Node*temp = head;
        while(temp){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<< "NULL"<<endl;
    }
    
};
int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(5);
    ll.push_front(8);
    ll.insertAtPosition(4,4);
    ll.print();
    ll.pop_front();
    ll.print();
    return 0;
}