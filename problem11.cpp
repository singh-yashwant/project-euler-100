#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<bits/stdc++.h>
#include<map>
#include<algorithm>

#include "timer.h"

using namespace std;

long long int current_product(int i, int j, vector < vector < long long int > > &mat){
	long long int right = 1, down = 1, rightd = 1, leftd = 1;
	if(j <= 16)
		right = mat[i][j+1] * mat[i][j+2]  * mat[i][j+3]  * mat[i][j];
	if(i <= 16)
		down = mat[i][j] * mat[i+1][j]  * mat[i+2][j]  * mat[i+3][j];
	if(i <= 16 && j <= 16)
		rightd = mat[i][j] * mat[i+1][j+1]  * mat[i+2][j+2]  * mat[i+3][j+3];
	if(i <= 16 && j >= 3)
		leftd = mat[i][j] * mat[i+1][j-1]  * mat[i+2][j-2]  * mat[i+3][j-3];
	

	return std::max(right, max(down, max(leftd, rightd)));
}

int main()
{
	ExecutionTimer tmr;
	
	long long int product = 1;
	vector < vector < long long int > > matrix; 
	for(int i = 0; i < 20; i++){
		vector < long long int > row;
		for(int j = 0 ; j < 20; j++){
			string s; 
			cin >> s;
			row.push_back(stoi(s));
		}
		matrix.push_back(row);
	}
	
	cout << "loops started, current product: " << product << endl;
	
	int i, j;
	//searching for horizontal rows
	for(i = 0; i < 20; i++){
		for(j = 0; j < 20; j++){
			long long int temp = current_product(i, j, matrix);
			product = std::max(product, temp);
		}
	}
	cout << product;
	return 0;
}
