#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> S;
    S.push(7);
    S.push(9);
    S.push(3);
    S.push(11);
    S.push(2);
    S.pop();
    //cout<<S.empty()<<endl;
    while(!S.empty()){
        cout<<S.top()<<" ";
        S.pop();
    }
    return 0;
}