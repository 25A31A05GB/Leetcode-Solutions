class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length();
        int count = 1;
        int start = 0;

        for (int i = 0; i < len - 1; i++) {
            // Odd Length Palindrome
            int left = i;
            int right = i;
            while (left >= 0 && right < len && s[left] == s[right]) {
                int maxlen = right - left + 1; 
                //gives length of substring
                if (maxlen > count) {
                    count = maxlen;
                    start = left;
                     //left gives start of palindrome
                }
                left -= 1;
                right += 1;
            }
            // Odd Length Palindrome
            left = i;
            right = i + 1;
            while (left >= 0 && right < len && s[left] == s[right]) {
                int maxlen = right - left + 1;
                if (maxlen > count) {
                    count = maxlen;
                    start = left;
                }
                left -= 1;
                right += 1;
            }
        }
        return s.substr(start, count);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna