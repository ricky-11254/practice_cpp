#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	int n;
	cin>>n;
	for(int i =0;i<=n;i++){
		int k;
		cin>>k;
		v.push_back(k);
		random_shuffle(v.begin(), v.end());
	}
	for(int i =0;i<=v.size();i++){
		cout<<v[i]<<" ";
	}
	
}
