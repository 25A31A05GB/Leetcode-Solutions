class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                arr1.push_back(nums[i]); //add positive num
            } else {
                arr2.push_back(nums[i]); //add negative num
            }
        }

        vector<int> result;
     // consecutibe positive and negative nums
        for (int i = 0; i < arr2.size(); i++) {
            result.push_back(arr1[i]); // a positive
            result.push_back(arr2[i]); // a negative
        }

        return result;
    }
};