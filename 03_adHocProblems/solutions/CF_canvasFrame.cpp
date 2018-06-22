#include <bits/stdc++.h>
using namespace std;

int f[ 101 ];

int main(){
	int n, x, ct = 0;
	cin >> n;
	for( int i = 0; i < n; ++i ){
		cin >> x;
		f[ x ]++;
	}
	for( int i = 0; i <= 100; ++i ){
		ct += ( f[ i ]/2 );
	}
	cout << ct/2;
	return 0;
}
