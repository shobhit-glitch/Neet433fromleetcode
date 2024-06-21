class Solution {
public:

    void rotate(vector<int>& nums, int k) {
        
        // int n=nums.size();
        // vector<int>sec;
        // k=k%n;
        // for(int i=n-k;i<n;i++){
        //     sec.push_back(nums[i]);
        // }
        // for(int i=0;i<n-k;i++){
        //     sec.push_back(nums[i]);
        // }
        // for(int i=0;i<n;i++){
        //     nums[i]=sec[i];
        // }
        int n = nums.size();
        k = k % n; 
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        
    }
};