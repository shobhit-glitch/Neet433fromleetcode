class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string f;
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                f+=tolower(s[i]);
            }
        }
        int len=f.length();
        
        bool flag=true;
        for(int i=0;i<len/2;i++){
            if(f[i]!=f[len-i-1]){
                
                return false;
                break;
            }
        }
        return flag;
    }
};