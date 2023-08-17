class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int maxcnt=1;
        int cnt=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]==(nums[i-1]+1)){
                cnt++;
                
            }
            else if(nums[i] != nums[i - 1]){
                 maxcnt = max(maxcnt, cnt);
                 cnt = 1;
            }
        }
        
        return max(maxcnt,cnt);
    }
};