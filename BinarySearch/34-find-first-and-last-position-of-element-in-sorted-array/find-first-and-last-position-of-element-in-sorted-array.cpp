class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        // First position >= target
        int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();

        // Last position <= target
        int last = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;

        // Target not found
        if (first >= nums.size() || nums[first] != target)
            return {-1, -1};

        return {first, last};
    }
};