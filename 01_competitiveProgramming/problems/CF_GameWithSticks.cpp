#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, turns;
	cin >> n >> m;
	turns = min( n, m );
	if( turns % 2 == 1 ) cout << "Akshat";
	else cout << "Malvika";
	return 0;
}
