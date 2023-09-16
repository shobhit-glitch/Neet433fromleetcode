class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //************** [BRUTE FORCE APPROACH ] **************
        int n=nums.size();
        vector<int>v;
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    flag=1;
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
        return v;
        
    }
};