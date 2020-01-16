#include<iostream>
#include<vector>
#include<map>
#include<math.h>
using namespace std;

int main(){
	map < int , bool> is_prime;
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
	vector < int > primes;
	for(auto x: is_prime){
		if(x.second)
			primes.push_back(x.first);
	}
	cout << primes.size();
	/*
	for(auto x: primes){
		cout << x;
		getchar();
	}
	*/
	map < int , bool > can_be_written;
	for(int i = 3;;i++){
		can_be_written[i] = false;
		if(!is_prime[i] && i % 2 != 0){
			for(auto x: primes){
				for(int j = 1;; j++){
					if(j * j * 2 + x > i)
						break;
					else if(j * j * 2 + x == i){
						can_be_written[i] = true;
						break;
					}
				}
				if(x >= i){
					break;
				}
			}
			if(!can_be_written[i]){
				cout << "found " << i << endl;
				exit(0);
			}
		}
	}
	return 0;
}
