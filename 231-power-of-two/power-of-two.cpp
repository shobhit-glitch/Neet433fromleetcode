class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        string s="";
        int cnt=0;
        while(n>0){
            int res=n%2;
            if(res==1){
                cnt++;
                s+='1';
            }
            else{
                s+='0';
            }
            n=n/2;

        }
        if(cnt==1 && s[0]!='1'){
            return true;
        }
        return false;
    }    
};