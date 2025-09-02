#include<iostream>
using namespace std;
#define MAXLEN 100

class stack
{
private:
    int elements[5];
    int top=-1;
public:
    int isEmpty(){
        if(top==-1) return true;
        else return false;
    }

    int isFull(){
        return (top==4);
    }

    void push(int n){
        if (isFull()) cout<<"OVERFLOW !!\n";
        else{
            top++;
            elements[top]=n;
        }

    }

    void pop(){
    if (isEmpty()) cout<<"UNDERFLOW !!\n";
    else{
            cout<<"poped element is :"<<elements[top]<<endl;
            top--;
    }

    }

    void display()
    {
    for (int i=top;i>=0;i--)
        cout<<elements[i]<<endl;
    }
    
    void peak(){
        if(isEmpty())
        {
            cout<<"Underflow";
        }
        else{
            cout<<elements[top]<<endl;
    }}
};


int main(){
    stack S;
    for(int i=0;i<5;i++){
        S.push(i+10);
    }
    S.display();
    S.pop();
    S.push(27);
    cout<<"Top element is ";
    S.peak();
    S.display();
}

