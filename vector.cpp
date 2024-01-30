#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector <int> v;
	for(int i = 0;i<=6;i++){
		int k;
		cin>>k;
		v.push_back(k);
	}
	for(int i =0; i<=6;i++){
		cout<<v[i]<<" ";
	}
}
