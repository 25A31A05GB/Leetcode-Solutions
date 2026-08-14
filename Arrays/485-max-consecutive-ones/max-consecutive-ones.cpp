class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i, count = 0, largest = 0;
        for (i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count++;
                //gets the max for each iteration
                largest = max(count, largest); // kadanes algo
            } else
                count = 0;
        }
        return largest;
    }
};