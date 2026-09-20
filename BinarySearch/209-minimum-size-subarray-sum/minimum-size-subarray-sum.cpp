class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, sum = 0, ans = INT_MAX;

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right]; // expand window

            while (sum >= target) {
                // sum matches → shrink to find minimum length
                ans = min(ans, right - left + 1);
                // window length
                sum -= nums[left++];
                // remove left & shrink
            }
        }
        if (ans == INT_MAX)
            return 0;

        return ans;
    }
};