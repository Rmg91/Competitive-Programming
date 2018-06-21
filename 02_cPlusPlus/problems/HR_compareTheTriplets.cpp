#include <bits/stdc++.h>
using namespace std;

int main(){
	int A[ 3 ], B[ 3 ];
	int ptsA = 0, ptsB = 0;
	for( int i = 0; i < 3; ++i ) cin >> A[ i ];
	for( int i = 0; i < 3; ++i ) cin >> B[ i ];
	for( int i = 0; i < 3; ++i){
		if( A[ i ] > B[ i ] ) ptsA = ptsA + 1;
		if( B[ i ] > A[ i ] ) ptsB = ptsB + 1;
	}
	cout << ptsA << " " << ptsB;
	return 0;
}
