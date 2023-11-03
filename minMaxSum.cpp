#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void minMaxSum( vector<int>, arr){
    sort(arr.begin(), arr.end());
    long size = arr.size(), minsum=0, maxsum =0;
    for(int i=0;i<4;i++){
    	minsum +=arr[i];
    	maxsum +=arr{size-1-i};
	}
	cout<<minsum<<" "<<maxsum;
}
int main(){
    int arr[5];
    for(int i =0; i<=4; i++){
        cin>>arr[i];
    }
    
    minMaxSum (arr);
    return 0;
}
