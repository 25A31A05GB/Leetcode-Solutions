class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0; // Empty array

        sort(nums.begin(), nums.end()); // Sort the array

        int longest = 1;       // Longest sequence
        int currentLength = 1; // Current sequence

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1])
                continue; // Skip duplicates

            else if (nums[i] == nums[i - 1] + 1)
                currentLength++; // Consecutive number

            else
                currentLength = 1; // Sequence breaks

            longest = max(longest, currentLength); // Update longest
        }

        return longest; // Return answer
    }
};