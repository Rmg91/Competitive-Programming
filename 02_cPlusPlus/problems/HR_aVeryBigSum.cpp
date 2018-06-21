#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long x, sum = 0;
    cin >> n;
    for( int i = 0; i < n; ++i ){
        cin >> x;
        sum += x;
    }
    cout << sum;
    return 0;
}
