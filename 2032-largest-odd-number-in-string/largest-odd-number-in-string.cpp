class Solution {
public:
    string largestOddNumber(string num) {
        string res="";
        int n=num.length();
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2==1){
                res=num.substr(0,i+1);
                break;
            }
        }
        return res;
    }
};