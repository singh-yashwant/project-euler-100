#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

bool is_palindrome(int n){
	string rev, s = to_string(n);
	rev = s;
	reverse(rev.begin(), rev.end());
	if (s == rev)
		return true;
	return false;
}

int main(){
	vector < int > possible_solutions;
	for(int i = 999; i > 100; i--){
		for(int j = 999; j > 100; j--)
			possible_solutions.push_back(i * j);
	}
	sort(possible_solutions.begin(), possible_solutions.end());
	for(int n = possible_solutions.size() - 1; n >= 0; n--){
		if(is_palindrome(possible_solutions[n])){
			cout << possible_solutions[n];
			break;
		}
	}
	return 0;
}
