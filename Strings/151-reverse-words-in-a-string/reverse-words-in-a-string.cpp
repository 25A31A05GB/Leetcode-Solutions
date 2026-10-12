class Solution {
public:
    string reverseWords(string s) {
        vector<string> out;
        string str = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                str += s[i];
            } else {
                if (!str.empty()) { // Don't push empty words
                    out.push_back(str);
                    str = "";
                }
            }
        }

        if (!str.empty()) {
            out.push_back(str);
        }

        str = ""; // Reset before building the answer

        for (int j = out.size() - 1; j >= 0; j--) {
            str += out[j];

            if (j != 0) {
                str += " ";
            }
        }

        return str;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna