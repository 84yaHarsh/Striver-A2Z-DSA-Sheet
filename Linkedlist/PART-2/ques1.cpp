/*DETECT LOOP IN A LINKEDLIST*/
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
    Node*temp = new Node(value);
    if(head==NULL){
       head=tail = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
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

bool isCycle(Node*head){
    Node*slow = head;
    Node*fast = head;
    while(fast!=NULL && (fast->next) != NULL){
         slow = slow->next;
         fast = fast->next->next;

         if(slow==fast){
            cout<<"cycle detected"<<endl;
            return true;
         }
    }
    return false;

}

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
       ll.print();
    ll.tail->next = ll.head;
 
    isCycle(ll.head);
    return 0;
}

