#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin >> t;
	long long tim = 3, inc = 3;
	while( t > tim ){
		inc *= 2;
		tim += inc;
	}
	cout << tim - t + 1;
	return 0;
}
