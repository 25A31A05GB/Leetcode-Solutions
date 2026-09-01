class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) return mid;

            // Left half is sorted
            if (nums[low] <= nums[mid]) {
                // Target lies in left sorted half
                if (nums[low] <= target && nums[mid] > target)
                    high = mid - 1;
                else
                    low = mid + 1;
            }

            // Right half is sorted
            else {
                // Target lies in right sorted half
                if (nums[high] >= target && nums[mid] < target)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }

        return -1;
    }
};