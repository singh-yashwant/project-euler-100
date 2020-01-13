#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<map>
#include "timer.h"

using namespace std;

map < int, int > factorial;

int main(){
	ExecutionTimer tmr;
	
	long long int count = 0;
	long long int ans = 0;
	factorial[0] = 1;
	for(int i = 1; i < 10; i++)
		factorial[i] = i * factorial[i-1];
	for(auto i = 3; i < 10000000; i++){
		long long int sum = 0;
		string s = to_string(i);
		for(auto x: s)
			sum += factorial[x - '0'];
		if(sum == i){
			count++;
			ans += i;
		}
	}
	cout << count << endl;
	cout << ans;
	
	return 0;
}

// min 8 digit no = 10000000 < max sum we can get for a 8 digt no(i.e 8 * 9!)
// therfore, we can only have upto 7 digit no's
