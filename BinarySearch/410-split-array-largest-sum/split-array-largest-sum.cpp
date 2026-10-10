
class Solution {
public:
    bool isPossible(vector<int>& nums, int k, int mid) {
        int subarrays = 1;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] <= mid) {
                sum += nums[i]; // Add to current subarray
            } else {
                subarrays++;    // Start new subarray
                sum = nums[i];

                if (subarrays > k)
                    return false; // Too many subarrays
            }
        }

        return true; // Can split within k subarrays
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end()); // Largest element
        int high = accumulate(nums.begin(), nums.end(), 0); // Total sum
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2; // Try maximum sum

            if (isPossible(nums, k, mid)) {
                ans = mid;      // Valid; minimize maximum sum
                high = mid - 1;
            } else {
                low = mid + 1;  // Sum too small
            }
        }

        return ans;
    }
};
