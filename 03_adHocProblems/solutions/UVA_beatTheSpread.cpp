#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, S, D;
	cin >> t;
	while( t-- ){
		cin >> S >> D;
		if( (S-D) >= 0 && (S+D)%2 == 0 && (S-D)%2 == 0 ){
			cout << (S+D)/2 << " " << (S-D)/2 << endl;
		}
		else puts("impossible");
	}
	return 0;
}
