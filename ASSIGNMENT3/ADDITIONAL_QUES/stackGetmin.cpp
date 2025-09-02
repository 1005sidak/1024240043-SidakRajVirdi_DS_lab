#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

//Using an Auxiliary Stack - O(1) Time and O(n) Space


// class specialStack{
//     stack<int> s;
//     stack<int> minStack;

// public:
//     void Push(int ele){
//         s.push(ele);

//         if(minStack.empty()|| ele< minStack.top()){
//             minStack.push(ele);
//         }else{
//             minStack.push(minStack.top());
//         }
//     }

//     int Pop(){
//         if (s.empty()) {
//             return -1;
//         }
//         int poppedEle=s.top();
//         s.pop();
//         minStack.pop();

//         return poppedEle;
//     }

//     int getMin(){
//         if (minStack.empty()) {
//             return -1;
//         }
//         return minStack.top();

//     }


//     int peek() {
//         if (s.empty()) {
//             return -1;
//         }
//         return s.top();
//     }


//     bool isEmpty() {
//         return s.empty();
//     }

// };


// int main() {
//     specialStack stack;
    
//     stack.Push(18);
//     stack.Push(19);

//     cout << stack.getMin() << endl;
//     stack.Push(29);
//     stack.Push(15);
//     cout << stack.getMin() << endl;
//     stack.Push(16);

//     cout << stack.getMin() << endl;

//     stack.Pop();
//     stack.Pop();
//     cout << stack.getMin() << endl;

//     return 0;
// }





//METHOD 2---------------->>>>Using a Pair in Stack - O(1) Time and O(n) Space

// stack<pair<int,int>> s;

// void push(int ele){
//     int newmin=s.empty() ? ele: min(ele ,s.top().second);
//     s.push({ele,newmin});

// }

// void pop() {
//         if (!s.empty()) {
//             s.pop();
//         }
// }
    
// int peek() {
//         if (s.empty()) {
//             return -1;
//         }

//         int top = s.top().first;
//         return top;
//     }
    
    
// int getMin() {
//         if (s.empty()) {
//             return -1;
//         }
        
//         int mn = s.top().second;
//         return mn;
// }

// int main() {
    
    
//     push(4);
//     push(5);
//     cout << peek() << " \n";
//     pop();
//     cout << getMin() << " \n";
//     push(1);
//     cout << getMin() << " \n";
// }




//METHOD 3 ------------------>>>> Without Extra Space- O(1) Time and O(1) Space

stack<int> s;
int minEle;

void push(int x) {
    if (s.empty()) {
        minEle = x;
        s.push(x);
    }
    else if (x < minEle) {
        // push modified value
        s.push(2*x - minEle);
        minEle = x;
    }
    else {
        s.push(x);
    }
}

void pop() {
    if (s.empty()) return;

    int top = s.top();
    s.pop();

    if (top < minEle) {
        // recover old min
        minEle = 2*minEle - top;
    }
}

int peek() {
    if (s.empty()) return -1;

    int top = s.top();
    return (top < minEle) ? minEle : top;
}

int getMin() {
    if (s.empty()) return -1;
    return minEle;
}

int main() {
    push(2);
    push(3);
    cout << "Top: " << peek() << "\n";   // 3
    cout << "Min: " << getMin() << "\n"; // 2
    
    pop();
    cout << "Min: " << getMin() << "\n"; // 2
    
    push(1);
    cout << "Min: " << getMin() << "\n"; // 1
}