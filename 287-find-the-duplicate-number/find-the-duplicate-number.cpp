class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //*************[ BRUTE FORCE APPROACH ]*************
        int n=nums.size();
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         return nums[i];
        //     }
        // }
        // return -1;
        //*************[ HASH TABLE APPROACH ]*************
        
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto p:m){
            if(p.second>1){
                return p.first;
            }
        }
        return -1;

    }
};