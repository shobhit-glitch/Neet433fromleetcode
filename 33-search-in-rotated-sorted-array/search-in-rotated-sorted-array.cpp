class Solution {
public:
    int search(vector<int>& nums, int target) {
        //TC->O(N)
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]==target){
        //         return i;
        //     }
        // }
        // return -1;
        // CAN BE DONE IN TC->O(nlog(n))
        //BINARY SEARCH 
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                ans=mid;
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
        return ans;
    }
};