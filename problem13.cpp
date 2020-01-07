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

	vector < string > numbers;
	for(int i = 0; i < 100; i++){
		string temp;
		cin >> temp;
		numbers.push_back(temp);
	}
	long long int total_sum = 0, carry = 0;
	string final_sum = "";
	for(int digit_index = 49; digit_index >= 0; digit_index--){
		long long int current_index_sum = 0;
		for(int row = 0; row < numbers.size(); row++){
			current_index_sum += (numbers[row][digit_index] - '0');
		}
		cout << current_index_sum << " current index sum \n";getchar();
		current_index_sum += carry;
		
		string current_sum_string = to_string(current_index_sum);
		cout << current_sum_string << " after adding carry\n";getchar();
		
		carry = (current_sum_string[0] - '0') * 10  + (current_sum_string[1] - '0');
		cout << carry << "next carrry \n";getchar();
		
		final_sum = current_sum_string[2] + final_sum;
		cout << final_sum << " final sum status\n"; getchar();
		
		cout << current_sum_string << endl;
		cout << endl << endl << final_sum;
	}
	cout << endl << endl << final_sum;
	
	return 0;
}
