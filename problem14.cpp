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
	
	long int max_chain_length = 0;
	long max_chain_number = -1;
	for(int i = 1; i <= 1000000; i++){
		long long int n = i;
		int temp_chain_length = 0;
		while(n != 1){
			
			//cout << n << endl;
			//getchar();
		
			temp_chain_length++;
			if(n % 2 == 0)
				n = n / 2;
			else
				n = 3*n + 1;
		}
		if(temp_chain_length >= max_chain_length){
			max_chain_length = temp_chain_length;
			max_chain_number = i;
			cout << "new max chain: " << max_chain_length << ", for: " << max_chain_number << endl;
			//getchar();
		}
		//else
			//cout << i << endl;
	}
		
	return 0;
}


// 2 ** 20 -> 1048576
// 349525
// 699050
// 233016
// 466032
