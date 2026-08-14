class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool status = false;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) //(i+k)%n ->condition for rotation 
            {
                if (status) {
                    return false;
                }
                status = true;
            }
        }

        return true;
    }
};