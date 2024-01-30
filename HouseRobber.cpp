#include <iostream>
#include <vector>

using namespace std;

int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];

    vector<int> dp(n, 0);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (int i = 2; i < n; ++i) {
        dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
    }

    return dp[n-1];
}

int main() {
    // Example 1
    vector<int> nums1 = {1, 2, 3, 1};
    cout << "Example 1: " << rob(nums1) << endl;  // Output: 4

    // Example 2
    vector<int> nums2 = {2, 7, 9, 3, 1};
    cout << "Example 2: " << rob(nums2) << endl;  // Output: 12

    return 0;
}

