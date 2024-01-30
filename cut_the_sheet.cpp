#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
		int W, H, N;
		cin>>W>>H>>N;
		
		int X = 1;
		while(W%2==0){
			W/=2;
			X *= 2;
		}
		while (H%2==0){
			H/=2;
			X*=2;
		}
		if (X>=N){
			cout<<"Yes"<<endl;
		} else {
			cout<<"No"<<endl;
		}
	}
	return 0;
}
