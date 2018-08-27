#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
priority_queue<int> Q;

int main(){
	int n, x;
	scanf("%d",&n);
	int lim = n/2;
	for(int i = 0; i < n; ++i ){
		scanf("%d",&x);
		Q.push(x);
		if( i > lim ) Q.pop();	
	}
	ll a = Q.top(), b=-1;
	Q.pop();
	ll ans = a;
	if( (n&1) == 0 ){
		b = Q.top();
		ans = a + b;
		printf("%.1lf\n",ans/2.0);
	}
	else printf("%.1lf\n",(double)ans);
	return 0;
}
