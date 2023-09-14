class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=99999999999;
        for(int i=0;i<nums.size();i++){
            //************** THE FIRST APPROACH *******************
            
            if(min>nums[i]){
                min=nums[i];
            }
            
            

        }
        return min;
        //************** THE SECOND APPROACH *******************
        //beats 100% users runtime and 12.04% in memory
        // sort(nums.begin(),nums.end());
        
        // return nums[0];
    }
};