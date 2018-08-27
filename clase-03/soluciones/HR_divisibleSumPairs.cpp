#include <bits/stdc++.h>
using namespace std;

int main(){
	int A[ 100 ];
	int n, k;
	cin >> n >> k;
	for( int i = 0; i < n; ++i ){
		cin >> A[ i ];
	}
	int res = 0;
	for( int i = 0; i < n; ++i ){
		for( int j = 0; j < n; ++j ){
			if( i < j && ( A[ i ] + A[ j ] ) % k == 0 ) res++;
		}
	}
	cout << res;
	return 0;
}

