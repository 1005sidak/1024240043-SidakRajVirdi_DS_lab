#include<iostream>
using namespace std;

void fibbonacci(int num){
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<num-2;i++){
        int c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
    return;
}

int main(){
    fibbonacci(5);
    return 0;
}
