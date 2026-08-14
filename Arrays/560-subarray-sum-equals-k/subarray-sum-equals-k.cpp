class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        long long sum = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i]; // Current prefix sum

            if (sum == k) {
                count++;

            } // check for nums satisfy cond in map
            if (mp.find(sum - k) != mp.end()) {
                count += mp[sum - k]; // Previous prefix sums
            }
            mp[sum]++; // Store prefix sum
        }

        return count;
    }
};