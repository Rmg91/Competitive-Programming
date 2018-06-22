#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int n;
	while( 1 ){
		int lo = 1, hi = 10;
		while( cin >> n ){
			if( n == 0 ) return 0;
			getline(cin, s);
			getline(cin, s);
			if( s == "right on" ){
				if( n >= lo && n <= hi ) puts("Stan may be honest");
				else puts("Stan is dishonest");
				break;
			}
			if( s == "too high" ) hi = min( hi, n-1 );	
			else lo = max( lo, n+1 );
		}
	}
}
