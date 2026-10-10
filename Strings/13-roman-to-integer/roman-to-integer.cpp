
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> values = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;

        for (int i = 0; i < s.length(); i++) {
            // Handle subtractive pairs
            if (i > 0 && s[i - 1] == 'I' && s[i] == 'V')
                total += 3;   // IV = 4 (I was already counted)
            else if (i > 0 && s[i - 1] == 'I' && s[i] == 'X')
                total += 8;   // IX = 9
            else if (i > 0 && s[i - 1] == 'X' && s[i] == 'L')
                total += 30;  // XL = 40
            else if (i > 0 && s[i - 1] == 'X' && s[i] == 'C')
                total += 80;  // XC = 90
            else if (i > 0 && s[i - 1] == 'C' && s[i] == 'D')
                total += 300; // CD = 400
            else if (i > 0 && s[i - 1] == 'C' && s[i] == 'M')
                total += 800; // CM = 900
            else
                total += values[s[i]]; // Add normal value
        }

        return total;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna