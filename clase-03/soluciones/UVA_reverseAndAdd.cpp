#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll inv( ll n ){
	ll inv = 0;
	while( n > 0 ){
		inv = inv*10 + n%10;
		n /= 10;
	}
	return inv;
}

bool ispal( ll n ){
	return n == inv( n );
}

void doit(){
	ll n, ct = 0;
	scanf("%lld", &n);
	while( !ispal( n ) ){
		ct++;
		n += inv( n );
	}
	printf("%lld %lld\n", ct, n);
}

int main(){
	int t;
	scanf("%d", &t);
	while( t-- ) doit();
}
