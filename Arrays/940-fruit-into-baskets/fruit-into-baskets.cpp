class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        unordered_map<int, int> mp;

        int left = 0;
        int ans = 0;

        for (int right = 0; right < fruits.size(); right++) {

            // Add current fruit
            mp[fruits[right]]++;

            // More than 2 different fruit types
            while (mp.size() > 2) {

                // Remove fruit from the left
                mp[fruits[left]]--;

                // If no fruits of this type remain,
                // remove the type from hashmap
                if (mp[fruits[left]] == 0) {
                    mp.erase(fruits[left]);
                }

                // Move left pointer
                left++;
            }

            // Current window is valid
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};