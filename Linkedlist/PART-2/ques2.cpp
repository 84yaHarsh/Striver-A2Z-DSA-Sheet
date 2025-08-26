/*REMOVE A CYCLE IN A LINKEDLIST*/

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

bool removeCycle(Node*head){
    Node*slow = head;
    Node*fast = head;
    bool isCycle = false;
    while(fast!=NULL && (fast->next) != NULL){
         slow = slow->next;
         fast = fast->next->next;

         if(slow==fast){
            cout<<"cycle detected"<<endl;
            isCycle = true;
            break;
         }
    }
   if(!isCycle){
    cout<<"cycle does not exist"<<endl;
    return false;
   }
   slow = head;
   if(slow==fast){
        
     while(fast->next!=slow){   // if meeting point is head   1->2->3->4->1
      fast = fast->next;                                  
   }
   fast->next = NULL;
   }
  else{
    Node*prev = fast;  
   while(slow!=fast){
    prev = fast;
    fast = fast->next;
    slow = slow->next;
   }
   prev->next = NULL;
  }
  return true;
}

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.tail->next = ll.head; // 1 2 3 1
 
    removeCycle(ll.head);
    ll.print();
    return 0;
}

