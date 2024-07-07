class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        
        // for(int i=0;i<n;i++){
        //     int num=nums[i];
        //     int cnt=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[i]==nums[j]){     TIME COMPLEXITY -> N^2
        //             cnt++;
        //         }
                
        //     }
        //     if(cnt==1){
        //             return nums[i];
        //     }
        // }
        // return -1;
        //ONE WITH ANOTHER VECTOR TO STORE OCCURENCE
        //BIT MANIPULATION TECHNIQUE
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};