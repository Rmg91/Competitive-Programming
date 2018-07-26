#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
int A[ N + 5 ];

int main(){
	int n;
	cin >> n;
	for( int i = 0; i < n; ++i ) cin >> A[ i ];
	sort( A, A + n );
	bool ok = 0;
	for( int i = 2; i < n; ++i ){
		if( A[ i ] < A[ i - 1] + A[ i - 2 ] ) ok = 1;
	}
	if( ok ) puts("YES");
	else puts("NO");
	return 0;
}
