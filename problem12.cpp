#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<bits/stdc++.h>
#include<map>

#include "timer.h"

using namespace std;

long long int nth_triangle_number(long long int n){
	return n * (n + 1) / 2;
}

map < long long int , int > factor_map;

int no_of_divisors(long long int n){
	int count = 0;
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			//cout << i << endl;
			count++;
		}
	}
	//factor_map[n] = count;
	return count;
}

int main()
{
	ExecutionTimer tmr;
	
	
	long long int n = 1;
	while(true){
		n++;
		long long int number = nth_triangle_number(n);
		if(number % 510510 != 0)
			continue;
		int divisors = no_of_divisors(number);
		if (divisors > 150)
			cout << divisors << ", " << number <<  ", " << n << endl;
		if(divisors >= 500){
			cout << endl << "index of the first triangle no. with 500 divisors is: " << n << endl;
			cout << "triangle no. is: " << nth_triangle_number(n) << endl;
			cout << "no of divisors: " << no_of_divisors(nth_triangle_number(n)) << endl;
			break; 	
		}
		
	}
	
	//cout << nth_triangle_number(3000) << endl;
	//cout << no_of_divisors(nth_triangle_number(3000)) << endl;
	return 0;
}

/*
index of the first triangle no. with 500 divisors is: 12375
triangle no. is: 76576500
no of divisors: 576
Elapsed: 55.6506 Seconds
*/
