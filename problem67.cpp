#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<bits/stdc++.h>
#include<map>
#include <fstream>

#include "timer.h"

using namespace std;

int find_answer(int i, int j, vector < vector < int > > &data, vector < vector < int > > &ans){
	if(ans[i][j] != -1)
		return ans[i][j];
	if(i == 99){
		ans[i][j] = data[i][j];
		return ans[i][j];
	}
	ans[i][j] = data[i][j] + max(find_answer(i+1, j, data, ans), find_answer(i+1, j+1, data, ans));
	return ans[i][j];
		
}

int main()
{
	ExecutionTimer tmr;
	ifstream inFile;
	inFile.open("problem67testdata.txt");
	
	vector < vector < int > > data;
	vector < vector < int > > answer;
	
	for(int i = 0; i < 100; i++){
		vector < int > temp;
		vector < int > answer_temp;
		for(int j = 0; j <= i; j++){
			int temp2 = 0;
			inFile >> temp2;
			temp.push_back(temp2);
			answer_temp.push_back(-1);
		}
		data.push_back(temp);
		answer.push_back(answer_temp);
	}
	int ans = find_answer(0, 0, data, answer);
	
	cout << endl << endl << ans << endl;
	
	inFile.close();
	return 0;
}
