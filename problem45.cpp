#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>

using namespace std;

bool is_pentagonal(int n){
	int a = 3, b = -1, c = -2*n;
	float D = sqrt(b * b - 4 * a * c);
	int d = sqrt(b * b - 4 * a * c);
	
	if (d != D)
		return false;
	
	float r1 = (float)(-1 * b + d) / (2 * a);
	if (r1 != (int)r1)
		return false;
	
	return true;
}

bool is_triangle(int n){
	int a = 1, b = 1, c = -2*n;
	float D = sqrt(b * b - 4 * a * c);
	int d = sqrt(b * b - 4 * a * c);
	
	if (d != D)
		return false;
	
	float r1 = (float)(-1 * b + d) / (2 * a);
	if (r1 != (int)r1)
		return false;
	
	return true;
}

bool is_hexagonal(int n){
	int a = 2, b = -1, c = -1 * n;
	float D = sqrt(b * b - 4 * a * c);
	int d = sqrt(b * b - 4 * a * c);
	
	if (d != D)
		return false;
	
	float r1 = (float)(-1 * b + d) / (2 * a);
	if (r1 != (int)r1)
		return false;
	
	return true;
}

int main(){
	vector < long long int > triangle_set;
	
	for(int x = 1; x < 100000000 ;x++){
		if(is_pentagonal(x) && is_hexagonal(x) && is_triangle(x)){
			cout << x << endl;
			
		}
	}
	
	/*
	cout << is_triangle(40755) << endl;
	cout << is_pentagonal(40755) << endl;
	cout << is_hexagonal(40755) << endl;

	for(int i = 1; i < 100; i++){
		if(is_hexagonal(i))
			cout << i << endl;
	}
	*/
	return 0;
}
