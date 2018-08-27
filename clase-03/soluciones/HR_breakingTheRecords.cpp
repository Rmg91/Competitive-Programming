#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x, mini, maxi, h = 0, l = 0;
	cin >> n >> x;
	mini = maxi = x;
	for( int i = 1; i < n; ++i ){
		cin >> x;
		if( x > maxi ){
			maxi = x;
			h++;
		}
		if( x < mini ){
			mini = x;
			l++;
		}
	}
	cout << h << " " << l;
	return 0;
}

