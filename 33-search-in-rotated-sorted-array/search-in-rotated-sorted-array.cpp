class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]==target){
                break;
            }
        }
        if(nums.size()==i){
            return -1;
        }
        return i;
    }
};