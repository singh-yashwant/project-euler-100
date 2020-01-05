#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<bits/stdc++.h>
#include<map>

#include "timer.h"

#define twoMillion 2000000
using namespace std;

int main()
{
	ExecutionTimer tmr;
	map < int, bool > is_prime;
	long long int i, prime_sum = 0;
	for(i = 2; i <= twoMillion; i++){
		is_prime[i] = true;
	}
	for(i = 2; i <= twoMillion; i++){
		if(is_prime[i]){
			prime_sum += i;
			int j = 2;
			while(i * j <= twoMillion){
				is_prime[i*j] = false;
				j++;
			}
		}
	}
	cout << prime_sum<< endl;
	
	return 0;
}

//142913828922
//142913828923    (while including 1)
