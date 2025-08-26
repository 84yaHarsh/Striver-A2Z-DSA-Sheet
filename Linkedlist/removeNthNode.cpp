#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
   Node(int value){
       data = value;
       next =NULL;
   }
};
class List{
    Node*head = NULL;
    Node*tail = NULL;
    public:
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
    void InsertAtPosition(int value,int pos){
        Node*temp = new Node(value);
        Node*curr = head;
        for(int i=0; i<pos-1; i++){
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
        
    }
    int size(){
        Node*temp = head;
        int idx =0;
        while(temp){
            idx++;
            temp = temp->next;
        }
        return idx;
    }
    void remove(int key){
        int n = size();
        Node*temp = head;
        for(int i=1; i<(n-key); i++){
           temp = temp->next;
        }
        temp->next = temp->next->next;
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
int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(5);
    ll.InsertAtPosition(4,3);
   
    ll.print();
    ll.remove(2);
    ll.print();
    return 0;
}







