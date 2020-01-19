#include<iostream>
#include<vector>
#include<map>
#include<math.h>
using namespace std;

int is_prime(long long int n){
	for(long long int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int main(){
	
	int n = 1;
	int iteration = 1;
	double ratio = 1;
	double num_count = 0, den_count = 1;
	while(ratio >= 0.1){
		int a, b, c, d, factor = 2 * iteration;
		a = n + factor;
		b = a + factor;
		c = b + factor;
		d = c + factor;
		n = d;
		iteration++;
		num_count += (is_prime(a)+ is_prime(b)+ is_prime(c)+ is_prime(d));
		den_count += 4;
		ratio = num_count / den_count;
	}
	cout << "side length: " << 2 * iteration - 1 << endl;
	
}
