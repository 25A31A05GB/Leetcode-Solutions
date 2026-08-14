class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(); also works but time is nlogn 
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n-1; j++) {
                if (nums[j] > nums[j+1]) //sorting technique 
                    swap(nums[j], nums[j+1]);
            }
        }
    }
};