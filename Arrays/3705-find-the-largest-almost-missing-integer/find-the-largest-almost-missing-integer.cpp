class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        unordered_map<int, int> count;

        // Generate every subarray of size k
        for (int i = 0; i <= nums.size() - k; i++) {

            unordered_set<int> seen;

            // Traverse the current window and insert to set
            for (int j = i; j < i + k; j++) {
                seen.insert(nums[j]);
            }

            // Count each unique number once for this window
            for (int x : seen) {
                count[x]++;
            }
        }
        int ans = -1;

        // Traverse the frequency map
        for (auto it = count.begin(); it != count.end(); it++) {
            int x = it->first;
            int freq = it->second;
            if (freq == 1)
                ans = max(ans, x);
        }

        return ans;
    }
};