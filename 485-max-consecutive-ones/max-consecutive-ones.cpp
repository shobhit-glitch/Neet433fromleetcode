class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxl=0;
        int len=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==1){
                len++;
                if(len>maxl){
                    maxl=len;
                }
                
            }
            else{
                len=0;
            }
        }
        return maxl;
    }
};