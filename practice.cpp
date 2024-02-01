#include <bits/stdc++.h>
using namespace std;
void sort(vector<int>&nums);
void sort(vector<int>&nums, int n){
    cin>>n;
    for(int i=0; i<=n;i++){
    	int k;
    	cin>>k;
        nums.push_back(k);
        sort(nums.begin(), nums.end());
    }
    for(int i =0;i<nums.size(); i++){
    	cout<<nums[i]<<endl;
	}
    
}
int main(){
    vector<int> nums;
    int n;
     sort(nums, n);
     return 0;
}
