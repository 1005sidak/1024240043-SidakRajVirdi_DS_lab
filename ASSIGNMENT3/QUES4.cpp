//QUES 4  Write a program to convert an Infix expression into a Postfix expression.


//Overall Time Complexity = O(n)----------->>>>>>>> ????? amortised analysis???? why?? how??
//Space Complexity = O(n)


#include<iostream>
#include<stack>
using namespace std;

int precedence(char ch){
    if(ch=='^') return 3;
    if(ch=='*'||ch=='/') return 2;
    if(ch=='+'||ch=='-') return 1;
    return -1;
}


//For left-associative: if precedence is equal or higher, pop the stack.
//For right-associative: if precedence is higher only (not equal), pop. AND '^' is right associative

bool isRightAssociative(char ch){
    return (ch=='^');               // will return true if symbol is ^

}

void InfxToPostfix(string Infix){
    stack<char> S;
    for(int i=0;i<Infix.size();i++){
        char symbol=Infix[i];
        if(symbol=='('){
            S.push(symbol);
        }
        else if(symbol=='^'||symbol=='*'||symbol=='/'||symbol=='+'||symbol=='-'){
            while(!S.empty() && ((precedence(S.top())>precedence(symbol))||(precedence(S.top())==precedence(symbol) && !isRightAssociative(symbol)&& S.top()!='('))){

                cout<<S.top();
                S.pop();
            }
            S.push(symbol);
        }else if(symbol==')'){
            while(S.top()!='('){
                cout<<S.top();
                S.pop();
            }
            S.pop();//discarding left parentheses
        }else if(isalnum(symbol)){
            cout<<symbol;
        }
        else{
            cout<<"Invalid Symbol!!";
        }

    }
    while(!S.empty()){
        cout<<S.top();
        S.pop();
    }

}

int main(){
    
    string Infix;
    cout<<"Enter the string:";
    getline(cin,Infix);
    //string postfix=
    cout << "Postfix Expression: ";
    InfxToPostfix(Infix);

    return 0;
}