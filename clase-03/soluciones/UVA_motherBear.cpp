#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while( getline(cin,s) ){
		if( s == "DONE" ) break;
		string cad = "";
		for( int i = 0; i < s.size(); ++i ){
			if( ( s[ i ] >= 'A' && s[ i ] <= 'Z' )  || ( s[ i ] >= 'a' && s[ i ] <= 'z' ) ){
				cad += toupper( s[ i ] );
			}
		}
		string aux = cad;
		reverse( cad.begin(), cad.end() );
		if( aux == cad ) puts("You won't be eaten!");
		else puts("Uh oh..");
	}
}

