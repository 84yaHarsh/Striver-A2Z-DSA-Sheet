#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    list<int>::iterator itr;
    for(itr = ll.begin(); itr!=ll.end(); itr++){
       cout<<(*itr)<<"->";
    }
    cout<<"NULL"<<endl;
    //for printing the head and tail
    cout<<ll.front()<<endl;
    cout<<ll.back()<<endl;
    // for reverse the list 
    for(list<int>::reverse_iterator itr = ll.rbegin(); itr!=ll.rend(); itr++){
         cout<< (*itr)<<"->";
    }
    cout<<"NULL"<<endl;
    return 0;
}

