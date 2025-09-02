#include<iostream>
using namespace std;
#define MAXLEN 100

struct stack{
    int elements[MAXLEN];
    int top;
};



stack init(){ 
    stack S;              //This means the function returns a structure of type stack
    S.top=-1;
    return S;
}
// init() is a user-defined function that initializes the stack.
// It sets top = -1 (empty stack) and returns the stack object.
// Works like a manual constructor for the struct.

bool isEmpty(stack S){
    if(S.top==-1) return true;
    else return false;
}

bool isFull(stack S){
    return (S.top==MAXLEN-1) ;
    // we can also write in this way it will only return true when condn is ture otherwise false
}

int top(stack S){
    if(isEmpty(S)==true)
    cout<<"Empty Stack!!"<<endl;
    else return S.elements[S.top];
}

stack push(stack S,int x){
    if(isFull(S)==true) cout<<"Stack is Full!!!"<<endl;
    else S.elements[++S.top]=x;                    //BOTH THESE ARE SAME	++S.top;              
	                                              //                        S.element[S.top] = x;
    return S;
}

stack pop(stack S){
    if(isEmpty(S)==true) cout<<"UNDERFLOW!!\n";
    else {cout<<"\nElement popped is: "<<S.elements[S.top];
    S.top--;
    }
    return S;

}

void print ( stack S )
{	int i;
    for (i = S.top; i >= 0; --i)
        cout<<S.elements[i]<<" ";
}


int main(){
    stack S;
    S=init();
    S = push(S,10);
    S = push(S,15);
    S = push(S,20);
    S = push(S,25);
    cout<<"\nCurrent stack : ";
    print(S);
    cout<<"\nTop is pointing to = "<<top(S);
    S = pop(S);
    S = pop(S);
    cout<<"\nCurrent stack : ";
    print(S);
    cout<<"\nTop is pointing to = "<< top(S);

    return 0;
}