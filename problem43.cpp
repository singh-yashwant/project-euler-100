#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<bits/stdc++.h>
#include<map>

#include "timer.h"

using namespace std;

void find_all_permutations(string s, int depth, vector < string > &combinations){
	if(depth == 9){
		if(s[0] == '0')
			return;
		combinations.push_back(s);
		return;
	}
	for(int i = depth; i <= 9; i++){
		string temp = s;
		char x = temp[i];
		temp[i] = temp[depth];
		temp[depth] = x;
		find_all_permutations(temp, depth + 1, combinations);
	}
	return;
}

bool satisfy_property(string s){
	bool p2, p3, p5, p7, p11, p13, p17;
	p2 = stoi(s.substr(1, 3)) % 2 == 0;
	p3 = stoi(s.substr(2, 3)) % 3 == 0;
	p5 = stoi(s.substr(3, 3)) % 5 == 0;
	p7 = stoi(s.substr(4, 3)) % 7 == 0;
	p11 = stoi(s.substr(5, 3)) % 11 == 0;
	p13 = stoi(s.substr(6, 3)) % 13 == 0;
	p17 = stoi(s.substr(7, 3)) % 17 == 0;
	return p2 && p3 && p5 && p7 && p11 && p13 && p17;	
}
 

int main()
{
	ExecutionTimer tmr;
	
	vector < string > combinations;
	string s = "0123456789";
	int depth = 0;
	find_all_permutations(s, depth, combinations);
	cout << combinations.size() << endl;
	
	
	long long int ans_sum = 0;
	for(auto x: combinations){
		if(satisfy_property(x)){
			cout << x << endl;
			//getchar();
			ans_sum += (long long int)stol(x);
		}
	}
	cout << "the sum is: " << ans_sum << endl;
	
	//cout << satisfy_property(to_string(1406357289)) << endl;
	return 0;
}
