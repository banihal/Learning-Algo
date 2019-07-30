#include <bits/stdc++.h>
using namespace std;
void pushAtBottom(stack<int> &s, int x){
	if(s.empty()){
		s.push(x);
		return;
	}
	int c = s.top();
	s.pop();
	pushAtBottom(s,x);
	s.push(c);
}
int main() {
	// your code goes here
	stack<int>s;
	s.push(2);
	s.push(3);
	s.push(4);
	pushAtBottom(s, 1);
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	return 0;
}
