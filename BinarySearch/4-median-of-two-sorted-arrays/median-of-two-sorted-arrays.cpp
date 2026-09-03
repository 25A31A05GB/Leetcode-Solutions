class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        // Merge both arrays
        vector<int> merged = nums1;
        merged.insert(merged.end(), nums2.begin(), nums2.end());

        // Sort the merged array
        sort(merged.begin(), merged.end());

        int n = merged.size();

        // If size is odd, return the middle element
        if (n % 2 == 1) {
            return merged[n / 2];
        }
        
        // If size is even, return average of two middle elements
        else {
            return (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
        }
    }
};