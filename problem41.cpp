#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<bits/stdc++.h>
#include<map>

#include "timer.h"
using namespace std;

bool is_n_digit_pandigital(string s){
	unsigned int len = s.size();
	unsigned int count = 0;
		
	map < int, int > int_exist;
	for(int i = 1; i < 10; i++)
		int_exist[i] = 0;
	
	for(auto x: s)
		int_exist[x - '0'] = 1;
	
	for(unsigned int x = 1; x <= len; x++)
		count += int_exist[x];
	
	return(len == count);
}

int main()
{
	ExecutionTimer tmr;
	
	long long int largest = 0;
	map < int, bool > is_prime;
	
	is_prime[1] = false;
	for(int i = 2; i <= 7654321; i++)
		is_prime[i] = true;

	for(int i = 2; i <= 7654321; i++){
		if(is_prime[i]){
			for(int j = 2; i * j <= 7654321; j++){
				int index = i * j;
				is_prime[index] = false;
			}
		}
	}
	for(long long int n = 2; n <= 7654321; n++){
		if(is_prime[n] && is_n_digit_pandigital(to_string(n)))
			largest = max(largest, n);
	}
	
	cout << largest;
	
	//cout << is_n_digit_pandigital(to_string(987654));
	return 0;
}
// 8 and 9 digits solutins are not possible since sigma(8) and sigma(9) are both divisible by 3 ;-)
