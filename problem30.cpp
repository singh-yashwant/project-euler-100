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
	int final_sum = 0;
	for(auto i = 2; i < 1000000; i++){
		string s = to_string(i);
		long long int sum = 0;
		for(auto x: s)
			sum += pow((x - '0'), 5);
		if(i == sum){
			cout << s << "        " << sum << endl;
			final_sum += i;
		}
		//cout << sum - i << endl;
	}
	cout << final_sum;
	return 0;
}

// min 7 digit no = 1000000 and max sum a 7 digit no can have is 9**5 * 7 = 413343 < 1000000, therfore required no. 
// should have less than 7 digits
