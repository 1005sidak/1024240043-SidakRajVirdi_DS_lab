#include<iostream>
using namespace std;
int main(){
    int fact=1;
    int num;
    cout<<"enter a number:"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    cout<<"factorial of "<<num<<" is "<<fact<<endl;
    return 0;
}