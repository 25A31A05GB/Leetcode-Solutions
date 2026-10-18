class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    return false;
                }

                char top = st.top();
                st.pop();

                if ((s[i] == ')' && top != '(') ||
                    (s[i] == '}' && top != '{') ||
                    (s[i] == ']' && top != '[')) {
                    return false;
                }
            }
        }

        if (st.empty()) {
            return true;
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna