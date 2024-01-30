#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numIndices;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndices.find(complement) != numIndices.end()) {
            return {numIndices[complement], i};
        }
        numIndices[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = twoSum(nums1, target1);
    cout << "Output for Example 1: [" << result1[0] << ", " << result1[1] << "]\n";
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = twoSum(nums2, target2);
    cout << "Output for Example 2: [" << result2[0] << ", " << result2[1] << "]\n";
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = twoSum(nums3, target3);
    cout << "Output for Example 3: [" << result3[0] << ", " << result3[1] << "]\n";
    return 0;
}