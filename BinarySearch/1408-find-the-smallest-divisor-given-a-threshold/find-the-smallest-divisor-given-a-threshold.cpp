class Solution {
public:
    long long Div(vector<int>& nums, int j) {
        long long num = 0;
        for (int i = 0; i < nums.size(); i++) {
            num += ceil((double)nums[i] / j);
        }
        return num;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int mx = *max_element(nums.begin(), nums.end());
        int ans = mx;

        while (low <= mx) {
            int mid = low + (mx - low) / 2;
            long long sum = Div(nums, mid);
            if(sum<=threshold){
                ans=mid;
               mx=mid-1;
            }
            else{
               low = mid + 1;
            }

            
        }
        return ans;

        
    }
};