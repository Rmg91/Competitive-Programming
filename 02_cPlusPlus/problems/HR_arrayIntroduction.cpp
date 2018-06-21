#include <bits/stdc++.h>
using namespace std;

int main() {
	int A[ 1000 ], n;
	cin >> n;
	for( int i = 0; i < n; ++i ) cin >> A[ i ];
    for( int i = n-1; i >= 0; i-- ){
        if( i == n-1 ) cout << A[ i ];
        else cout << " " << A[ i ];
    }
    cout << "\n";
    return 0;
}

