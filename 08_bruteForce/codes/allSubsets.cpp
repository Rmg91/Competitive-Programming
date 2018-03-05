/*** Generate all subsets of an array ***/

void generateSubsets( int A[ ], int n ){
	for( int mask = 0; mask < (1 << n); mask++ ){
		for( int i = 0; i < n; ++i ){
			if( (mask >> i) & 1 ) cout << A[ i ] << " "; 
		}
		cout << endl;
	}
}

