class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        
        if(s==" "){
            return true;
        }
        string str="";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                s[i]=tolower(s[i]);
                str+=s[i];
            }
        }
        
        //str=toLower(str);
        cout<<str<<endl;
        int m=str.length();
        //if(m==1)return false;
        for(int i=0;i<m/2;i++){
            if(str[i]!=str[m-i-1]){
                cout << str[i]<<i << " does not match " << str[m - i - 1] << endl;
                return false;
            }
        }
        return true;
    }
};