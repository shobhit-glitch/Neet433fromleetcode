class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start=0;int end;int cnt=0;
        int maxi=-1;
        for(end=0;end<nums.size();end++){
            if(nums[end]==0){
                cnt++;
            }
            if(cnt>k){
                if(nums[start]==0){
                    cnt--;

                }
                start++;
            }
        }
        return end-start;

    }
};