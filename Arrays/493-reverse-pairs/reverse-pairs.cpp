class Solution {
public:

    // Merge two sorted parts and count reverse pairs
    int merge(vector<int>& nums, int low, int mid, int high) {

        int count = 0;
        int j = mid + 1;

        // Count pairs: nums[i] > 2 * nums[j]
        for (int i = low; i <= mid; i++) {

            while (j <= high && (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }

            // All elements before j form valid pairs
            count += j - (mid + 1);
        }

        // Temporary array for merging
        vector<int> temp;

        int left = low;
        int right = mid + 1;

        // Merge both sorted halves
        while (left <= mid && right <= high) {

            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            }
            else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        // Add remaining left elements
        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        // Add remaining right elements
        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        // Copy sorted elements back to nums
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }

        return count;
    }


    // Divide array and count reverse pairs
    int mergeSort(vector<int>& nums, int low, int high) {

        // One element = already sorted
        if (low >= high)
            return 0;

        int mid = (low + high) / 2;

        int count = 0;

        // Count pairs in left half
        count += mergeSort(nums, low, mid);

        // Count pairs in right half
        count += mergeSort(nums, mid + 1, high);

        // Count pairs across both halves
        count += merge(nums, low, mid, high);

        return count;
    }


    // Main function
    int reversePairs(vector<int>& nums) {

        // Use merge sort to count reverse pairs
        return mergeSort(nums, 0, nums.size() - 1);
    }
};