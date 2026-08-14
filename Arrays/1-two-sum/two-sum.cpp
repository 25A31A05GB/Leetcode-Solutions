class Solution {
public:
// Two-pointers 
    vector<int> twoSum(vector<int>& n, int target) {
        for(int i = 0; i < n.size(); i++) {
            for(int j = i + 1; j < n.size(); j++) {
                if(n[i] + n[j] == target) {
                    return {i, j};
                }
            }
        }
        
        return {};   
    }
};