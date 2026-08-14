class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = 0;
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
            //accessing highest freq element 
            // size/2 helps to get rid of TLE
            if (mpp[nums[i]] > nums.size() / 2) 
                return nums[i];
        }
        return -1;
    }
};