class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int maxlen=0;
        unordered_map<char,int>res;
        for(int j=0;j<s.length();j++){
            res[s[j]]++;

            while(res[s[j]]>1){
                res[s[i]]--;
                i++;
            }
            maxlen=max(maxlen,j-i+1);
        }
        return maxlen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna