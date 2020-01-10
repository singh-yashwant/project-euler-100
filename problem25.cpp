#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<bits/stdc++.h>
#include<map>

#include "timer.h"

using namespace std;

string add_strings(string a, string b){
	string sum = "";
	int n1 = a.size() - 1;
	int n2 = b.size() - 1;
	int carry = 0;
	int cur_sum = 0;
	while(n1 >= 0 && n2 >= 0){
		cur_sum = ((a[n1] - '0') + (b[n2] - '0') + carry) % 10;
		carry = ((a[n1] - '0') + (b[n2] - '0') + carry) / 10;
		sum = to_string(cur_sum) + sum;
		--n1;
		--n2;
	}
	while(n1 >= 0){
		cur_sum = ((a[n1] - '0') + carry) % 10;
		carry = ((a[n1] - '0') + carry) / 10;
		sum = to_string(cur_sum) + sum;
		--n1;
	}
	while(n2 >= 0){
		cur_sum = ((b[n2] - '0') + carry) % 10;
		carry = ((b[n2] - '0') + carry) / 10;
		sum = to_string(cur_sum) + sum;
		--n2;
	}
	if(carry != 0)
		sum = to_string(carry) + sum;
	return sum;
}

int main()
{
	ExecutionTimer tmr;
	string a = "1", b = "1";
	long long int n = 3;
	while(true){
		string c = add_strings(a, b);
		a = b;
		b = c;
		//cout << c << ", " << n;
		//getchar();
		if(c.size() >= 1000){
			cout << n;
			break;
		}
		n++;
	}
	return 0;
}
