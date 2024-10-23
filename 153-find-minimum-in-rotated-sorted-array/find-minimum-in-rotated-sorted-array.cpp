class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=INT_MIN;
        int mini=INT_MAX;
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[l]<=nums[r]){
                mini=min(mini,nums[l]);
                break;
            }
            if(nums[mid]>=nums[l]){
                mini=min(mini,nums[l]);
                l=mid+1;
            }
            else{
                mini=min(mini,nums[mid]);
                r=mid-1;
            }
            
        }
        return mini;

    }
};