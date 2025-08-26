#include<iostream>
using namespace std;
int main(){
    string s1 = "harsh";
    string s2 = "chaurasia";
    cout<<s1+s2<<endl; // append
    s1.push_back('k');  // push at last
    s2.pop_back();      // pop at last
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s1+"umar"<<endl;
    return 0;
}

