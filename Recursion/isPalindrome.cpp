#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int i, int j){
	//int n = s.size();
	bool ans;
	if(i <= j){
		if(s[i] != s[j]) return false;
		else{
			ans = isPalindrome(s,i+1,j-1);
		}
	}
	return true;
}
int main() {
	// your code goes here
	string s = "aaaa";
	cout << isPalindrome(s, 0,s.size()-1);
	return 0;
}
