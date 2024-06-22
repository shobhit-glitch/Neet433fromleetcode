class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        // if(n==1){
        //     return;
        // }
        // int j=0;
        // int lastnum=INT_MIN;
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=0 & nums[i]!=lastnum){
        //         nums[j]=nums[i];    //NOT HANDLING THE REPLICATED ONES
        //         lastnum=nums[j];
        //         j++;
        //     }
            
        // }
        int j=0;
        for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }
        while(j<n){
            nums[j]=0;
            j++;
        }
        
    }
};