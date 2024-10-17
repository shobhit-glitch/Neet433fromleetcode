class Solution {
public:

    void cnt1s(int num,vector<int> &ans){
        int count=0;
        for(int j=0;j<32;j++){
            if(((num>>j)&1) ==1){
                count++;
            }
        }
        ans.push_back(count);

        
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        
        for(int i=0;i<=n;i++){
            cnt1s(i,ans);
        }
        return ans;
    }
    
};