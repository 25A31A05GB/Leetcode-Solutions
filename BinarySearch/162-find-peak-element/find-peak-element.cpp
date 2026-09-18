class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Check left neighbor (or ignore if mid == 0)
            if (mid > 0 && nums[mid] < nums[mid - 1]) {
                high = mid - 1;
            }
            // Check right neighbor (or ignore if mid == n-1)
            else if (mid < n - 1 && nums[mid] < nums[mid + 1]) {
                low = mid + 1;
            }
            // Mid is peak
            else {
                return mid;
            }
        }

        return -1; // should never reach here
    }
};