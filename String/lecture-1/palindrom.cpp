#include<iostream>
using namespace std;
int main(){
    string str = "harsh";
    int start =0,end = str.size()-1;
    while(start<end){
        if(str[start]!=str[end]){
            cout<<"not palindrom"<<endl;
            return 0;
        }
        start++,end--;
    }
    cout<<"palindrom"<<endl;
    return 0;
}

