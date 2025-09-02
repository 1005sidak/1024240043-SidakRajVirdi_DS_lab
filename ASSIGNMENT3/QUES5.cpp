//QUES 5  Write a program for the evaluation of a Postfix expression. 



//Overall Time Complexity = O(n)
//Space Complexity
//O(n) in the worst case for the stack.
 


#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

void evaluatePostfix(string Postfix){
    stack<int> S;
    int result;
    for(int i=0;i<Postfix.size();i++){
        char symbol=Postfix[i];
        if (isdigit(symbol)) {  // Only numbers
        int num = symbol - '0';  // Convert char to int
        S.push(num);             // Push onto stack
    
    }else if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'||symbol=='^'){
        int opnd2=S.top();
        S.pop();
        int opnd1=S.top();
        S.pop();
        
        switch(symbol){
            case '+':result=opnd1+opnd2;break;
            case '-':result=opnd1-opnd2;break;
            case '*':result=opnd1*opnd2;break;
            case '/':result=opnd1/opnd2;break;
            case '^':result=pow(opnd1,opnd2);break;
            default:cout<<"INVALID OPERATOR!";
        }
        S.push(result);
        }

    }

    cout<<"Result of the evaluated postfix expression is :"<<result<<endl;
}

int main(){
    string Postfix;
    cout<<"Enter the postfix expression:";
    getline(cin,Postfix);
    evaluatePostfix(Postfix);
    return 0;
}