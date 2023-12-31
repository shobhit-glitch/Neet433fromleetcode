class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //**************** [ HASH MAP APPROACH ] ****************
        // unordered_map<int,int>m;
        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]++;
        // }
        // for(auto ite:m){
        //     if(ite.second>(nums.size()/2)){
        //         return ite.first;
        //     }
        // }
        // return -1;
        //**************** [ SOLUTION BASED APPROACH ] ****************
        //**************** [ CRWAZYYYYYYYYYYYYYYYYYY ] ****************
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];

    }
};