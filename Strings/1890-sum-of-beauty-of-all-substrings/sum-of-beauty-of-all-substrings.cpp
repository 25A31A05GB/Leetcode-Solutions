class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<char, int> freq;

            for (int j = i; j < n; j++) {

                // Add current character
                freq[s[j]]++;

                int maxFreq = INT_MIN;
                int minFreq = INT_MAX;

                // Find max and min frequency
                for (auto it : freq) {
                    maxFreq = max(maxFreq, it.second);
                    minFreq = min(minFreq, it.second);
                }

                // Add beauty of current substring
                ans += maxFreq - minFreq;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna