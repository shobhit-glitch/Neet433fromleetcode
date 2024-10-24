class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int n=nums.size();
        int r=n-1;
        int pos=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                pos=mid;
                return pos;
            }
            if(nums[l]<=nums[mid]){
                if(nums[l]<=target && target<=nums[mid]){
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
        return pos;
    }
};