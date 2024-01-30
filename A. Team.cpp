#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int problem[]= {3};
	cin>>n;
	for (int i=0; i<=n;i++){
		cin>>problem[i];
		if(problem[0]+problem[1]+problem[2]>=2){
			cout<<problem[i];
		}
	}
	return 0;
}
