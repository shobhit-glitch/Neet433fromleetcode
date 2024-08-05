class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        bool ans=false;
        if(l==r){
            if(target==nums[l]){
                return true;
            }else{
                return false;
            }
                
            
        }
        while(l<=r){
            int mid=l+(r-l)/2;
            if(target==nums[mid]){
                ans=true;
                return ans;
            }
            if(nums[l]==nums[mid] && nums[r]==nums[mid]){
                l=l+1;
                r=r-1;
                continue;
            }
            if(nums[l]<=nums[mid]){
                if(nums[l]<=target && nums[mid]>=target){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
                
            }
            else{
                if(nums[mid]<=target && nums[r]>=target){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
        return ans;
    }
};