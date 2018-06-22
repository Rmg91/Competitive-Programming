/*** Generate all permutations of an array ***/

void allPermutations( int A[ ], int n ){
	sort( A, A + n );
	do{
		for( int i = 0; i < n; ++i ) cout << A[ i ] << " ";
		cout << endl;
	} while( next_permutation( A, A + n ) );
}
