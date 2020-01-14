#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<bits/stdc++.h>
#include<map>

#include "timer.h"

using namespace std;

int main()
{
	ExecutionTimer tmr;
	string s = "0";
	for(int i = 1; i <= 1000000; i++)
		s += to_string(i);
	cout << (s[1] - '0') * (s[10] - '0') * (s[100] - '0') * (s[1000] - '0') * (s[10000] - '0') * (s[100000] - '0') * (s[1000000] - '0');
	return 0;
}
