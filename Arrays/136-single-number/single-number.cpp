#include <unordered_map>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> countMap;

        for (int i = 0; i < nums.size(); i++) {
            countMap[nums[i]]++; //inserting into hashmap
        }

        for (auto it : countMap) {
            if (it.second == 1)
                return it.first; //return if element appear once
        }

        return -1; // should never happen
    }
};