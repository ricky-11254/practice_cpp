class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int size = nums.size();

        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        int groupIndex = 0;

        for (int i = 0; i < size; i += 3) {
            if (i + 2 < size && nums[i + 2] - nums[i] <= k) {
                result.push_back({nums[i], nums[i + 1], nums[i + 2]});
                groupIndex++;
            } else {
                // If the condition is not met, return an empty array
                return {};
            }
        }

        return result;
    }
};
