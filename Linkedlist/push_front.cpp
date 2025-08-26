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
    ll.print();
    return 0;
}
