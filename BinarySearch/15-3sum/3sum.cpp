class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        // Sort for two pointers
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {

            // Skip duplicate i
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {

                // Find 3 numbers
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicate left
                    while (left < right && nums[left] == nums[left + 1])
                        left++;

                    // Skip duplicate right
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                } else if (sum < 0) {
                    // Need bigger sum
                    left++;
                } else {
                    // Need smaller sum
                    right--;
                }
            }
        }

        return ans;
    }
};