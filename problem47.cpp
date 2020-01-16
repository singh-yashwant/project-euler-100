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
	
	int i = 1;
	while(i < 1000000 - 4){
		if(prime_factors(i) && prime_factors(i+1) && prime_factors(i+2) && prime_factors(i + 3)){
			cout << "found " << i << endl;
			exit(0);
		}
		i++;
	}
}
