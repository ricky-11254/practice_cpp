#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    long long expectedSum = n * (n + 1) / 2;
    long long expectedSumOfSquares = n * (n + 1) * (2 * n + 1) / 6;

    long long actualSum = 0;
    long long actualSumOfSquares = 0;

    for (int num : nums) {
        actualSum += num;
        actualSumOfSquares += static_cast<long long>(num) * num;
    }

    long long sumDiff = expectedSum - actualSum;
    long long sumOfSquaresDiff = expectedSumOfSquares - actualSumOfSquares;
    int duplicatedNumber = static_cast<int>((sumOfSquaresDiff + sumDiff * sumDiff) / (2 * sumDiff));
    int missingNumber = static_cast<int>(duplicatedNumber - sumDiff);
    return {duplicatedNumber, missingNumber};
}

int main() {
    vector<int> nums1 = {1, 2, 2, 4};
    vector<int> result1 = findErrorNums(nums1);
    cout << "[" << result1[0] << ", " << result1[1] << "]" << endl;  // Output: [2, 3]
    vector<int> nums2 = {1, 1};
    vector<int> result2 = findErrorNums(nums2);
    cout << "[" << result2[0] << ", " << result2[1] << "]" << endl;  // Output: [1, 2]
    return 0;
}