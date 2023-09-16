class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        //**************** [ HASH MAP APPROACH ] ****************
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto ite:m){
            if(ite.second>(nums.size()/3)){
                v.push_back(ite.first);
            }
        }
        return v;
    }
};