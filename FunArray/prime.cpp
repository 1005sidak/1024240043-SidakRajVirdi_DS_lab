#include<iostream>
using namespace std;

int prime(int num){
    bool isprime=true;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            cout<<"NOT PRIME!!";
            isprime=false;
            break;
        }

    }
    if(isprime==true){
        cout<<"PRIME NUMBER"<<endl;
    }
    return num;
}

int main(){
    prime(23);
    return 0;
}

