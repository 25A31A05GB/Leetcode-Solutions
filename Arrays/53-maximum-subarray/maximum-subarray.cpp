class Solution {
public:
 //Sliding window fails as array has -ve elements
    int maxSubArray(vector<int>& nums) {
        int csum = nums[0];
        int maxsum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            // Kadanes algo
            csum = max(nums[i], csum + nums[i]);
            maxsum = max(csum, maxsum);
        }
        return maxsum;
    }
};