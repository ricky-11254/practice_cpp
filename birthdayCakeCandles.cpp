#include <iostream>
using namespace std;

int main() {	
	int n,  j= 0, z, x;
	cin >> n;
	for( int i=0; i<n; i++ ) {
		cin >> x;
		if( x > j ) {
			j = x; 
			z = 1;
		}
		else if( x == j )
			z++;
	}
	cout << z;
	return 0;
}
