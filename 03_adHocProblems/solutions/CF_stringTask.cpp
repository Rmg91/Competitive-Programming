#include <bits/stdc++.h>
using namespace std;

bool isVowel( char car ){
	char c = char ( tolower( car ) );
	if( c =='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ) return 1;
	return 0;
}

int main(){
	string s;
	cin >> s;
	for( int i = 0; i < s.size(); ++i ){
		if( !isVowel( s[ i ] ) ) cout << "." << char( tolower( s[ i ] ) );
	}
	return 0;
}
