#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<bits/stdc++.h>
#include<map>

#include "timer.h"

using namespace std;

bool is_pandigital(string n1, string n2, string p){
	if(n1.size() + n2.size() + p.size() != 9)
		return false;
	
	map < char , bool > occured;
	for(int i = 1; i <= 10; i++)
		occured[(char)i] = false;
	for(auto x: n1)
		occured[x] = true;
	for(auto x: n2)
		occured[x] = true;
	for(auto x: p)
		occured[x] = true;
	
	int answer = 0;
	for(auto x: occured)
		answer += (int)x.second;
	answer -= occured['0'];
	return (answer == 9);
	
}

int main()
{
	ExecutionTimer tmr;
	set < string > pandigital_set;
	int count1 = 0, count2 = 0;
	long long int final_sum = 0;
	for(int i = 1; i < 1000; i++){
		for(int j = 1; j < 10000; j++){
			auto product = (i * j);
			
			if(is_pandigital(to_string(i), to_string(j), to_string(product)) && pandigital_set.find(to_string(product)) == pandigital_set.end()){
				pandigital_set.insert(to_string(product));
				cout << i << " " << j << " " << product << endl;
				//getchar();
				count1++;
				final_sum += product;
			}
			if(is_pandigital(to_string(i), to_string(j), to_string(product))){
				//cout << i << " " << j << " " << product << endl;
				count2++;
			}
			
			
		}
	}
	cout << count1 << endl;
	cout << count2 << endl;
	cout << pandigital_set.size() << endl;
	cout << final_sum << endl;
	return 0;
}

// maximum combination can be of a 4 digit and a 1 digit no. (since min1 digit no * min 4 digit no = 4 digit no, total digits = 9, that's how loop size is choosen)
