#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<bits/stdc++.h>
#include<map>

#include "timer.h"

using namespace std;

string lstrip(string s){
	unsigned int to_be_erased = 0;
	for(auto x: s){
		if(x == '0')
			to_be_erased++;
		else
			break;
	}
	if(to_be_erased == s.size())
		return "0";
	s.erase(0, to_be_erased);
	return s;
}

bool is_palindrome(string n1, string n2){
	string r1 = n1;
	string r2 = n2;
	reverse(r1.begin(), r1.end());
	reverse(r2.begin(), r2.end());
	return (r1 == n1 && r2 == n2);
}

int main()
{
	ExecutionTimer tmr;
	long long int ans_sum = 0;
	for(int i = 0; i < 1000000; i++){
		string s = lstrip(bitset<32>(i).to_string());
		if(is_palindrome(to_string(i), s)){
			cout << i << ", " << s << endl;
			ans_sum += i;
		}
	}
	cout << ans_sum;
	return 0;
}
