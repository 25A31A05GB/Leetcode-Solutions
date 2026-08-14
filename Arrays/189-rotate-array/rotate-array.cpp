class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1) return;

        k = k % n; //gives how many positions we rotate(k rotations)
        if (k == 0) return;

        // Reverse last k elements
        reverse(nums.end() - k, nums.end());
        // Reverse first n-k elements
        reverse(nums.begin(), nums.end() - k);
        // Reverse entire array
        reverse(nums.begin(), nums.end());
    }
};