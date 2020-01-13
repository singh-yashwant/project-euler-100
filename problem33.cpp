#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<bits/stdc++.h>
#include<map>

#include "timer.h"

using namespace std;

int are_equal(int n1, int d1, int n2, int d2){
	for(int x = n1; x >= 2; x--){
		if(n1 % x == 0 && d1 % x == 0){
			n1 /= x;
			d1 /= x;
		}
	}
	for(int x = n2; x >= 2; x--){
		if(n2 % x == 0 && d2 % x == 0){
			n2 /= x;
			d2 /= x;
		}
	}
	if(n1 == n2 && d1 == d2)
		return 1;
	return 0;
}

long long int total_num = 1;
long long int total_den = 1;

int is_reduciblei(int n, int d){
	string ns = to_string(n);
	string ds = to_string(d);
	if(n % 11 == 0 and d % 11 == 0)
		return 0;
	if((ns[1] - '0') != (ds[0] - '0'))
		return 0;
	if(are_equal(n, d, (ns[0] - '0'), (ds[1] - '0'))){
		cout << ns << "/" << ds << endl;
		for(int x = n; x >= 2; x--){
			if(n % x == 0 && d % x == 0){
				n /= x;
				d /= x;
			}
		}
		total_num *= n;
		total_den *= d;
		return 1;
	}
	return 0;
	
}


int main()
{
	ExecutionTimer tmr;
	int count = 0;
	for(int n = 11; n < 100; n++){
		for(int d = n+1; d < 100; d++){
			if(n % 10 == 0 && d % 10 == 0)
				continue;
				
			int temp = is_reduciblei(n, d);
			count += temp;
		}
	}
	cout << endl << count << endl;
	cout << total_num << "/ " << total_den;
	return 0;
}
