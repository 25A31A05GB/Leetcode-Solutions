
class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int ans = 0;

        for (char j : s) {
            if (j == '(') {
                count++;                  // Increase current depth
                ans = max(ans, count);    // Update maximum depth
            }

            if (j == ')') {
                count--;                  // Decrease current depth
            }
        }

        return ans; // Return maximum depth
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna