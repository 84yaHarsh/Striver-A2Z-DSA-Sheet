#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data = value;

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
};
int main(){
     List ll();
}

