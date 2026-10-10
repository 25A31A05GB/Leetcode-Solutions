class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<string> brac;
        int open = 0, close = 0;
        string str = "";
        // counting and inserting open and closed parantheses
        for (char ch : s) {
            if (ch == '(')
                open++;
            else
                close++;

            str += ch;
            // checking for one complete parentheses
            if (open == close) {
                brac.push_back(str);
                open = 0;
                close = 0;
                str = "";
            }
        }

        string conc = "";

        for (int i = 0; i < brac.size(); i++) {
            brac[i].erase(brac[i].size() - 1, 1);
            // remove last one
            brac[i].erase(0, 1);
            // remove first one
            conc += brac[i];
        }

        return conc;
    }
};