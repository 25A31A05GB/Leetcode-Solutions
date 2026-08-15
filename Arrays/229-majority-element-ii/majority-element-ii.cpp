class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int reqsize = n / 3;

        unordered_map<int, int> mp;

        // Count frequency
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        vector<int> result;

        // Find elements occurring > n/3 times
        for (auto it : mp) //tarverse through each 
         {
            if (it.second > reqsize) {
                result.push_back(it.first);
            }
        }

        return result;
    }
};