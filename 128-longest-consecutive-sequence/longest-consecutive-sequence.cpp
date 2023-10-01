class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int max=1;
        int cnt=1;
        for(int i=0;i<(nums.size()-1);i++){
            
            if(nums[i+1]==(nums[i]+1)){
                cnt++;  
            }
            else if (nums[i] != nums[i+1]) {
                cnt = 1;
            }
            if(max<cnt){
                max=cnt;
            }
        }
        return max;
    }
};