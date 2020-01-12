#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

long long int find_possiblities(int sum, vector < vector < long long int >  > &sum_table, vector < int > &coin_values, int coin_index){
	if(sum < 0 || coin_index >= coin_values.size())
		return 0;
	
	if(sum == 0)
		return 1;

	if(sum_table[sum][coin_index] != -1){
		return sum_table[sum][coin_index];
	}
	 
	sum_table[sum][coin_index] = find_possiblities(sum - coin_values[coin_index], sum_table, coin_values, coin_index) + find_possiblities(sum, sum_table, coin_values, coin_index+1);
	return sum_table[sum][coin_index];
}

int main(){
	long long int total_sum, coins;
	cin >> total_sum >> coins;
	vector < vector < long long int >  > sum_table;
	vector < int > coin_values(coins);
	vector < long long int > temp;
	
	
	for(int i = 0; i < coins; i++){
		cin >> coin_values[i];
		temp.push_back(-1);
	}
	
	for(int i = 0; i <= total_sum; i++)
		sum_table.push_back(temp);
	
	sort(coin_values.begin(), coin_values.end());

	cout << find_possiblities(total_sum, sum_table, coin_values, 0);
	
	return 0;
}

// 73682
