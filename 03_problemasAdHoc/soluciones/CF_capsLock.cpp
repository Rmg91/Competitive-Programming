#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	if( islower( s[ 0 ] ) ){
		bool hasLower = 0;
		for( int i = 1; i < s.size(); ++i ){
			if( islower( s[ i ] ) ) hasLower = 1;
		}
		if( hasLower ) cout << s;
		else{
			for( int i = 0; i < s.size(); ++i ){
				if( isupper( s[ i ] ) ) cout << char( tolower( s[ i ] ) );
				else cout << char( toupper( s[ i ] ) );
			}
		}
	}
	else{
		bool hasLower = 0;
		for( int i = 1; i < s.size(); ++i ){
			if( islower( s[ i ] ) ) hasLower = 1;
		}
		if( hasLower ) cout << s;
		else{
			for( int i = 0; i < s.size(); ++i ){
				if( isupper( s[ i ] ) ) cout << char( tolower( s[ i ] ) );
				else cout << char( toupper( s[ i ] ) );
			}
		}
	}
	return 0;
}
