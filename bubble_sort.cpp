#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int array[n];
	cin>>n;
	for(int i =0; i<=n;i++){
		cin>>array[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			if (array[j] > array[j+1]) {
				swap(array[j],array[j+1]);
			}
		}
	}
	for(int i=0;i<=n;i++){
		cout<<array[i]<<" ";
	}
}
