class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return ""; // If the vector is empty, return an empty string
        }

        sort(strs.begin(), strs.end());

        string first = strs.front(); // Get the first string (smallest after sorting)
        string last = strs.back();   // Get the last string (largest after sorting)
        
        string res;

        // Compare characters of the first and last strings
        for (int i = 0; i < first.length(); i++) {
            if (first[i] != last[i]) {
                break;
            }
            res.push_back(first[i]);
        }
        
        return res;
    }
};