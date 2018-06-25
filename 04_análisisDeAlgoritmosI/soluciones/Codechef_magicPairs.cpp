#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, x;
	long long n;
	cin >> t;
	while( t-- ){
		cin >> n;
		for( int i = 0; i < n; ++i ) cin >> x;
		cout << (n-1)*n/2 << "\n";
	}
	return 0;
}
 
