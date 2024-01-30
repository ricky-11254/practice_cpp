#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int db[n];
	for(int i=0; i<=n;i++){
		cin>>db[i];
	}
	int SequentialSearch(int key, int db[] )
	return 0;
}
int SequentialSearch(int key, int db[] ) 
{
	int index;
	for( index=0; index<db.length; index++ ) {
		if(db[index]==key ){
			return index;
		} else {
			cout<<"-1";
		}
	}
}
