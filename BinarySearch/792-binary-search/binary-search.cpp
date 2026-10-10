class Solution {
public:
    // normal binary search
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2; // Find middle

            if (nums[mid] == target)
                return mid; // Found

            else if (nums[mid] > target)
                high = mid - 1; // Left half

            else
                low = mid + 1; // Right half
        }

        return -1; // Not found
    }
};