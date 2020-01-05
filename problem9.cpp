#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<bits/stdc++.h>
#include<map>

#include "timer.h"

using namespace std;

int main()
{
	int a, b, c;
	for(a = 1; a <= 1000; a++){
		for(b = 1; b <= 1000; b++){
			//cout << a << ", " << b << endl;
			c = 1000 - a - b;
			if( a*a + b*b == c*c){
				cout << a << ", " << b << ", " << c << endl;
				cout << a * b * c << endl;
				exit(0);
			}
		}
	}
	
	return 0;
}
