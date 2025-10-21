#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    string name;
    int age;
  
    bool operator < (const person &other) const{
        return age < other.age;
    }
};
int main(){
    set<person>s;
    person p1,p2,p3;
    p1.name = "harsh" , p1.age = 21;
    p2.name = "himadri" , p2.age = 22;
    p3.name = "soumya" , p3.age = 20;

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<it->name << " " <<it->age<<endl; 
    }
    return 0;  
}