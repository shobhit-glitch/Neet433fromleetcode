class Solution {
public:
    int search(vector<int>& nums, int target) {
        //****************FIRST APPROACH****************
        // int i;
        // for(i=0;i<nums.size();i++){
        //     if(nums[i]==target){
        //         break;
        //     }
        // }
        // if(nums.size()==i){
        //     return -1;
        // }
        // return i;
        //****************SECOND APPROACH****************
        int n=nums.size();
        int left=0;
        int right=nums.size()-1;
        int mid=(right+left)/2;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>=nums[left]){
                if(target >= nums[left] && target <=nums[mid]){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            else{
                if(target>=nums[mid]&& target<=nums[right]){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
        }
        return -1;
        
    }
};