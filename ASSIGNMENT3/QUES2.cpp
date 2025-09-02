#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	stack<char>stac;
	string str="DataStructure";
	for(int i=0;i<str.size();i++){
		stac.push(str[i]);
	}
	for(int i=0;i<str.size();i++){
		
		cout<<stac.top();
		stac.pop();
	}
	return 0;
}
