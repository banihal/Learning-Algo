#include <bits/stdc++.h>
using namespace std;
void AllSubstr(string s, int i, int j){
	int n = s.size();
	string str = "";
	if(i > n)return;
	if(j > n){
		//str = "";
		i++;
		j= i;
	}
	str += s.substr(i, (j-i));
	cout << str << endl;
	AllSubstr(s, i,j+1);
}
int main() {
	// your code goes here
	string s = "abcdefg";
	//string str = "";
	AllSubstr(s, 0,0);
	return 0;
}
