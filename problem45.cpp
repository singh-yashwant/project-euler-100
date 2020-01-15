#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>

using namespace std;

bool is_pentagonal(long long int n){
	long long int a = 3, b = -1, c = -2*n;
	long long int d = sqrt(b * b - 4 * a * c);
	
	if (d * d != (b * b - 4 * a * c))
		return false;
	
	float r1 = (float)(-1 * b + d) / (2 * a);
	if (r1 != (int)r1)
		return false;
	
	return true;
}

bool is_triangle(long long int n){
	long long int a = 1, b = 1, c = -2*n;
	long long int d = sqrt(b * b - 4 * a * c);
	
	if (d * d != (b * b - 4 * a * c))
		return false;
	
	float r1 = (float)(-1 * b + d) / (2 * a);
	if (r1 != (int)r1)
		return false;
	
	return true;
}

bool is_hexagonal(long long int n){
	long long int a = 2, b = -1, c = -1 * n;
	long long int d = sqrt(b * b - 4 * a * c);
	
	if (d * d != (b * b - 4 * a * c))
		return false;
	
	float r1 = (float)(-1 * b + d) / (2 * a);
	if (r1 != (int)r1)
		return false;
	
	return true;
}

int main(){
	
	for(long long int i = 1;; i++){
		long long int x = i * (2 * i - 1);
		if(x > 40755 && is_pentagonal(x) && is_triangle(x)){
			cout << x << endl;
			break;
		}
	}
	
	
	//cout << is_triangle(1533776805) << endl;
	//cout << is_pentagonal(209172831) << endl;
	//cout << is_hexagonal(1533776805) << endl;
	
	return 0;
}
