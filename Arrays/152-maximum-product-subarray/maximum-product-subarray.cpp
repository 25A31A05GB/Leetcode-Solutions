class Solution { 
public: 
    int maxProduct(vector<int>& nums) { 
        int n = nums.size(); 
        int result = INT_MIN; // Stores maximum possible product

        for(int i = 0; i < n; i++) { 
            int product = 1; 

            for(int j = i; j < n; j++) { 
                product *= nums[j]; // Extend subarray and product 
                result = max(result, product); // Update maximum
            } 
        } 

        return result; 
    } 
};