#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<map>

using namespace std;

bool is_prime(int n){
	for(int i = 2; i < n; i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

int main(){
	int answer = 1;
	for(int i = 2; i <= 20; i++){
		if(is_prime(i)){
			int temp = 1;
			while(temp * i < 20)
				temp *= i;
			cout << temp << endl;
			answer *= temp;
		}
	}
	cout << answer;
	return 0;
}

