#include <bits/stdc++.h>
using namespace std;

int rem( string s, int mod ){
	int n = s.size();
	int ans = 0;
	for( int i = 0; i < n; ++i ){
		ans = ( ans * 10 + ( s[ i ] - '0' ) ) % mod;
	}
	return ans;
}

bool isLeap( string  n ){
	if( rem(n,400) == 0 ) return 1;
	if( rem(n,4) == 0 && rem(n,100) != 0 ) return 1;
	return 0;
}

int main(){
	int cases = 0;
	string n;
	while( cin >> n ){
		cases++;
		if( cases > 1 ) puts("");
		if( isLeap( n ) ){
			puts("This is leap year.");
			if( rem(n,15) == 0 ) puts("This is huluculu festival year.");
			if( rem(n,55) == 0 ) puts("This is bulukulu festival year.");
		}
		else{
			if( rem(n,15) == 0 ) puts("This is huluculu festival year.");
			else puts("This is an ordinary year.");
		}
	}
	return 0;
}
