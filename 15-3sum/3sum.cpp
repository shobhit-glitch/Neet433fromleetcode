class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int k=0;k<n;k++){
            if(k>0 && nums[k]==nums[k-1])continue;
            int i=k+1;
            int j=n-1;
            int sum=0;
            while(i<j){
                sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    j--;
                }
                else if(sum<0){
                    i++;
                }
                else{
                    v.push_back({nums[i],nums[j],nums[k]});
                    i++;
                    j--;
                    while(i<j && nums[i]==nums[i-1])i++;
                    while(i<j && nums[j]==nums[j+1])j--;
                }

            }
        }
        return v;
    }
};