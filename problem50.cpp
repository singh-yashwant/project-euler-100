#include<iostream>
#include<vector>
#include<map>
#include<math.h>
using namespace std;

map < int , bool> is_prime;
vector < int > primes;

bool prime_factors(int n){
	int factors = 0;
	for(auto x: primes){
		if(n % x == 0){
	//		cout << i;
	//		getchar();
			factors++;
		}
		if(factors >= 4 || x >= n)
			break;
	}
	return (bool)(factors == 4);
}

int main(){
	for(int i = 2; i < 1000000; i++)
		is_prime[i] = true;
	is_prime[1] = false;
	is_prime[2] = true;
	for(int i = 2; i < sqrt(1000000); i++){
		if(is_prime[i]){
			for(int j = 2; i * j < 1000000; j++){
				is_prime[i*j] = false;
			}
		}
	}
	for(auto x: is_prime){
		if(x.second)
			primes.push_back(x.first);
	}
	
	cout << primes.size() << endl;
	int max_chain_length = 0, max_prime_sum = 0;
	int limit = 1000000;
	for(unsigned int i = 0; i < primes.size() && primes[i] < limit; i++){
		int sum = 0;
		int chain_length = 0;
		unsigned int j;
		for(j = i;  j < primes.size() && (sum + primes[j]) < limit; j++){
			sum += primes[j];
			chain_length++;
			if(is_prime[sum] && chain_length >= max_chain_length){
				max_chain_length = chain_length;
				max_prime_sum = sum;
			}
		}
	}
	cout << "chain length: " << max_chain_length << endl;
	cout << "chain sum:    " << max_prime_sum << endl;	
}
