class Solution {
public:
    int findMin(vector<int>& nums) {
        //int min=99999999999;
        // for(int i=0;i<nums.size();i++){
        //     //************** THE FIRST APPROACH *******************
        //     //
        //     // if(min>nums[i]){
        //     //     min=nums[i];
        //     // }
            
            

        // }
        //************** THE SECOND APPROACH *******************
        sort(nums.begin(),nums.end());
        
        return nums[0];
    }
};