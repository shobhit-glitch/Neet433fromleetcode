class Solution {
public:

    int myAtoi(string s) {
    int n = s.length();
    int i = 0;
    bool neg = false;
    int ans = 0;

    
    while (i < n && s[i] == ' ') {
        i++;
    }

    
    if (i < n && s[i] == '-') {
        neg = true;
        i++;
    } else if (i < n && s[i] == '+') {
        i++;
    }

    
    while (i < n && s[i] == '0') {
        i++;
    }

    
    while (i < n && s[i] >= '0' && s[i] <= '9') {
        int l = s[i] - '0';
        
       
        if (ans > (INT_MAX - l) / 10) {
            return neg ? INT_MIN : INT_MAX;
        }
        
        ans = ans * 10 + l;
        i++;
    }

    
    if (neg) {
        ans = -ans;
    }

    return ans;
}
};