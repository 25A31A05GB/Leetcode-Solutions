class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();

        // We use set so duplicate answers won't come
        set<vector<int>> st;

        // Taking first number
        for (int i = 0; i < n; i++) {

            // Taking second number
            for (int j = i + 1; j < n; j++) {

                // This will store numbers we already got
                unordered_set<long long> seen;

                // Taking third number
                for (int k = j + 1; k < n; k++) {

                    // Finding what fourth number we need
                    long long fourthguy =
                        (long long)target - nums[i] - nums[j] - nums[k];

                    // If we already saw that number, answer is found
                    if (seen.count(fourthguy)) {

                        vector<int> dummyarr = {nums[i], nums[j], nums[k],
                                                (int)fourthguy};

                        // Sorting so same answers will look same
                        sort(dummyarr.begin(), dummyarr.end());

                        // Putting answer into set
                        st.insert(dummyarr);
                    }

                    // Storing current number for next checking
                    seen.insert(nums[k]);
                }
            }
        }

        // Converting set into vector and returning
        return vector<vector<int>>(st.begin(), st.end());
    }
};