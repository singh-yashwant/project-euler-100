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

int main(){
	vector < long long int > pentagonal_set;
	
	for(int n = 1; n <= 10000; n++){
		long long int temp = n * (3 * n - 1) / 2;
		pentagonal_set.push_back(temp);
	}
	
	long long int p1 = 0, p2 = 0, diff = 999999999;
	for(int i = 0; i < 10000; i++){
		for(int j = 0; j < 10000; j++){
			long long int a = pentagonal_set[i];
			long long int b = pentagonal_set[j];
//			cout << "checking " << a << ", " << b << endl;
			if(is_pentagonal(a + b) && is_pentagonal(abs(a - b))){
				if(abs(a-b) < diff){
					p1 = a;
					p2 = b;
					diff = abs(a - b);
					cout << abs(p1 - p2);
					getchar();
				}
			}
		}
	}
	cout << abs(p1 - p2) << endl;
	
	cout << is_pentagonal(0) << endl; 
	return 0;
}
