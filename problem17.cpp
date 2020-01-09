#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<bits/stdc++.h>
#include<map>

#include "timer.h"
using namespace std;

string get_string(int x, map < int, string > &m){
	string s = to_string(x);
	string ans = "";
	int sz = s.size();
	if(sz == 1){
		ans = m[s[0] - '0'];
	}
	else if(sz == 2){
		int temp = (s[0] - '0')*10 + (s[1]-'0');
		if(temp < 20 && temp > 10)
			ans = m[temp];
		else
			ans = m[(s[0] - '0') * 10] + m[s[1] - '0'];
	}
	else if(sz == 3){
		ans = m[s[0] - '0'] + "hundred";
		int temp = (s[1] - '0')*10 + (s[2]-'0');
		if(temp)
			ans = (ans + "and" + get_string(temp, m));
	}
	else
		ans = "onethousand";
	return ans;

}

int main()
{
	ExecutionTimer tmr;
	map < int, string > number_to_word;
	number_to_word[1] = "one";
	number_to_word[2] = "two";
	number_to_word[3] = "three";
	number_to_word[4] = "four";
	number_to_word[5] = "five";
	number_to_word[6] = "six";
	number_to_word[7] = "seven";
	number_to_word[8] = "eight";
	number_to_word[9] = "nine";
	number_to_word[11] = "eleven";
	number_to_word[12] = "twelve";
	number_to_word[13] = "thirteen";
	number_to_word[14] = "fourteen";
	number_to_word[15] = "fifteen";
	number_to_word[16] = "sixteen";
	number_to_word[17] = "seventeen";
	number_to_word[18] = "eighteen";
	number_to_word[19] = "nineteen";
	number_to_word[10] = "ten";
	number_to_word[20] = "twenty";
	number_to_word[30] = "thirty";
	number_to_word[40] = "forty";
	number_to_word[50] = "fifty";
	number_to_word[60] = "sixty";
	number_to_word[70] = "seventy";
	number_to_word[80] = "eighty";
	number_to_word[90] = "ninety";
	number_to_word[100] = "hundred";
	number_to_word[1000] = "thousand";
	
	int sum = 0;
	for(int i = 1; i <= 1000; i++){
		string s = get_string(i, number_to_word);
		cout << s << endl;
		sum += s.size();
	}
	cout << sum;
	//cout << get_string(115, number_to_word).size();
	return 0;
}
