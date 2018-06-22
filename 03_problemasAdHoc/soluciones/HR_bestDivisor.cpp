#include <bits/stdc++.h>
using namespace std;

int sumDig( int n ){
	int sum = 0;
	while( n > 0 ){
		sum += ( n % 10 );
		n /= 10;
	}
	return sum;
}

int getBest( int a, int b ){
	int sA = sumDig( a ), sB = sumDig( b );
	if( sA > sB ) return a;
	if( sB > sA ) return b;
	return min( a, b );
}

int main(){
	int n, best = 1;
	cin >> n;
	for( int i = 1; i*i <= n; ++i ){
		if( n % i == 0 ){
			best = getBest( best, i ) ;
			best = getBest( best, n / i ) ;
        } 
    }
	cout << best;
	return 0;
}
