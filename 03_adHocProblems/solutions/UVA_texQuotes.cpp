#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int ct=0;
	while( getline(cin,s ) ){
		string cad = "";
		for( int i=0; i < s.size(); ++i ){
			if( s[ i ] != '"' ) cad += s[ i ];
			else{
				if( ct == 0 ){
					cad += "``";
					ct++;
				}
				else{
					cad += "''";
					ct--;
				}
			}
		}
		cout << cad << endl;
	}
	return 0;
}
