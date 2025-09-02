// QUES3:  Write a program that checks if an expression has balanced parentheses. 




//Time Complexity
//Loop runs n times, where n = str.size().
//Each iteration does only O(1) stack operations.
// Total time complexity = O(n)

//Space Complexity
//the worst case (like "((((((("), all characters are pushed onto the stack.
//So the stack can hold up to n characters.
//Space complexity = O(n)

#include<iostream>
#include<stack>
using namespace std;

string balanceParentheses(stack<char> S, string str){

    for(int i=0;i<str.size();i++){
        
        if(str[i]=='{'||str[i]=='['||str[i]=='('){
            S.push(str[i]);

        }else if(str[i]=='}'||str[i]==']'||str[i]==')'){
            if(S.empty()) return "Not balanced---> (extra closing bracket at position "+to_string(i)+")";
            

            if((str[i]=='}'&& S.top()=='{')||(str[i]==']'&& S.top()=='[')|| (str[i]==')'&& S.top()=='('))
            {
            S.pop();
            }else{
                return "Not balanced (mismatched at position " + to_string(i) + ")";
            }
        }
    }

    cout<<"Balanced one are out!!\n\n\n";
    if(S.empty()) return "VALID EXPRESSION! Balanced parentheses   !\n";
    return "Parentheses Not balanced!!!!!\n";

}

int main(){
    stack<char> S;
    string str;
    cout<<"Enter the expression:";
    cin>>str;
    string result=balanceParentheses(S,str);
    cout<<result<<endl;
    return 0;
}