
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[right]) {
                left = mid + 1;  // Minimum is on the right
            } else {
                right = mid;     // Minimum is at mid or on the left
            }
        }

        return nums[left];
    }
};
