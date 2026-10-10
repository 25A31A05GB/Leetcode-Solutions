
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();

        while (i < n && s[i] == ' ') i++; // Skip spaces

        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1; // Set sign
            i++;
        }

        long long num = 0;

        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0'; // Convert char to digit

            // Check overflow before updating number
            if (num > (2147483647LL - digit) / 10) {
                if (sign == 1) return 2147483647;
                else return -2147483648LL;
            }

            num = num * 10 + digit; // Build number
            i++;
        }

        num *= sign; // Apply sign
        return (int)num; // Return integer
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna